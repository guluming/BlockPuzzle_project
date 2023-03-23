using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Shape : MonoBehaviour, IPointerClickHandler, IPointerUpHandler, IPointerDownHandler, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public AnimationCurve curve;
    public GameObject squareShapeImage;
    public GameObject jewelShapeImage;
    public Grid grid;
    public ChallengeStage challengeStage;
    public Vector3 shapeSelectedScale;
    public Vector2 offset;

    [HideInInspector]
    public ShapeData CurrentShapeData;
    public static Sprite seletedshapesprite;
    public static Color seletedshapecolor;
    public static Vector3 seletedshapeglobalPosition;

    public int TotalSquareNumber { get; set; }

    private List<GameObject> _currentShape = new List<GameObject>();
    private SquareTextureData squareTexture;
    private RectTransform _transform;
    private Canvas _canvas;
    private Vector3 _startPosition;
    private Vector3 _shapeStartScale;
    private bool _shapeActive = true;
    private bool _shapeDraggable = true;
    private bool isMoving = false;


    public void Awake()
    {
        _shapeStartScale = this.GetComponent<RectTransform>().localScale;
        _transform = this.GetComponent<RectTransform>();
        _canvas = GetComponentInParent<Canvas>();
        _shapeDraggable = true;
        _startPosition = _transform.localPosition;
        _shapeActive = true;
    }

    private void Update()
    {
        if (Input.touchCount == 1)
        {
            for (int i = 0; i < transform.childCount - 1; i++)
            {
                if (transform.GetChild(i).transform.GetChild(0).gameObject.activeSelf)
                {
                    if (grid.CheckIfShapeCanBePlacedOnGridOnlyOne(this) != null)
                    {
                        grid.onePlaceExceptGridSquareHooverImageOff(grid.CheckIfShapeCanBePlacedOnGridOnlyOne(this));
                    }
                    else
                    {
                        grid.AllGridSquareHooverImageOff();
                    }
                }
            }

            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Ended)
            {
                grid.AllGridSquareHooverImageOff();
            }
        }
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

    public void firstCreateShape(ShapeData shapeData)
    {
        CurrentShapeData = shapeData;
        TotalSquareNumber = GetNumberOfSquares(CurrentShapeData);

        while (_currentShape.Count <= TotalSquareNumber)
        {
            _currentShape.Add(Instantiate(squareShapeImage, transform) as GameObject);
        }

        foreach (GameObject square in _currentShape)
        {
            square.gameObject.transform.position = Vector3.zero;
            square.gameObject.SetActive(false);
        }

        var squareRect = squareShapeImage.GetComponent<RectTransform>();
        var moveDistance = new Vector2(squareRect.rect.width * squareRect.localScale.x,
            squareRect.rect.height * squareRect.localScale.y);

        int currentIndexInList = 0;

        for (var row = 0; row < shapeData.rows; row++)
        {
            for (var column = 0; column < shapeData.columns; column++)
            {
                if (shapeData.board[row].column[column])
                {
                    _currentShape[currentIndexInList].SetActive(true);
                    _currentShape[currentIndexInList].GetComponent<RectTransform>().localPosition =
                        new Vector2(GetXPositionForShapeSquare(shapeData, column, moveDistance),
                        GetYPositionForShapeSquare(shapeData, row, moveDistance));

                    currentIndexInList++;
                }
            }
        }
    }

    public void CreateShape(ShapeData shapeData)
    {
        DeleteChilds(_currentShape);
        _currentShape.Clear();

        //Debug.Log(Grid.gamemode);
        //Debug.Log(ChallengeStage.challengemode);

        CurrentShapeData = shapeData;
        TotalSquareNumber = GetNumberOfSquares(CurrentShapeData);

        if (Grid.gamemode == "" || Grid.gamemode == "ClassicGame" || Grid.gamemode == "tutorial3")
        {
            while (_currentShape.Count <= TotalSquareNumber)
            {
                _currentShape.Add(Instantiate(squareShapeImage, transform) as GameObject);
            }
        }
        else if (Grid.gamemode == "ChallengeGame" && ChallengeStage.challengemode == "Jewelmode")
        {
            bool jewelShapeImageCheck = true;

            while (_currentShape.Count <= TotalSquareNumber)
            {
                if (Random.Range(0, 3) == 0 && jewelShapeImageCheck)
                {
                    //Debug.Log("보석 추가");
                    _currentShape.Add(Instantiate(jewelShapeImage, transform) as GameObject);
                    jewelShapeImageCheck = false;
                }
                else
                {
                    //Debug.Log("일반 블록 추가");
                    _currentShape.Add(Instantiate(squareShapeImage, transform) as GameObject);
                }
            }
        }
        else
        {
            while (_currentShape.Count <= TotalSquareNumber)
            {
                _currentShape.Add(Instantiate(squareShapeImage, transform) as GameObject);
            }
        }

        foreach (GameObject square in _currentShape) {
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

    private void DeleteChilds(List<GameObject> _currentShape)
    {
        // child 에는 부모와 자식이 함께 설정 된다.

        foreach (var child in _currentShape)
        {
            var childs = child.transform.GetComponentsInChildren<Transform>();
            foreach (var children in childs)
                // 부모(this.gameObject)는 삭제 하지 않기 위한 처리
                if (children != this.transform)
                {
                    children.SetParent(null);
                    Destroy(children.gameObject);
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

    private float GetXPositionForShapeSquare(ShapeData shapeData, int column, Vector2 moveDistance)
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
        seletedshapeglobalPosition = GetComponent<RectTransform>().position;
        GetComponent<RectTransform>().localScale = new Vector3(0.6f, 0.6f, 0.6f);

        GameEvents.CheckIfShapeCanBePlaced();

        grid.AllGridSquareHooverImageOff();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        for (int i=0; i< transform.childCount; i++)
        {
            if (transform.GetChild(i).gameObject.activeSelf)
            {
                seletedshapesprite = transform.GetChild(i).GetComponent<Image>().sprite;
            }
        }

        if (audioManager.sfxsetting) {
            GameEvents.blockDown();
        }

        _transform.anchorMin = new Vector2(0.5f, 0.5f);
        _transform.anchorMax = new Vector2(0.5f, 0.5f);
        _transform.pivot = new Vector2(0.5f, 0.5f);

        Vector2 pos;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(_canvas.transform as RectTransform,
            eventData.position, Camera.main, out pos);
        _transform.localPosition = pos + offset;

        GetComponent<RectTransform>().localScale = shapeSelectedScale;

        grid.CheckIfShapeCanBePlacedOnGridOnlyOne(this);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {

    }

    public void OnDrag(PointerEventData eventData)
    {
        _transform.anchorMin = new Vector2(0.5f, 0.5f);
        _transform.anchorMax = new Vector2(0.5f, 0.5f);
        _transform.pivot = new Vector2(0.5f, 0.5f);

        Vector2 pos;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(_canvas.transform as RectTransform,
            eventData.position, Camera.main, out pos);
        _transform.localPosition = pos + offset;

        grid.CheckIfShapeCanBePlacedOnGridOnlyOne(this);
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        GetComponent<RectTransform>().localScale = _shapeStartScale;

        GameEvents.CheckIfShapeCanBePlaced();
    }

    private void MoveShapeToStartPosition()
    {
        StartCoroutine(MoveShape());
    }

    IEnumerator MoveShape()
    {
        Vector3 targetPosition = _transform.transform.localPosition;
        float timer = 0.0f;
        float duration = 0.3f;
        float percentage;

        GetComponent<Image>().raycastTarget = false;
        for (int i = 0; i < transform.childCount; i++) 
        {
            transform.GetChild(i).GetComponent<Image>().raycastTarget = false;
        }

        while (timer < duration)
        {
            timer += Time.deltaTime;
            percentage = timer / duration;
            _transform.transform.localPosition = Vector3.Lerp(targetPosition, _startPosition, curve.Evaluate(percentage));
            yield return null;
        }
        GetComponent<Image>().raycastTarget = true;
        for (int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).GetComponent<Image>().raycastTarget = true;
        }
    }
}
