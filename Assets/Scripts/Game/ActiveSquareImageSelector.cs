using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveSquareImageSelector : MonoBehaviour
{
    public SquareTextureData SquareTextureData;

    private void OnEnable()
    {
        UpdateSquareColorBaseOnCurrentPoints();
    }

    private void UpdateSquareColorBaseOnCurrentPoints()
    {
        foreach (var squareTexture in SquareTextureData.activeSquareTextures)
        {
            if (SquareTextureData.currentColor == squareTexture.squareColor)
            {
                GetComponent<Image>().sprite = squareTexture.texture;

            }
        }
    }

}
