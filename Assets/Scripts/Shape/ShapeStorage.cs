using System;
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
    public Grid grid;
    public GameObject ComboObject;

    public static bool isCombo;
    public static int ComboCount;

    public int[] TwoRotationSquare = new int[]
    {
         1,2, 3,4, 5,6, 8,9, 18,19, 28,29, 39,40, 41,42 
    };

    public int[] FourRotationSquare = new int[]
    {
        10,11,12,13, 14,15,16,17, 20,21,22,23, 24,25,26,27, 30,31,32,33, 35,36,37,38
    };

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
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();
        ShapeIndexSeleted(shapeIndexList);

        for (int i = 0; i < shapeList.Count; i++)
        {
            shapeList[i].CreateShape(shapeData[shapeIndexList[i]]);
            UpdateSquareColor();
        }

        //shapeList[0].CreateShape(shapeData[5]);
        //shapeList[1].CreateShape(shapeData[5]);
        //shapeList[2].CreateShape(shapeData[5]);

        //foreach (Shape shape in shapeList)
        //{
        //    int i = Random.Range(0, 4);
        //    shape.transform.eulerAngles = new Vector3(0, 0, 90 * i);
        //}
    }

    private void RequestNewShapes()
    {
        grid.CheckIfPlayLost();
        if (!isCombo)
        {
            ComboCount = 0;
        }
        else {
            isCombo = false;
        }
        IsComboObject();

        List<int> shapeIndexList = new List<int>();
        ShapeIndexSeleted(shapeIndexList);

        for (int i = 0; i < shapeList.Count; i++)
        {
            shapeList[i].RequestNewShape(shapeData[shapeIndexList[i]]);
            UpdateSquareColor();
        }

        //foreach (Shape shape in shapeList)
        //{
        //    int i = Random.Range(0, 4);
        //    shape.transform.eulerAngles = new Vector3(0, 0, 90 * i);
        //}
    }

    public void resurrectionNewShapes()
    {
        if (!isCombo)
        {
            ComboCount = 0;
        }
        else
        {
            isCombo = false;
        }
        IsComboObject();

        for (int i = 0; i < shapeList.Count; i++)
        {
            shapeList[i].RequestNewShape(shapeData[0]);
            UpdateSquareColor();
        }
    }

    private void ShapeIndexSeleted(List<int> shapeIndexList)
    {
        bool hardShapepik = false;

        while (shapeIndexList.Count <= 3)
        {
            int shapeIndex;
            if (hardShapepik)
            {
                shapeIndex = UnityEngine.Random.Range(0, 30);
            }
            else {
                shapeIndex = UnityEngine.Random.Range(0, shapeData.Count);
                if (shapeIndex > 29) {
                    hardShapepik = true;
                }
            }

            if (!shapeIndexList.Contains(shapeIndex))
            {
                if (Array.Exists(TwoRotationSquare, i => i == shapeIndex))
                {
                    int temp = Array.IndexOf(TwoRotationSquare, shapeIndex);

                    if (temp % 2 == 0)
                    {
                        if (!shapeIndexList.Contains(TwoRotationSquare[temp + 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 2 == 1)
                    {
                        if (!shapeIndexList.Contains(TwoRotationSquare[temp - 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                }
                else if (Array.Exists(FourRotationSquare, i => i == shapeIndex))
                {
                    int temp = Array.IndexOf(FourRotationSquare, shapeIndex);

                    if (temp % 4 == 0)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp + 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 2]) && !shapeIndexList.Contains(FourRotationSquare[temp + 3]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 1)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 2]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 2)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 2]) && !shapeIndexList.Contains(FourRotationSquare[temp - 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 3)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 3]) && !shapeIndexList.Contains(FourRotationSquare[temp - 2]) && !shapeIndexList.Contains(FourRotationSquare[temp - 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                }
                else {
                    shapeIndexList.Add(shapeIndex);
                }
            }
        }

        //while (shapeIndexList.Count <= 3) {
        //    int percentage = Random.Range(0, 10);
        //    int shapeIndex;

        //    if (percentage < 5)
        //    {
        //        shapeIndex = UnityEngine.Random.Range(0, 10);
        //    }
        //    else if (5 <= percentage && percentage <= 7)
        //    {
        //        shapeIndex = UnityEngine.Random.Range(10, 12);
        //    }
        //    else
        //    {
        //        shapeIndex = UnityEngine.Random.Range(12, 17);
        //    }

        //    if (!shapeIndexList.Contains(shapeIndex)) {
        //        shapeIndexList.Add(shapeIndex);
        //    }
        //}
    }

    public void IsComboObject() {
        if (ComboCount > 0)
        {
            ComboObject.SetActive(true);
        }
        else {
            ComboObject.SetActive(false);
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

    public bool IsShapeStorageEmpty()
    {
        foreach (var shape in shapeList) {
            if (shape.IsAnyOfShapeSqaureActive()) {
                return false;
            }
        }
        return true;
    }

    public void UpdateSquareColor()
    {
        if (GameEvents.UpdateSquareColor != null)
        {
            SquareTextureData.UpdateColors();
        }
    }
}
