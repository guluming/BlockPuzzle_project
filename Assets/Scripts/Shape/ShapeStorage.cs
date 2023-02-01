using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeStorage : MonoBehaviour
{
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
        foreach (var shape in shapeList)
        {
            var shapeIndex = UnityEngine.Random.Range(0, shapeData.Count);
            shape.CreateShape(shapeData[shapeIndex]);
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
        foreach (var shape in shapeList) {
            var shapeIndex = UnityEngine.Random.Range(0, shapeData.Count);
            shape.RequestNewShape(shapeData[shapeIndex]);
        }

        if (Grid.gamemode == "ClassicGame")
        {
            Debug.Log("클래식게임 게임오버");
            UpdateSquareColor();
        }
        else if (Grid.gamemode == "ChallengeGame")
        {
            Debug.Log("챌린지게임 게임오버");
            UpdateSquareColor();
        }
    }

    public void UpdateSquareColor()
    {
        if (GameEvents.UpdateSquareColor != null)
        {
            SquareTextureData.UpdateColors();
            GameEvents.UpdateSquareColor(SquareTextureData.currentColor);
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
