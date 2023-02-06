using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
[System.Serializable]

public class SquareTextureData : ScriptableObject
{
    [System.Serializable]
    public class TextureData
    {
        public Sprite texture;
        public Color color;
        public Config.SquareColor squareColor;
    }

    public List<TextureData> activeSquareTextures;

    public Config.SquareColor currentColor;
    private Config.SquareColor _nextColor;

    public int GetCurrentColorIndex()
    {
        var currentIndex = 0;

        for (int index =0; index < activeSquareTextures.Count; index++)
        {
            if (activeSquareTextures[index].squareColor == currentColor)
            {
                currentIndex = index;
            }
        }

        return currentIndex;
    }

    public void UpdateColors()
    {
        currentColor = _nextColor;
        var currentColorIndex = GetCurrentColorIndex();

        int index = Random.Range(0, activeSquareTextures.Count);
        _nextColor = activeSquareTextures[index].squareColor;

    }

    public void SetStartColor()
    {
        int index = Random.Range(0, activeSquareTextures.Count);
        currentColor = activeSquareTextures[index].squareColor;

        if (index == activeSquareTextures.Count - 1)
        {
            _nextColor = activeSquareTextures[0].squareColor;
        }
        else {
            _nextColor = activeSquareTextures[index + 1].squareColor;
        }
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
