using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwitchToggle : MonoBehaviour
{
    [SerializeField] RectTransform uiHandleRectTransform;
    [SerializeField] Color backgroundActiveColor;
    [SerializeField] Color handleActiveColor;

    Image backgroundImage, handleImage;

    Color backgroundDefaultActiveColor, handleDefaultActiveColor;

    Toggle toggle;
    Vector2 handlePosition;

    public static bool sfxsetting = true;
    public static bool bgmsetting = true;

    void Awake()
    {
        toggle = GetComponent<Toggle>();

        handlePosition = uiHandleRectTransform.anchoredPosition;

        backgroundImage = uiHandleRectTransform.parent.GetComponent<Image>();
        handleImage = uiHandleRectTransform.GetComponent<Image>();

        backgroundDefaultActiveColor = backgroundImage.color;
        handleDefaultActiveColor = handleImage.color;
    }

    public void OnBGMSwitch()
    {
        uiHandleRectTransform.anchoredPosition = toggle.isOn ? handlePosition : handlePosition * -1;
        backgroundImage.color = toggle.isOn ? backgroundDefaultActiveColor : backgroundActiveColor;
        handleImage.color = toggle.isOn ? handleDefaultActiveColor : handleActiveColor;
        bgmsetting = toggle.isOn ? true : false;
        Debug.Log("bgm setting : " + bgmsetting);
    }

    public void OnSFXSwitch()
    {
        uiHandleRectTransform.anchoredPosition = toggle.isOn ? handlePosition : handlePosition * -1;
        backgroundImage.color = toggle.isOn ? backgroundDefaultActiveColor : backgroundActiveColor;
        handleImage.color = toggle.isOn ? handleDefaultActiveColor : handleActiveColor;
        sfxsetting = toggle.isOn ? true : false;
        Debug.Log("sfx setting : " + sfxsetting);
    }
}
