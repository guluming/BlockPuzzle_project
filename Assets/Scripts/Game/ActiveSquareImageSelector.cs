using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveSquareImageSelector : MonoBehaviour
{
    public SquareTextureData SquareTextureData;
    public JewelSquareTextureData jewelSquareTextureData;
    public bool updateImageOnRechedTreshold = false;

    private void OnEnable()
    {
        UpdateSquareColorBaseOnCurrentPoints();

        if (updateImageOnRechedTreshold)
        {
            GameEvents.UpdateSquareColor += UpdateSquaresColor;
        }
    }

    private void OnDisable()
    {
        if (updateImageOnRechedTreshold)
        {
            GameEvents.UpdateSquareColor -= UpdateSquaresColor;
        }
    }

    private void UpdateSquareColorBaseOnCurrentPoints()
    {
        foreach (var squareTexture in SquareTextureData.activeSquareTextures) {
            if (SquareTextureData.currentColor == squareTexture.squareColor) {
                GetComponent<Image>().sprite = squareTexture.texture;
            }
        }
    }


    private void UpdateSquaresColor(Config.SquareColor color)
    {
        foreach (var squareTexture in SquareTextureData.activeSquareTextures) {
            if (color == squareTexture.squareColor) {
                GetComponent<Image>().sprite = squareTexture.texture;
            }
        }
    }

    //private void UpdateJewelSquareBaseOnCurrentPoints()
    //{
    //    //int index = Random.Range(0, 5);

    //    //jewelSquareTextureData.currentjewel = jewelSquareTextureData.activeJewelSquareTextures[index].jewelSquare;
        
    //    foreach (var jewelSquareTexture in jewelSquareTextureData.activeJewelSquareTextures)
    //    {
    //        if (jewelSquareTextureData.currentjewel == jewelSquareTexture.jewelSquare)
    //        {
    //            GetComponent<Image>().sprite = jewelSquareTexture.texture;
    //        }
    //    }
    //}
}
