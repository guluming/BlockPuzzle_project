using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Shape : MonoBehaviour, IPointerClickHandler, IPointerUpHandler, IPointerDownHandler, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public GameObject squareShapeImage;
    public GameObject jewelShapeImage;
    public Vector3 shapeSelectedScale;
    public Vector2 offset = new Vector2(0f, 700f);
    public AudioSource audioSource;
    public AudioClip clip;

    [HideInInspector]
    public ShapeData CurrentShapeData;
    public static Sprite seletedshapesprite;
    public static Color seletedshapecolor;
    public static Vector3 seletedshapeglobalPosition;

    public int TotalSquareNumber { get; set; }

    private List<GameObject> _currentShape = new List<GameObject>();
    private Vector3 _shapeStartScale;
    private RectTransform _transform;
    private bool _shapeDraggable = true;
    private Canvas _canvas;
    private Vector3 _startPosition;
    private bool _shapeActive = true;
    private SquareTextureData squareTexture;

    public void Awake()
    {
        _shapeStartScale = this.GetComponent<RectTransform>().localScale;
        _transform = this.GetComponent<RectTransform>();
        _canvas = GetComponentInParent<Canvas>();
        _shapeDraggable = true;
        _startPosition = _transform.localPosition;
        _shapeActive = true;
    }

    private void OnEnable()
    {
        GameEvents.MoveShapeToStartPosition += MoveShapeToStartPosition;
        GameEvents.SetShapeInactive += SetShapeInactive;
    }

    private void OnDisable()
    {
        GameEvents.MoveShapeToStartPosition -= MoveShapeToStartPosition;
        GameEvents.SetShapeInactive -= SetShapeInactive;
    }

    public bool IsOnStartPosition()
    {
        return _transform.localPosition == _startPosition;
    }

    public bool IsAnyOfShapeSqaureActive()
    {
        foreach (var square in _currentShape) {
            if (square.gameObject.activeSelf) {
                return true;
            }
        }

        return false;
    }

    public void DeactivateShape()
    {
        if (_shapeActive) {
            foreach (var square in _currentShape) {
                square?.GetComponent<ShapeSquare>().DeactivateShape();
            }
        }

        _shapeActive = false;
    }

    private void SetShapeInactive()
    {
        if (IsOnStartPosition() == false && IsAnyOfShapeSqaureActive()) {
            foreach (var square in _currentShape) {
                square.gameObject.SetActive(false);
            }
        }
    }

    public void ActivateShape()
    {
        if (!_shapeActive) {
            foreach (var square in _currentShape) {
                square?.GetComponent<ShapeSquare>().ActivateShape();
            }
        }

        _shapeActive = true;
    }

    public void RequestNewShape(ShapeData shapeData)
    {
        _transform.localPosition = _startPosition;
        CreateShape(shapeData);
    }

    public void CreateShape(ShapeData shapeData)
    {
        CurrentShapeData = shapeData;
        TotalSquareNumber = GetNumberOfSquares(CurrentShapeData);

        //if (Grid.gamemode == "ClassicGame") {
        //    while (_currentShape.Count <= TotalSquareNumber)
        //    {
        //        _currentShape.Add(Instantiate(squareShapeImage, transform) as GameObject);
        //    }
        //} else if (Grid.gamemode == "ChallengeGame") {
        //    for (int i=0; i <= TotalSquareNumber; i++) {
        //        if (Random.Range(0, 5) == 0)
        //        {
        //            //보석이 들어가는 루트
        //            Debug.Log("보석 생성");
        //            _currentShape.Add(Instantiate(squareShapeImage, transform) as GameObject);
        //        }
        //        else {
        //            _currentShape.Add(Instantiate(squareShapeImage, transform) as GameObject);
        //        }
        //    }
        //}

        while (_currentShape.Count <= TotalSquareNumber)
        {
            _currentShape.Add(Instantiate(squareShapeImage, transform) as GameObject);
        }

        foreach (var square in _currentShape) {
            square.gameObject.transform.position = Vector3.zero;
            square.gameObject.SetActive(false);
        }

        var squareRect = squareShapeImage.GetComponent<RectTransform>();
        var moveDistance = new Vector2(squareRect.rect.width * squareRect.localScale.x,
            squareRect.rect.height * squareRect.localScale.y);

        int currentIndexInList = 0;

        for (var row = 0; row < shapeData.rows; row++) {
            for (var column = 0; column < shapeData.columns; column++) {
                if (shapeData.board[row].column[column]) {
                    _currentShape[currentIndexInList].SetActive(true);
                    _currentShape[currentIndexInList].GetComponent<RectTransform>().localPosition =
                        new Vector2(GetXPositionForShapeSquare(shapeData, column, moveDistance),
                        GetYPositionForShapeSquare(shapeData, row, moveDistance));

                    currentIndexInList++;
                }
            }
        }
    }

    private float GetYPositionForShapeSquare(ShapeData shapeData, int row, Vector2 moveDistance)
    {
        float shiftOnY = 0f;

        if (shapeData.rows > 1 && shapeData.rows <= 3)
        {
            if (shapeData.rows % 2 != 0)
            {
                var middleSquareIndex = ((shapeData.rows - 1) / 2);
                var multiplier = ((shapeData.rows - 1) / 2);
                if (row < middleSquareIndex)
                {
                    shiftOnY = moveDistance.y * 1;
                    shiftOnY *= multiplier;
                }
                else if (row > middleSquareIndex)
                {
                    shiftOnY = moveDistance.y * -1;
                    shiftOnY *= multiplier;
                }
            }
            else
            {
                var middleSquareIndex2 = (shapeData.rows == 2) ? 1 : (shapeData.rows / 2);
                var middleSquareIndex1 = (shapeData.rows == 2) ? 0 : shapeData.rows - 2;
                var multiplier = shapeData.rows / 2;

                if (row == middleSquareIndex1 || row == middleSquareIndex2)
                {
                    if (row == middleSquareIndex2)
                    {
                        shiftOnY = (moveDistance.y / 2) * -1;
                    }

                    if (row == middleSquareIndex1)
                    {
                        shiftOnY = (moveDistance.y / 2);
                    }
                }

                if (row < middleSquareIndex1 && row < middleSquareIndex2)
                {
                    shiftOnY = moveDistance.y * 1;
                    shiftOnY *= multiplier;
                }
                else if (row > middleSquareIndex1 && row > middleSquareIndex2)
                {
                    shiftOnY = moveDistance.y * -1;
                    shiftOnY *= multiplier;
                }
            }
        } else if (shapeData.rows > 3) {
            var basicYpoint = moveDistance.y;

            if (row % 2 == 0)
            {
                shiftOnY = (basicYpoint / 2) * (row + 1) * 1;

            }
            else if (row % 2 == 1)
            {
                shiftOnY = (basicYpoint / 2) * row * -1;
            }
        }
        return shiftOnY;
    }

    public float GetXPositionForShapeSquare(ShapeData shapeData, int column, Vector2 moveDistance)
    {
        float shiftOnX = 0f;

        if (shapeData.columns > 1 && shapeData.columns <= 3)
        {
            if (shapeData.columns % 2 != 0)
            {
                var middleSquareIndex = (shapeData.columns - 1) / 2;
                var multiplier = (shapeData.columns - 1) / 2;
                if (column < middleSquareIndex)
                {
                    shiftOnX = moveDistance.x * -1;
                    shiftOnX *= multiplier;
                }
                else if (column > middleSquareIndex)
                {
                    shiftOnX = moveDistance.x * 1;
                    shiftOnX *= multiplier;
                }
            }
            else
            {
                var middleSquareIndex2 = (shapeData.columns == 2) ? 1 : (shapeData.columns / 2);
                var middleSquareIndex1 = (shapeData.columns == 2) ? 0 : shapeData.columns - 1;
                var multiplier = shapeData.columns / 2;

                if (column == middleSquareIndex1 || column == middleSquareIndex2)
                {
                    if (column == middleSquareIndex2)
                    {
                        shiftOnX = moveDistance.x / 2;
                    }

                    if (column == middleSquareIndex1)
                    {
                        shiftOnX = (moveDistance.x / 2) * -1;
                    }
                }

                if (column < middleSquareIndex1 && column < middleSquareIndex2)
                {
                    shiftOnX = moveDistance.x * -1;
                    shiftOnX *= multiplier;
                }
                else if (column > middleSquareIndex1 && column > middleSquareIndex2)
                {
                    shiftOnX = moveDistance.x * 1;
                    shiftOnX *= multiplier;
                }
            }
        } else if (shapeData.columns > 3) {
            var basicYpoint = moveDistance.x;

            if (column % 2 == 0)
            {
                shiftOnX = (basicYpoint / 2) * (column + 1) * 1;

            }
            else if (column % 2 == 1)
            {
                shiftOnX = (basicYpoint / 2) * column * -1;
            }
        }

        return shiftOnX;
    }

    private int GetNumberOfSquares(ShapeData shapeData)
    {
        int number = 0;

        foreach (var rowData in shapeData.board) {
            foreach (var active in rowData.column) {
                if (active) {
                    number++;
                }
            }
        }

        return number;
    }

    public void OnPointerClick(PointerEventData eventData)
    {

    }

    public void OnPointerUp(PointerEventData eventData)
    {
        this.GetComponent<RectTransform>().localScale = new Vector3(0.6f, 0.6f, 0.6f);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        audioSource.PlayOneShot(clip);
        this.GetComponent<RectTransform>().localScale = shapeSelectedScale;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        
    }

    public void OnDrag(PointerEventData eventData)
    {
        seletedshapesprite = this.transform.GetChild(0).GetComponent<Image>().sprite;
        _transform.anchorMin = new Vector2(0.5f, 0.5f);
        _transform.anchorMax = new Vector2(0.5f, 0.5f);
        _transform.pivot = new Vector2(0.5f, 0.5f);

        Vector2 pos;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(_canvas.transform as RectTransform,
            eventData.position, Camera.main, out pos);
        _transform.localPosition = pos + offset;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        Debug.Log(GetComponent<RectTransform>().position);
        seletedshapeglobalPosition = GetComponent<RectTransform>().position;
        this.GetComponent<RectTransform>().localScale = _shapeStartScale;
        GameEvents.CheckIfShapeCanBePlaced();
    }

    private void MoveShapeToStartPosition()
    {
        _transform.transform.localPosition = _startPosition;
    }
}
