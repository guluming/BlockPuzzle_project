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

    
    Vector2 handlePosition;

    public audioManager audioManager;

    Toggle toggle;
    public static bool sfxsetting;
    public static bool bgmsetting;

    void Awake()
    {
        toggle = GetComponent<Toggle>();

        handlePosition = uiHandleRectTransform.anchoredPosition;

        backgroundImage = uiHandleRectTransform.parent.GetComponent<Image>();
        handleImage = uiHandleRectTransform.GetComponent<Image>();

        backgroundDefaultActiveColor = backgroundImage.color;
        handleDefaultActiveColor = handleImage.color;
    }

    public void OnSFXSwitch()
    {
        uiHandleRectTransform.anchoredPosition = toggle.isOn ? handlePosition : handlePosition * -1;
        backgroundImage.color = toggle.isOn ? backgroundDefaultActiveColor : backgroundActiveColor;
        handleImage.color = toggle.isOn ? handleDefaultActiveColor : handleActiveColor;
        sfxsetting = toggle.isOn ? true : false;
        audioManager.saveGameSettings();
    }

    public void OnBGMSwitch()
    {
        uiHandleRectTransform.anchoredPosition = toggle.isOn ? handlePosition : handlePosition * -1;
        backgroundImage.color = toggle.isOn ? backgroundDefaultActiveColor : backgroundActiveColor;
        handleImage.color = toggle.isOn ? handleDefaultActiveColor : handleActiveColor;
        bgmsetting = toggle.isOn ? true : false;
        audioManager.saveGameSettings();
    }

}
