using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class playerGameData
{
    public bool saveGameOver;
    public bool saveisCombo;
    public int saveComboCount;
    public int savePlayerlife;
    public int saveScore;
    public List<int> activeGridSquares;
    public List<string> activeGridSquareColors;
    public int[] shapeDataIndexList = new int[] { -1, -1, -1};
}

public class Grid : MonoBehaviour
{
    public GameOverPopup gameOverPopup;
    public JewelSquareTextureData jewelSquareTextureData;
    public SquareTextureData squareTextureData;
    public Tutuorial tutuorial;
    public ShapeStorage shapeStorage;
    public GameObject shapes;
    public Scores score;
    public GameObject gridSquare;
    public int columns = 0;
    public int rows = 0;
    public Vector2 startPosition = new Vector2(-461.5f, 461.5f);
    public float squaresGap = 0.1f;
    public float squareScale = 1.0f;
    public float everySquareOffset = 0.5f;

    private Vector2 _offset = new Vector2(0.0f, 0.0f);
    private List<GameObject> _gridSquares = new List<GameObject>();
    private LineIndicator _lineIndicator;

    private Config.jewelSquare currentActiveJewelSquare_ = Config.jewelSquare.NotjewelSet;
    private Config.SquareColor currentActiveSquareColor_ = Config.SquareColor.NotSet;
    private string playerSaveGamekey = "playerSaveGame";
    private string playerSaveChallengeGamekey = "playerSaveChallengeGame";

    [HideInInspector]
    public playerGameData playerSaveGame_ = new playerGameData();

    public static string gamemode;
    public static int Playerlife;

    private void OnEnable()
    {
        GameEvents.CheckIfShapeCanBePlaced += CheckIfShapeCanBePlaced;
        GameEvents.UpdateSquareColor += OnUpdateSquareColor;
        GameEvents.UpdateJewelSquare += OnUpdateJewelSquare;
    }

    private void OnDisable()
    {
        GameEvents.CheckIfShapeCanBePlaced -= CheckIfShapeCanBePlaced;
        GameEvents.UpdateSquareColor -= OnUpdateSquareColor;
        GameEvents.UpdateJewelSquare -= OnUpdateJewelSquare;
    }

    void Start()
    {
        _lineIndicator = GetComponent<LineIndicator>();
        CreateGrid();

        if (BinaryDataStream.Exist(playerSaveGamekey)) {
            Debug.Log("저장 파일이 있습니다.");

            string jsonPlayerSaveGame_ = BinaryDataStream.Read<string>(playerSaveGamekey);
            playerSaveGame_ = JsonUtility.FromJson<playerGameData>(jsonPlayerSaveGame_);

            if (!playerSaveGame_.saveGameOver)
            {
                Debug.Log("저장 파일을 불러왔습니다.");
                Playerlife = playerSaveGame_.savePlayerlife;
                score.currentScores_ = playerSaveGame_.saveScore;
                ShapeStorage.isCombo = playerSaveGame_.saveisCombo;
                ShapeStorage.ComboCount = playerSaveGame_.saveComboCount;

                List<Sprite> saveActiveSquareTextures = new List<Sprite>();
                for (int i = 0; i < playerSaveGame_.activeGridSquareColors.Count; i++)
                {
                    for (int j = 0; j < squareTextureData.activeSquareTextures.Count; j++)
                    {
                        if (playerSaveGame_.activeGridSquareColors[i] == squareTextureData.activeSquareTextures[j].texture.ToString())
                        {
                            saveActiveSquareTextures.Add(squareTextureData.activeSquareTextures[j].texture);
                        }
                    }
                }

                for (int i = 0; i < playerSaveGame_.activeGridSquares.Count; i++)
                {
                    transform.GetChild(playerSaveGame_.activeGridSquares[i]).GetComponent<GridSquare>().ActivateSquare();
                    transform.GetChild(playerSaveGame_.activeGridSquares[i]).GetComponent<GridSquare>().Selected = false;
                    transform.GetChild(playerSaveGame_.activeGridSquares[i]).GetComponent<GridSquare>().SquareOccupied = true;
                    transform.GetChild(playerSaveGame_.activeGridSquares[i]).transform.GetChild(2).GetComponent<Image>().sprite = saveActiveSquareTextures[i];
                }
            }
            else {
                Playerlife = 1;
            }
        } else {
            Debug.Log("저장 파일이 없습니다.");
            
            tutuorial.tutuorial1();
            Playerlife = 1;
            currentActiveSquareColor_ = squareTextureData.activeSquareTextures[0].squareColor;
            currentActiveJewelSquare_ = jewelSquareTextureData.activeJewelSquareTextures[0].jewelSquare;
        }
    }

    private void OnUpdateSquareColor(Config.SquareColor color)
    {
        currentActiveSquareColor_ = color;
    }

    private void OnUpdateJewelSquare(Config.jewelSquare jewel)
    {
        currentActiveJewelSquare_ = jewel;
    }

    private void CreateGrid()
    {
        SpawnGridSquares();
        SetGridSquaresPosition();
    }

    private void SpawnGridSquares()
    {
        int square_index = 0;

        for (var row = 0; row < rows; ++row) {
            for (var column = 0; column < columns; ++column) {
                _gridSquares.Add(Instantiate(gridSquare) as GameObject);

                _gridSquares[_gridSquares.Count - 1].GetComponent<GridSquare>().SquareIndex = square_index;
                _gridSquares[_gridSquares.Count - 1].transform.SetParent(transform);
                _gridSquares[_gridSquares.Count - 1].transform.localScale = new Vector3(squareScale, squareScale, squareScale);
                //_gridSquares[_gridSquares.Count - 1].GetComponent<GridSquare>().SetImage(_lineIndicator.GetGridSquareIndex(square_index) / 2 == 0);
                square_index++;
            }
        }
    }

    private void SetGridSquaresPosition()
    {
        int column_number = 0;
        int row_number = 0;
        Vector2 square_gap_number = new Vector2(0.0f, 0.0f);
        bool row_moved = false;

        var square_rect = _gridSquares[0].GetComponent<RectTransform>();
        _offset.x = square_rect.rect.width * square_rect.transform.localScale.x + everySquareOffset;
        _offset.y = square_rect.rect.height * square_rect.transform.localScale.y + everySquareOffset;

        foreach (GameObject square in _gridSquares) {
            if (column_number + 1 > columns) {
                square_gap_number.x = 0;
                column_number = 0;
                row_number++;
                row_moved = true;
            }

            var pos_x_offset = _offset.x * column_number + (square_gap_number.x * squaresGap);
            var pos_y_offset = _offset.y * row_number + (square_gap_number.y * squaresGap);

            if (column_number > 0 && column_number % 3 == 0) {
                square_gap_number.x++;
                pos_x_offset += squaresGap;
            }

            if (row_number > 0 && row_number % 3 ==0 && row_moved == false) {
                row_moved = true;
                square_gap_number.y++;
                pos_y_offset += squaresGap;
            }

            square.GetComponent<RectTransform>().anchoredPosition = new Vector2(startPosition.x + pos_x_offset, startPosition.y - pos_y_offset);
            square.GetComponent<RectTransform>().localPosition = new Vector3(startPosition.x + pos_x_offset, startPosition.y - pos_y_offset, 0.0f);

            column_number++;
        }
    }

    private List<int> CheckSaveActiveGridSquares()
    {
        List<int> ActiveSquareIndexes = new();

        for (int i = 0; i < 64; i++)
        {
            if (transform.GetChild(i).transform.GetChild(2).gameObject.activeSelf)
            {
                ActiveSquareIndexes.Add(i);
            }
        }

        return ActiveSquareIndexes;
    }

    private List<string> CheckSaveActiveGridSquaresColor()
    {
        List<string> ActiveSquareColors = new();

        for (int i = 0; i < 64; i++)
        {
            if (transform.GetChild(i).transform.GetChild(2).gameObject.activeSelf)
            {
                ActiveSquareColors.Add(transform.GetChild(i).transform.GetChild(2).GetComponent<Image>().sprite.ToString()); 
            }
        }

        return ActiveSquareColors;
    }

    private void CheckIfShapeCanBePlaced()
    {
        var squareIndexes = new List<int>();

        foreach (var square in _gridSquares) {
            var gridSquare = square.GetComponent<GridSquare>();

            if (gridSquare.Selected && !gridSquare.SquareOccupied)
            {
                squareIndexes.Add(gridSquare.SquareIndex);
                gridSquare.Selected = false;
            }
        }

        Shape currentSelectedShape = shapeStorage.GetCurrentSelectedShape();
        if (currentSelectedShape == null)
        {
            return;
        }
        
        if (currentSelectedShape.TotalSquareNumber == squareIndexes.Count)
        {
            
            foreach (int squareIndex in squareIndexes)
            {
                _gridSquares[squareIndex].GetComponent<GridSquare>().PlaceShapeOnBoard(currentActiveSquareColor_);
            }

            int shapeLeft = 0;

            foreach (Shape shape in shapeStorage.shapeList) {
                if (shape.IsOnStartPosition() && shape.IsAnyOfShapeSqaureActive()) {
                    shapeLeft++;
                }
            }

            if (shapeLeft == 0) {
                if (gamemode == "" || gamemode == "ClassicGame" || gamemode == "ChallengeGame" || gamemode == "tutorial3")
                {
                    GameEvents.RequestNewShapes();
                }
                else {
                    shapeStorage.tutorialShapes();
                }
            }
            else {
                GameEvents.SetShapeInactive();
            }

            CheckIfAnyLineIsCompleted(currentSelectedShape.TotalSquareNumber);

        }
        else
        {
            GameEvents.MoveShapeToStartPosition();
        }
    }

    void CheckIfAnyLineIsCompleted(int currentSelectedShape)
    {
        List<int[]> lines = new List<int[]>();

        for (var colum = 0; colum < 8; colum++)
        {
            List<int> data = new List<int>(8);
            for (var index = 0; index < 8; index++)
            {
                data.Add(_lineIndicator.line_data[index, colum]);
            }

            lines.Add(data.ToArray());
        }

        for (var row=0; row < 8; row++)
        {
            List<int> data = new List<int>(8);
            for (var index=0; index < 8; index++)
            {
                data.Add(_lineIndicator.line_data[row, index]);
            }

            lines.Add(data.ToArray());
        }

        int completedLines = CheckIfSquaresAreCompleted(lines);

        if (gamemode == "" || gamemode == "ClassicGame") {
            if (completedLines > 0)
            {
                ShapeStorage.isCombo = true;
                ShapeStorage.ComboCount++;
            }

            int totalScores = (10 * (1 + ShapeStorage.ComboCount) * completedLines);
            GameEvents.AddScores(currentSelectedShape + totalScores);
        }

        if (completedLines >= 2)
        {
            if (audioManager.sfxsetting) {
                GameEvents.blockCompleted();
            }
            GameEvents.ShowLineCompletedWritings(completedLines);
        }

        shapeStorage.IsComboObject();

        AllBlockClear();

        CheckIfPlayLost();
    }

    private void AllBlockClear()
    {
        bool allClearCheck = true;

        for (int i=0; i<63; i++) {
            if (transform.GetChild(i).transform.GetChild(2).gameObject.activeSelf) {
                allClearCheck = false;
            }
        }

        if (gamemode == "tutorial1")
        {
            tutuorial.tutuorial2();

        } else if (gamemode == "tutorial2") {

            tutuorial.tutuorial3();
            
        } else if (gamemode == "tutorial3") {

            gamemode = "ClassicGame";

        }
        else {
            if (allClearCheck)
            {
                GameEvents.blockCompleted();
                GameEvents.ShowAllLineCompletedWritings();
                GameEvents.AddScores(300);
            }
        }
        
    }

    private int CheckIfSquaresAreCompleted(List<int[]> data)
    {
        int linesCompleted = 0;
        List<int[]> completedLines = new List<int[]>();

        foreach (int[] line in data) {
            bool lineCompleted = true;

            foreach (int squareIndex in line) {
                GridSquare comp = _gridSquares[squareIndex].GetComponent<GridSquare>();
                if (comp.SquareOccupied == false) {
                    lineCompleted = false;
                }
            }

            if (lineCompleted) {
                completedLines.Add(line);
            }
        }

        foreach (var line in completedLines) {
            var completed = false;

            foreach (var squareIndex in line) {
                var comp = _gridSquares[squareIndex].GetComponent<GridSquare>();
                comp.Deactivate();

                completed = true;
            }

            foreach (var squareIndex in line) {
                var comp = _gridSquares[squareIndex].GetComponent<GridSquare>();
                comp.ClearOccupied();
            }

            if (completed) {
                linesCompleted++;
            }
        }

        return linesCompleted;
    }

    public void CheckIfPlayLost()
    {
        var validShapes = 0;

        for (var index=0; index < shapeStorage.shapeList.Count; index++) {
            var isShapeActive = shapeStorage.shapeList[index].IsAnyOfShapeSqaureActive();
            if (CheckIfShapeCanBePlacedOnGrid(shapeStorage.shapeList[index]) && isShapeActive) {
                shapeStorage.shapeList[index]?.ActivateShape();
                validShapes++;
            }
        }

        //if (gamemode == "ClassicGame")
        //{
        //    Debug.Log("클래식게임 게임오버 체크");
        //    if (validShapes == 0)
        //    {
        //        adsManager.I.ShowRewardAd();
        //        GameEvents.GameOver(false);
        //    }
        //}
        //else if (gamemode == "ChallengeGame")
        //{
        //    Debug.Log("챌린지게임 게임오버 체크");
        //    if (validShapes == 0)
        //    {
        //        adsManager.I.ShowRewardAd();
        //        GameEvents.GameOver(false);
        //    }
        //}
        //else {
        //    Debug.Log("테스트 게임오버 체크");
        //    if (validShapes == 0)
        //    {
        //        adsManager.I.ShowRewardAd();
        //        GameEvents.GameOver(false);
        //    }
        //}

        if (validShapes == 0)
        {
            if (Playerlife > 0 && score.bestScores_.score <= 800)
            {
                gameOverPopup.RetryPopupActive();
            }
            else if (Playerlife > 0 && score.currentScores_ >= 800)
            {
                gameOverPopup.RetryPopupActive();
            }
            else if (score.currentScores_ >= score.bestScores_.score)
            {
                playerSaveGame_.saveGameOver = true;
                gameOverPopup.NewBestScoreActive();
                GameEvents.GameOver();
            }
            else
            {
                playerSaveGame_.saveGameOver = true;
                gameOverPopup.GameOverActive();
                GameEvents.GameOver();
            }
        }
        else {
            playerSaveGame_.saveGameOver = false;

            for (int i=0; i < 3; i++) {
                if (!shapes.transform.GetChild(i).transform.GetChild(0).gameObject.activeSelf) {
                    playerSaveGame_.shapeDataIndexList[i] = -1;
                }
            }

            playerSaveGame_.activeGridSquares = CheckSaveActiveGridSquares();
            playerSaveGame_.activeGridSquareColors = CheckSaveActiveGridSquaresColor();
        }

        playerSaveGame_.savePlayerlife = Playerlife;
        playerSaveGame_.saveScore = score.currentScores_;
        playerSaveGame_.saveisCombo = ShapeStorage.isCombo;
        playerSaveGame_.saveComboCount = ShapeStorage.ComboCount;

        string playerSaveGameData = JsonUtility.ToJson(playerSaveGame_);
        //Debug.Log(playerSaveGameData);
        if (gamemode == "" || gamemode == "ClassicGame")
        {
            BinaryDataStream.Save<string>(playerSaveGameData, playerSaveGamekey);
        }
        else if (gamemode == "ChallengeGame")
        {
            BinaryDataStream.Save<string>(playerSaveGameData, playerSaveChallengeGamekey);
        }
    }

    public void saveGame(bool resetGame)
    {
        for (int i = 0; i < 3; i++)
        {
            if (!shapes.transform.GetChild(i).transform.GetChild(0).gameObject.activeSelf)
            {
                playerSaveGame_.shapeDataIndexList[i] = -1;
            }
        }

        if (!resetGame) {
            playerSaveGame_.activeGridSquares = CheckSaveActiveGridSquares();
            playerSaveGame_.activeGridSquareColors = CheckSaveActiveGridSquaresColor();

            playerSaveGame_.savePlayerlife = Playerlife;
            playerSaveGame_.saveScore = score.currentScores_;
            playerSaveGame_.saveisCombo = ShapeStorage.isCombo;
            playerSaveGame_.saveComboCount = ShapeStorage.ComboCount;
        }

        string playerSaveGameData = JsonUtility.ToJson(playerSaveGame_);
        //Debug.Log(playerSaveGameData);
        if (gamemode == "" || gamemode == "ClassicGame")
        {
            BinaryDataStream.Save<string>(playerSaveGameData, playerSaveGamekey);
        }
        else if (gamemode == "ChallengeGame")
        {
            BinaryDataStream.Save<string>(playerSaveGameData, playerSaveChallengeGamekey);
        }
    }

    private bool CheckIfShapeCanBePlacedOnGrid(Shape currentShape)
    {
        ShapeData currentShapeData = currentShape.CurrentShapeData;
        int shapeColumns = currentShapeData.columns;
        int shapeRows = currentShapeData.rows;

        List<int> originalShapeFilledUpSquares = new List<int>();
        int squareIndex = 0;

        for (var rowIndex=0; rowIndex < shapeRows; rowIndex++) {
            for (var columnIndex=0; columnIndex < shapeColumns; columnIndex++) {
                if (currentShapeData.board[rowIndex].column[columnIndex]) {
                    originalShapeFilledUpSquares.Add(squareIndex);
                }

                squareIndex++;
            }
        }

        if (currentShape.TotalSquareNumber != originalShapeFilledUpSquares.Count) {
            Debug.LogError("Number of filled up squares are not the same as the original shape have");
        }

        var sqaureList = GetAllSquaresCombination(shapeColumns, shapeRows);

        bool canBePlaced = false;

        foreach (var number in sqaureList) {
            bool shapeCanBePlacedOnTheBoard = true;
            foreach (var squareIndexToCheck in originalShapeFilledUpSquares) {
                var comp = _gridSquares[number[squareIndexToCheck]].GetComponent<GridSquare>();

                if (comp.SquareOccupied) {
                    shapeCanBePlacedOnTheBoard = false;
                }
            }

            if (shapeCanBePlacedOnTheBoard) {
                canBePlaced = true;
            }
        }

        return canBePlaced;
    }

    private List<int[]> GetAllSquaresCombination(int columns, int rows)
    {
        var sqaureList = new List<int[]>();
        var lastColumnIndex = 0;
        var lastRowIndex = 0;

        int safeIndex = 0;

        while (lastRowIndex + (rows - 1) < 8) {
            var rowData = new List<int>();

            for (var row = lastRowIndex; row < lastRowIndex + rows; row++) {
                for (var column = lastColumnIndex; column < lastColumnIndex + columns; column++) {
                    rowData.Add(_lineIndicator.line_data[row, column]);
                }
            }

            sqaureList.Add(rowData.ToArray());

            lastColumnIndex++;

            if (lastColumnIndex + (columns - 1) >= 8) {
                lastRowIndex++;
                lastColumnIndex = 0;
            }

            safeIndex++;

            if (safeIndex > 100) {
                break;
            }
        }

        return sqaureList;
    }
}
