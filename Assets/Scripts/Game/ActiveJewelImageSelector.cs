using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveJewelImageSelector : MonoBehaviour
{
    public JewelSquareTextureData jewelSquareTextureData;

    private void OnEnable()
    {
        UpdateJewelSquareBaseOnCurrentPoints();
    }

    private void UpdateJewelSquareBaseOnCurrentPoints()
    {
        foreach (var jewelTexture in jewelSquareTextureData.activeJewelSquareTextures)
        {
            if (jewelSquareTextureData.currentjewel == jewelTexture.jewelSquare)
            {
                GetComponent<Image>().sprite = jewelTexture.texture;

            }
        }
    }

}
