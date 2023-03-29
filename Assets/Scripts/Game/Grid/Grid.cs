using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class playerClassicGameData
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
public class playerChallengeGameData
{
    public bool ChallengesaveGameOver;
    public bool ChallengesaveisCombo;
    public int ChallengesaveComboCount;
    public int ChallengesavePlayerlife;
    public int ChallengesaveScore;
    public List<int> ChallengeactiveGridSquares;
    public List<string> ChallengeactiveGridSquareColors;
    public int[] ChallengeshapeDataIndexList = new int[] { -1, -1, -1 };
    public int ChallengestartStage = 1;
}

public class Grid : MonoBehaviour
{
    public GameOverPopup gameOverPopup;
    public InGamePopup inGamePopup;
    public JewelSquareTextureData jewelSquareTextureData;
    public SquareTextureData squareTextureData;
    public Tutuorial tutuorial;
    public ChallengeStage ChallengeStage;
    public ShapeStorage shapeStorage;
    public GameObject shapes;
    public Scores score;
    public Jewels jewel;
    public GameObject gridSquare;
    public Sprite gameoverimg;
    public int columns = 0;
    public int rows = 0;
    public Vector2 startPosition = new Vector2(-461.5f, 461.5f);
    public float squaresGap = 0.0f;
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
    public Coroutine countCoroutine;
    public playerClassicGameData playerSaveGame_ = new playerClassicGameData();
    public playerChallengeGameData playerSaveChallengeGame_ = new playerChallengeGameData();

    public static string gamemode;
    public static int Playerlife;
    public static int startStage = 1;
    public static int thisStage;

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

        if (gamemode == "ClassicGame")
        {
            if (BinaryDataStream.Exist(playerSaveGamekey))
            {
                Debug.Log("기본 모드 저장 파일이 있습니다.");

                string jsonPlayerSaveGame_ = BinaryDataStream.Read<string>(playerSaveGamekey);
                playerSaveGame_ = JsonUtility.FromJson<playerClassicGameData>(jsonPlayerSaveGame_);

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
                else
                {
                    Playerlife = 1;
                    SingularSDK.Event("classic_start");
                    Firebase.Analytics.FirebaseAnalytics.LogEvent("classic_start");
                }
            }
            else
            {
                Debug.Log("저장 파일이 없습니다.");
                gamemode = "tutorial1";
                tutuorial.tutuorial1();
                
                Playerlife = 1;
                currentActiveSquareColor_ = squareTextureData.activeSquareTextures[0].squareColor;
                currentActiveJewelSquare_ = jewelSquareTextureData.activeJewelSquareTextures[0].jewelSquare;
                SingularSDK.Event("classic_start");
                Firebase.Analytics.FirebaseAnalytics.LogEvent("classic_start");
            }
        }
        else if (gamemode == "ChallengeGame")
        {
            if (BinaryDataStream.Exist(playerSaveChallengeGamekey))
            {
                Debug.Log("도전 모드 저장 파일이 있습니다.");

                string jsonPlayerSaveChallengeGame_ = BinaryDataStream.Read<string>(playerSaveChallengeGamekey);
                playerSaveChallengeGame_ = JsonUtility.FromJson<playerChallengeGameData>(jsonPlayerSaveChallengeGame_);

                if (!playerSaveChallengeGame_.ChallengesaveGameOver)
                {
                    Debug.Log("저장 파일을 불러왔습니다.");
                    Playerlife = playerSaveChallengeGame_.ChallengesavePlayerlife;
                    startStage = playerSaveChallengeGame_.ChallengestartStage;
                    score.currentScores_ = playerSaveChallengeGame_.ChallengesaveScore;
                    ShapeStorage.isCombo = playerSaveChallengeGame_.ChallengesaveisCombo;
                    ShapeStorage.ComboCount = playerSaveChallengeGame_.ChallengesaveComboCount;

                    List<Sprite> saveActiveSquareTextures = new List<Sprite>();
                    for (int i = 0; i < playerSaveChallengeGame_.ChallengeactiveGridSquareColors.Count; i++)
                    {
                        for (int j = 0; j < squareTextureData.activeSquareTextures.Count; j++)
                        {
                            if (playerSaveChallengeGame_.ChallengeactiveGridSquareColors[i] == squareTextureData.activeSquareTextures[j].texture.ToString())
                            {
                                saveActiveSquareTextures.Add(squareTextureData.activeSquareTextures[j].texture);
                            } 
                            
                        }

                        for (int j = 0; j < jewelSquareTextureData.activeJewelSquareTextures.Count; j++)
                        {
                            if (playerSaveChallengeGame_.ChallengeactiveGridSquareColors[i] == jewelSquareTextureData.activeJewelSquareTextures[j].texture.ToString())
                            {
                                saveActiveSquareTextures.Add(squareTextureData.activeSquareTextures[j].texture);
                            }
                        }
                    }

                    for (int i = 0; i < playerSaveChallengeGame_.ChallengeactiveGridSquares.Count; i++)
                    {
                        transform.GetChild(playerSaveChallengeGame_.ChallengeactiveGridSquares[i]).GetComponent<GridSquare>().ActivateSquare();
                        transform.GetChild(playerSaveChallengeGame_.ChallengeactiveGridSquares[i]).GetComponent<GridSquare>().Selected = false;
                        transform.GetChild(playerSaveChallengeGame_.ChallengeactiveGridSquares[i]).GetComponent<GridSquare>().SquareOccupied = true;
                        transform.GetChild(playerSaveChallengeGame_.ChallengeactiveGridSquares[i]).transform.GetChild(2).GetComponent<Image>().sprite = saveActiveSquareTextures[i];
                    }
                    thisStage = playerSaveChallengeGame_.ChallengestartStage;
                    ChallengeStage.ChallengeStageSelete(playerSaveChallengeGame_.ChallengestartStage);
                }
                else
                {
                    Playerlife = 1;
                    thisStage = playerSaveChallengeGame_.ChallengestartStage;
                    ChallengeStage.ChallengeStageSelete(playerSaveChallengeGame_.ChallengestartStage);
                    SingularSDK.Event("challenge_start");
                    Firebase.Analytics.FirebaseAnalytics.LogEvent("challenge_start");
                }
            }
            else
            {
                Debug.Log("저장 파일이 없습니다.");
                Playerlife = 1;
                thisStage = startStage;
                ChallengeStage.ChallengeStageSelete(1);
                currentActiveSquareColor_ = squareTextureData.activeSquareTextures[0].squareColor;
                currentActiveJewelSquare_ = jewelSquareTextureData.activeJewelSquareTextures[0].jewelSquare;
                SingularSDK.Event("challenge_start");
                Firebase.Analytics.FirebaseAnalytics.LogEvent("challenge_start");
            }
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
                if (gamemode == "ClassicGame" || gamemode == "ChallengeGame" || gamemode == "tutorial3")
                {
                    if (audioManager.sfxsetting)
                    {
                        GameEvents.blockSeSuccessActive();
                        GameEvents.blockCreate();
                    }
                    GameEvents.RequestNewShapes();
                }
                else {
                    if (audioManager.sfxsetting)
                    {
                        GameEvents.blockSeSuccessActive();
                        GameEvents.blockCreate();
                    }
                    shapeStorage.tutorialShapes();
                }
            }
            else {
                if (audioManager.sfxsetting)
                {
                    GameEvents.blockSeSuccessActive();
                }
                GameEvents.SetShapeInactive();
            }

            CheckIfAnyLineIsCompleted(currentSelectedShape.TotalSquareNumber);

        }
        else
        {
            if (audioManager.sfxsetting)
            {
                GameEvents.blockFailureActive();
            }
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

        if (gamemode == "ClassicGame" || (gamemode == "ChallengeGame" && ChallengeStage.challengemode == "Scoremode")) {
            if (completedLines > 0)
            {
                ShapeStorage.isCombo = true;
                ShapeStorage.ComboCount++;
            }

            int totalScores = 0;
            if (ShapeStorage.ComboCount == 0)
            {
                totalScores = (10 * completedLines);
            }
            else
            {
                totalScores = (10 * (1 + ShapeStorage.ComboCount) * completedLines);
            }
            
            GameEvents.AddScores(currentSelectedShape + totalScores);
        }

        if (completedLines > 0) 
        {
            switch (completedLines) {
                case 1:
                    if (audioManager.sfxsetting)
                    {
                        GameEvents.blockCompleted();
                    }
                    break;
                case 2:
                    if (audioManager.sfxsetting)
                    {
                        GameEvents.block2Completed();
                    }
                    break;
                case 3:
                    if (audioManager.sfxsetting)
                    {
                        GameEvents.block3Completed();
                    }
                    break;
                case 4:
                    if (audioManager.sfxsetting)
                    {
                        GameEvents.block4Completed();
                    }
                    break;
            }

            if (completedLines >= 5)
            {
                if (audioManager.sfxsetting)
                {
                    GameEvents.block5CompletedMore();
                }
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
        }
        else if (gamemode == "tutorial3")
        {
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

        foreach (int[] line in completedLines) {
            bool completed = false;

            foreach (var squareIndex in line) {
                GridSquare comp = _gridSquares[squareIndex].GetComponent<GridSquare>();
                comp.Deactivate();

                completed = true;
            }

            foreach (var squareIndex in line) {
                GridSquare comp = _gridSquares[squareIndex].GetComponent<GridSquare>();
                comp.ClearOccupied();
            }

            if (completed) {
                if (gamemode == "ChallengeGame" && ChallengeStage.challengemode == "Jewelmode")
                {
                    foreach (int squareIndex in line)
                    {
                        GridSquare comp = _gridSquares[squareIndex].GetComponent<GridSquare>();
                        for (int i = 0; i < ChallengeStage.TargetActivateJewel.Count; i++)
                        {
                            if (comp.ActiveImage.GetComponent<Image>().sprite == jewel.jewels[ChallengeStage.TargetActivateJewel[i]].transform.GetChild(1).GetComponent<Image>().sprite)
                            {
                                //Debug.Log("보석 카운팅 검사");
                                jewel.jewelsCount[ChallengeStage.TargetActivateJewel[i]].GetComponent<Text>().text = (ChallengeStage.TargetActivateJewelCount[i] - 1).ToString();
                                ChallengeStage.TargetActivateJewelCount[i] = ChallengeStage.TargetActivateJewelCount[i] - 1;
                            }
                        }
                    }
                    linesCompleted++;
                }
                else {
                    linesCompleted++;
                }
            }
        }

        return linesCompleted;
    }

    private bool CheckIfPlayChallengeGameWin()
    {
        if (ChallengeStage.challengemode == "Scoremode")
        {
            if (score.currentScores_ >= ChallengeStage.TargetScore)
            {
                Debug.Log("스테이지를 클리어 했습니다!");
                startStage++;
                ChallengeStage.TargetScoreText.gameObject.SetActive(false);
                ChallengeStage.ScorecompleteCheck.SetActive(true);

                return true;
            }
            else 
            {
                return false;
            }
        }
        else 
        {
            //보석 검사
            bool jewelClear = true;
            for (int i=0; i< ChallengeStage.TargetActivateJewelCount.Count; i++) 
            {
                if (ChallengeStage.TargetActivateJewelCount[i] > 0)
                {
                    jewelClear = false;
                }
                else 
                {
                    jewel.jewelsCount[ChallengeStage.TargetActivateJewel[i]].SetActive(false);
                    jewel.jewelCompletedCheck[ChallengeStage.TargetActivateJewel[i]].SetActive(true);
                }
            }

            if (jewelClear)
            {
                startStage++;
            }

            return jewelClear;
        }
    }

    public void CheckIfPlayLost()
    {
        var validShapes = 0;
        for (var index=0; index < shapeStorage.shapeList.Count; index++) {
            var isShapeActive = shapeStorage.shapeList[index].IsAnyOfShapeSqaureActive();

            if (!CheckIfShapeCanBePlacedOnGrid(shapeStorage.shapeList[index]))
            {
                if (isShapeActive)
                {
                    //Debug.Log("배치 불가능 블록 :" + index);
                    Transform[] allChildren = shapes.transform.GetChild(index).GetComponentsInChildren<Transform>();
                    foreach (Transform child in this.shapes.transform.GetChild(index))
                    {
                        Color color = child.GetComponent<Image>().color;
                        color.a = 0.5f;
                        child.GetComponent<Image>().color = color;
                    }
                }
            }
            else
            {
                if (isShapeActive)
                {
                    //Debug.Log("배치 가능 블록 :" + index);
                    Transform[] allChildren = shapes.transform.GetChild(index).GetComponentsInChildren<Transform>();
                    foreach (Transform child in this.shapes.transform.GetChild(index))
                    {
                        Color color = child.GetComponent<Image>().color;
                        color.a = 1.0f;
                        child.GetComponent<Image>().color = color;
                    }
                }
            }

            if (CheckIfShapeCanBePlacedOnGrid(shapeStorage.shapeList[index]) && isShapeActive) {
                shapeStorage.shapeList[index]?.ActivateShape();
                validShapes++;
            }
        }

        if (gamemode == "ClassicGame")
        {
            if (validShapes == 0)
            {
                if (Playerlife > 0 && score.bestScores_.score <= 300)
                {
                    countCoroutine = StartCoroutine(RetryPopupCount());
                    playerSaveGame_.saveGameOver = true;
                    saveGame();
                    gameOverPopup.RetryPopupActive();
                }
                else if (Playerlife > 0 && score.currentScores_ >= 300)
                {
                    countCoroutine = StartCoroutine(RetryPopupCount());
                    playerSaveGame_.saveGameOver = true;
                    saveGame();
                    gameOverPopup.RetryPopupActive();
                }
                else if (score.currentScores_ >= score.bestScores_.score)
                {
                    GameEvents.GameOver();
                    StartCoroutine(GameOverAin(1));
                }
                else
                {
                    GameEvents.GameOver();
                    StartCoroutine(GameOverAin(0));             
                }
            }
            else
            {
                playerSaveGame_.saveGameOver = false;
            }

            saveGame();
        } 
        else if (gamemode == "ChallengeGame")
        {
            if (CheckIfPlayChallengeGameWin())
            {
                playerSaveChallengeGame_.ChallengesaveGameOver = true;
                saveChallengeGame();
                inGamePopup.SuccessPopupActive();
            }
            else 
            {
                if (validShapes == 0)
                {
                    playerSaveChallengeGame_.ChallengesaveGameOver = true;
                    saveChallengeGame();
                    StartCoroutine(GameOverAin(0));
                }
                else
                {
                    playerSaveChallengeGame_.ChallengesaveGameOver = false;
                }

                saveChallengeGame();
            }
        }
    }

    public IEnumerator RetryPopupCount()
    {
        for (int i=0; i<5; i++) 
        {
            GameEvents.blockresurrectionCount();
            yield return new WaitForSeconds(1.0f);
        }
    }

    IEnumerator GameOverAin(int index)
    {
        playerSaveGame_.saveGameOver = true;
        GameEvents.blockGameover();

        for (int i=0; i<57; i+=8) 
        {
            for (int k = i; k < i+8; k++)
            {
                transform.GetChild(k).transform.GetChild(2).gameObject.GetComponent<Image>().sprite = gameoverimg;
            }

            yield return new WaitForSeconds(0.075f);
        }

        if (gamemode == "ClassicGame")
        {
            if (index == 0)
            {
                gameOverPopup.GameOverActive();
            }
            else
            {
                gameOverPopup.NewBestScoreActive();
            }
        }
        else 
        {
            if (index == 0)
            {
                gameOverPopup.FailurePopupPopupActive();
            }
        }
        
    }

    public void saveGame()
    {
        for (int i = 0; i < 3; i++)
        {
            bool useShapeCheck = true;
            for (int j = 0; j < shapes.transform.GetChild(i).transform.childCount; j++)
            {
                if (shapes.transform.GetChild(i).transform.GetChild(j).gameObject.activeSelf)
                {
                    useShapeCheck = false;
                }
            }

            if(useShapeCheck)
            {
                playerSaveGame_.shapeDataIndexList[i] = -1;
            }
        }

        playerSaveGame_.activeGridSquares = CheckSaveActiveGridSquares();
        playerSaveGame_.activeGridSquareColors = CheckSaveActiveGridSquaresColor();

        playerSaveGame_.savePlayerlife = Playerlife;
        playerSaveGame_.saveScore = score.currentScores_;
        playerSaveGame_.saveisCombo = ShapeStorage.isCombo;
        playerSaveGame_.saveComboCount = ShapeStorage.ComboCount;

        string playerSaveGameData = JsonUtility.ToJson(playerSaveGame_);
        //Debug.Log(playerSaveGameData);
        BinaryDataStream.Save<string>(playerSaveGameData, playerSaveGamekey);
    }

    public void saveChallengeGame() 
    {
        //Debug.Log(resetGame);

        for (int i = 0; i < 3; i++)
        {
            bool useShapeCheck = true;
            for (int j=0; j< shapes.transform.GetChild(i).transform.childCount; j++) 
            {
                if (shapes.transform.GetChild(i).transform.GetChild(j).gameObject.activeSelf)
                {
                    useShapeCheck = false;
                }
            }

            if (useShapeCheck)
            {
                playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = -1;
            }
            //Debug.Log(shapes.transform.GetChild(i).transform.GetChild(0).gameObject.activeSelf);
        }
        playerSaveChallengeGame_.ChallengeactiveGridSquares = CheckSaveActiveGridSquares();
        playerSaveChallengeGame_.ChallengeactiveGridSquareColors = CheckSaveActiveGridSquaresColor();

        playerSaveChallengeGame_.ChallengesavePlayerlife = Playerlife;
        playerSaveChallengeGame_.ChallengesaveScore = score.currentScores_;
        playerSaveChallengeGame_.ChallengesaveisCombo = ShapeStorage.isCombo;
        playerSaveChallengeGame_.ChallengesaveComboCount = ShapeStorage.ComboCount;

        playerSaveChallengeGame_.ChallengestartStage = startStage;

        string playerSaveGameData = JsonUtility.ToJson(playerSaveChallengeGame_);
        //Debug.Log(playerSaveGameData);
        BinaryDataStream.Save<string>(playerSaveGameData, playerSaveChallengeGamekey);
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

    public List<int> CheckIfShapeCanBePlacedOnGridOnlyOne(Shape currentShape)
    {
        ShapeData currentShapeData = currentShape.CurrentShapeData;
        int shapeColumns = currentShapeData.columns;
        int shapeRows = currentShapeData.rows;

        List<int> originalShapeFilledUpSquares = new List<int>();
        int squareIndex = 0;

        for (var rowIndex = 0; rowIndex < shapeRows; rowIndex++)
        {
            for (var columnIndex = 0; columnIndex < shapeColumns; columnIndex++)
            {
                if (currentShapeData.board[rowIndex].column[columnIndex])
                {
                    originalShapeFilledUpSquares.Add(squareIndex);
                }

                squareIndex++;
            }
        }

        if (currentShape.TotalSquareNumber != originalShapeFilledUpSquares.Count)
        {
            Debug.LogError("Number of filled up squares are not the same as the original shape have");
        }

        List<int[]> sqaureList = GetAllSquaresCombination(shapeColumns, shapeRows);

        List<int[]> canBePlacedPosition = new List<int[]>();
        for (int i=0; i< sqaureList.Count; i++)
        {
            int[] number = sqaureList[i];

            bool shapeCanBePlacedOnTheBoard = true;
            foreach (int squareIndexToCheck in originalShapeFilledUpSquares)
            {
                GridSquare comp = _gridSquares[number[squareIndexToCheck]].GetComponent<GridSquare>();

                if (comp.SquareOccupied)
                {
                    shapeCanBePlacedOnTheBoard = false;
                }
            }

            if (shapeCanBePlacedOnTheBoard)
            {
                canBePlacedPosition.Add(number);
            }
        }

        List<int> RealCanBePlacedPosition = new List<int>();
        if (canBePlacedPosition.Count == 1)
        {
            int[] number = canBePlacedPosition[0];
            for (int i = 0; i < number.Length; i++)
            {
                foreach (int squareIndexToCheck in originalShapeFilledUpSquares)
                {
                    GridSquare comp = _gridSquares[number[squareIndexToCheck]].GetComponent<GridSquare>();

                    RealCanBePlacedPosition.Add(number[squareIndexToCheck]);

                    comp.hooverImage.sprite = Shape.seletedshapesprite;
                    comp.hooverImage.gameObject.SetActive(true);
                }
            }
            //Debug.Log("놓을 수 있는 곳이 1 곳 입니다.");
            return RealCanBePlacedPosition.Distinct().ToList();
        }

        return null;
    }

    public void AllGridSquareHooverImageOff() 
    {
        for (int i=0; i < _gridSquares.Count; i++) 
        {
            GridSquare comp = _gridSquares[i].GetComponent<GridSquare>();
            comp.hooverImage.gameObject.SetActive(false);
        }
    }

    public void onePlaceExceptGridSquareHooverImageOff(List<int> onePlace)
    {
        for (int i = 0; i < _gridSquares.Count; i++)
        {
            for (int k = 0; k < onePlace.Count; k++)
            {
                if (i != onePlace[k])
                {
                    GridSquare comp = _gridSquares[i].GetComponent<GridSquare>();
                    comp.hooverImage.gameObject.SetActive(false);
                }
                else
                {
                    GridSquare comp = _gridSquares[i].GetComponent<GridSquare>();
                    comp.hooverImage.gameObject.SetActive(true);
                    break;
                }
            }
        }
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
