using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Grid : MonoBehaviour
{
    public ShapeStorage shapeStorage;
    public int columns = 0;
    public int rows = 0;
    public float squaresGap = 0.1f;
    public GameObject grid;
    public GameObject gridSquare;
    public Vector2 startPosition = new Vector2(0.0f, 0.0f);
    public float squareScale = 0.5f;
    public float everySquareOffset = 0.0f;
    public SquareTextureData squareTextureData;
    public AudioSource audioSource;
    public AudioClip completed;

    private Vector2 _offset = new Vector2(0.0f, 0.0f);
    private List<GameObject> _gridSquares = new List<GameObject>();

    private LineIndicator _lineIndicator;

    //private Sprite currentActiveSquareColor_;
    private Config.SquareColor currentActiveSquareColor_ = Config.SquareColor.NotSet;
    private List<Config.SquareColor> colorsInTheGrid_ = new List<Config.SquareColor>();

    public static string gamemode;

    private void OnEnable()
    {
        Debug.Log(gamemode);
        GameEvents.CheckIfShapeCanBePlaced += CheckIfShapeCanBePlaced;
        GameEvents.UpdateSquareColor += OnUpdateSquareColor;
    }

    private void OnDisable()
    {
        GameEvents.CheckIfShapeCanBePlaced -= CheckIfShapeCanBePlaced;
        GameEvents.UpdateSquareColor -= OnUpdateSquareColor;
    }

    void Start()
    {
        _lineIndicator = GetComponent<LineIndicator>();
        CreateGrid();

        currentActiveSquareColor_ = squareTextureData.activeSquareTextures[0].squareColor;
    }

    //private void OnUpdateSquareColor()
    //{
    //    currentActiveSquareColor_ = Shape.seletedshapesprite;
    //}

    private void OnUpdateSquareColor(Config.SquareColor color)
    {
        currentActiveSquareColor_ = color;
    }

    private List<Config.SquareColor> GetAllSquareColorInTheGrid()
    {
        var colors = new List<Config.SquareColor>();

        foreach (var square in _gridSquares) {
            var gridsquare = square.GetComponent<GridSquare>();
            if (gridsquare.SquareOccupied) {
                var color = gridsquare.GetCurrentColor();
                if (colors.Contains(color) == false) {
                    colors.Add(color);
                }
            }
        }

        return colors;
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
                _gridSquares[_gridSquares.Count - 1].transform.SetParent(this.transform);
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

            foreach (var shape in shapeStorage.shapeList) {
                if (shape.IsOnStartPosition() && shape.IsAnyOfShapeSqaureActive()) {
                    shapeLeft++;
                }
            }

            if (shapeLeft == 0)
            {
                GameEvents.RequestNewShapes();
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

        //colorsInTheGrid_ = GetAllSquareColorInTheGrid();

        var completedLines = CheckIfSquaresAreCompleted(lines);
        int combo = 0;
        var totalScores = ( 10 * (1 + combo) * completedLines );
        GameEvents.AddScores(currentSelectedShape + totalScores);

        //var bonusScores = 0;

        if (completedLines == 1)
        {
            audioSource.PlayOneShot(completed);
            GameEvents.ShowCongratulationWritings(completedLines);
        }
        else if (completedLines == 2)
        {
            GameEvents.ShowCongratulationWritings(completedLines);
        }
        else if (completedLines >= 3)
        {
            GameEvents.ShowCongratulationWritings(completedLines);
        }
        AllBlockClear();

        CheckIfPlayLost();
    }

    private void AllBlockClear()
    {
        bool allClearCheck = true;

        //Debug.Log(this.transform.GetChild(0).transform.GetChild(2).gameObject.activeSelf);

        for (int i=0; i<63; i++) {
            if (this.transform.GetChild(i).transform.GetChild(2).gameObject.activeSelf) {
                allClearCheck = false;
                //Debug.Log("퍼즐판에 블록이 있습니다.");
            }
        }

        if (allClearCheck)
        {
            GameEvents.AddScores(300);
            Debug.Log("퍼즐판에 블록이 없습니다.");
        }
        else
        {
            Debug.Log("퍼즐판에 블록이 있습니다.");
        }
    }

    private int CheckIfSquaresAreCompleted(List<int[]> data)
    {
        int linesCompleted = 0;
        List<int[]> completedLines = new List<int[]>();

        //List<int[]> completeColorBonusLines = new List<int[]>();

        foreach (int[] line in data) {
            bool lineCompleted = true;

            foreach (int squareIndex in line) {
                GridSquare comp = _gridSquares[squareIndex].GetComponent<GridSquare>();
                if (comp.SquareOccupied == false) {
                    lineCompleted = false;
                }
            }

            if (lineCompleted) {
                //var lineColorBonusCompleted = true;
                //var comp = _gridSquares[line[0]].transform.GetChild(2).GetComponent<Image>().sprite;
                //foreach (var _squareIndex in line)
                //{
                //    var compColor = _gridSquares[_squareIndex].transform.GetChild(2).GetComponent<Image>().sprite;

                //    if (comp != compColor)
                //    {
                //        lineColorBonusCompleted = false;
                //        break;
                //    }
                //}

                //if (lineColorBonusCompleted)
                //{
                //    completeColorBonusLines.Add(line);
                //}

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

        //int[] answer = { linesCompleted, completeColorBonusLines.Count };
        //return answer;
    }

    private void CheckIfPlayLost()
    {
        var validShapes = 0;

        for (var index=0; index < shapeStorage.shapeList.Count; index++) {
            var isShapeActive = shapeStorage.shapeList[index].IsAnyOfShapeSqaureActive();
            if (CheckIfShapeCanBePlacedOnGrid(shapeStorage.shapeList[index]) && isShapeActive) {
                shapeStorage.shapeList[index]?.ActivateShape();
                validShapes++;
            }
        }

        if (gamemode == "ClassicGame")
        {
            Debug.Log("클래식게임 게임오버");
            if (validShapes == 0)
            {
                GameEvents.GameOver(false);
            }
        }
        else if (gamemode == "ChallengeGame")
        {
            Debug.Log("챌린지게임 게임오버");
            if (validShapes == 0)
            {
                GameEvents.GameOver(false);
            }
        }
        else {
            Debug.Log("테스트 게임오버");
            if (validShapes == 0)
            {
                GameEvents.GameOver(false);
            }
        }
    }

    private bool CheckIfShapeCanBePlacedOnGrid(Shape currentShape)
    {
        var currentShapeData = currentShape.CurrentShapeData;
        var shapeColumns = currentShapeData.columns;
        var shapeRows = currentShapeData.rows;

        List<int> originalShapeFilledUpSquares = new List<int>();
        var squareIndex = 0;

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
