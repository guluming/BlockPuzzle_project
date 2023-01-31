using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
[System.Serializable]

public class JewelSquareTextureData : ScriptableObject
{
    [System.Serializable]
    public class TextureData
    {
        public Sprite texture;
        public Config.jewelSquare jewelSquare;
    }

    public int tresholdVal = 0;
    private const int StartTresholdVal = 0;
    public List<TextureData> activeJewelSquareTextures;

    public Config.jewelSquare currentjewel;
    private Config.jewelSquare _nextJewel;

    public int GetCurrentColorIndex()
    {
        var currentIndex = 0;

        for (int index =0; index < activeJewelSquareTextures.Count; index++) {
            if (activeJewelSquareTextures[index].jewelSquare == currentjewel) {
                currentIndex = index;
            }
        }

        return currentIndex;
    }

    public void UpdateColors(int current_score) {
        currentjewel = _nextJewel;
        var currentColorIndex = GetCurrentColorIndex();

        if (currentColorIndex == activeJewelSquareTextures.Count - 1)
        {
            _nextJewel = activeJewelSquareTextures[0].jewelSquare;
        }
        else {
            _nextJewel = activeJewelSquareTextures[currentColorIndex + 1].jewelSquare;
        }

        tresholdVal = StartTresholdVal + current_score;
    }

    public void SetStartColor()
    {
        tresholdVal = StartTresholdVal;
        currentjewel = activeJewelSquareTextures[0].jewelSquare;
        _nextJewel = activeJewelSquareTextures[1].jewelSquare;
    }

    private void Awake()
    {
        SetStartColor();
    }

    private void OnEnable()
    {
        SetStartColor();
    }
}
