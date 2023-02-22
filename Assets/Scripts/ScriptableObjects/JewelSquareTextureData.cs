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

    public List<TextureData> activeJewelSquareTextures;

    public Config.jewelSquare currentjewel;
    private Config.jewelSquare _nextJewel;

    public int GetCurrentJewelIndex()
    {
        var currentIndex = 0;

        for (int index =0; index < activeJewelSquareTextures.Count; index++) {
            if (activeJewelSquareTextures[index].jewelSquare == currentjewel) {
                currentIndex = index;
            }
        }

        return currentIndex;
    }

    public void UpdateJewels() {
        currentjewel = _nextJewel;
        var currentColorIndex = GetCurrentJewelIndex();

        int index = Random.Range(0, activeJewelSquareTextures.Count);
        _nextJewel = activeJewelSquareTextures[index].jewelSquare;
    }

    public void SetStartJewel()
    {
        int index = Random.Range(0, activeJewelSquareTextures.Count);
        currentjewel = activeJewelSquareTextures[index].jewelSquare;

        if (index == activeJewelSquareTextures.Count - 1)
        {
            _nextJewel = activeJewelSquareTextures[0].jewelSquare;
        }
        else
        {
            _nextJewel = activeJewelSquareTextures[index + 1].jewelSquare;
        }
    }

    private void Awake()
    {
        SetStartJewel();
    }

    private void OnEnable()
    {
        SetStartJewel();
    }
}
