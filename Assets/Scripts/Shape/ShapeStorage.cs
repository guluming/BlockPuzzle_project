using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeStorage : MonoBehaviour
{
    /*
     * 블록 난이도
     * 기본 : 10개 1 ~ 10 (index 기준 0 ~ 9)
     * 중간 : 2개 11 ~ 12 (index 기준 10 ~ 11)
     * 하드 : 5개 13 ~ 17 (index 기준 13 ~ 17)
     */
    public List<ShapeData> shapeData;
    public List<Shape> shapeList;
    public SquareTextureData SquareTextureData;

    private void OnEnable()
    {
        GameEvents.RequestNewShapes += RequestNewShapes;
    }

    private void OnDisable()
    {
        GameEvents.RequestNewShapes -= RequestNewShapes;
    }

    void Start()
    {
        List<int> shapeIndexList = new List<int>();
        ShapeIndexSeleted(shapeIndexList);

        for (int i = 0; i < shapeList.Count; i++)
        {
            shapeList[i].CreateShape(shapeData[shapeIndexList[i]]);
            UpdateSquareColor();
        }
    }

    private void ShapeIndexSeleted(List<int> shapeIndexList) {

        while (shapeIndexList.Count <= 3) {
            int percentage = Random.Range(0, 10);
            int shapeIndex;

            if (percentage < 5)
            {
                shapeIndex = UnityEngine.Random.Range(0, 10);
            }
            else if (5 <= percentage && percentage <= 7)
            {
                shapeIndex = UnityEngine.Random.Range(10, 12);
            }
            else
            {
                shapeIndex = UnityEngine.Random.Range(12, 17);
            }

            if (!shapeIndexList.Contains(shapeIndex)) {
                shapeIndexList.Add(shapeIndex);
            }
        }
    }

    public Shape GetCurrentSelectedShape()
    {
        foreach (var shape in shapeList) {
            if (shape.IsOnStartPosition() == false && shape.IsAnyOfShapeSqaureActive()) {
                return shape;
            }
        }

        Debug.LogError("There is no shape selected");
        return null;
    }

    private void RequestNewShapes()
    {
        List<int> shapeIndexList = new List<int>();
        ShapeIndexSeleted(shapeIndexList);

        for (int i = 0; i < shapeList.Count; i++)
        {
            shapeList[i].RequestNewShape(shapeData[shapeIndexList[i]]);
            UpdateSquareColor();
        }

        //foreach (var shape in shapeList) {
        //    var shapeIndex = UnityEngine.Random.Range(0, shapeData.Count);
        //    shape.RequestNewShape(shapeData[shapeIndex]);
        //}

        //if (Grid.gamemode == "ClassicGame")
        //{
        //    Debug.Log("클래식게임 게임오버");
        //    UpdateSquareColor();
        //}
        //else if (Grid.gamemode == "ChallengeGame")
        //{
        //    Debug.Log("챌린지게임 게임오버");
        //    UpdateSquareColor();
        //}
    }

    public void UpdateSquareColor()
    {
        if (GameEvents.UpdateSquareColor != null)
        {
            SquareTextureData.UpdateColors();
            //GameEvents.UpdateSquareColor(SquareTextureData.currentColor);
        }
    }

    public bool IsShapeStorageEmpty()
    {
        foreach (var shape in shapeList) {
            if (shape.IsAnyOfShapeSqaureActive()) {
                return false;
            }
        }
        return true;
    }
}
