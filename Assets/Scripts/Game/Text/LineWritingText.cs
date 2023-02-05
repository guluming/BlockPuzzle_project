using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LineWritingText : MonoBehaviour
{
    public SquareTextureData squareTextureData;

    private void OnEnable()
    {
        CompletedColor();
    }

    private void CompletedColor() {
        foreach (var textureData in squareTextureData.activeSquareTextures) {
            if (textureData.texture == Shape.seletedshapesprite) {
                this.GetComponent<Text>().color = textureData.color;
            }
        }
    }
}
