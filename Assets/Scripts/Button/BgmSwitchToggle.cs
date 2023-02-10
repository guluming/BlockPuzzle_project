using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BgmSwitchToggle : MonoBehaviour
{
    [SerializeField] RectTransform uiHandleRectTransform;
    [SerializeField] Color backgroundActiveColor;
    [SerializeField] Color handleActiveColor;

    Image backgroundImage, handleImage;

    Color backgroundDefaultActiveColor, handleDefaultActiveColor;

    Vector2 handlePosition;

    public audioManager audioManager;
    public GameObject bgmSource;

    Toggle toggle;

    void Awake()
    {
        toggle = GetComponent<Toggle>();

        handlePosition = uiHandleRectTransform.anchoredPosition;

        backgroundImage = uiHandleRectTransform.parent.GetComponent<Image>();
        handleImage = uiHandleRectTransform.GetComponent<Image>();

        backgroundDefaultActiveColor = backgroundImage.color;
        handleDefaultActiveColor = handleImage.color;
    }

    private void Start()
    {
        toggle.isOn = audioManager.bgmsetting;
        OnBGMSwitchState(audioManager.bgmsetting);
    }

    public void OnBGMSwitch()
    {
        audioManager.bgmsetting = toggle.isOn;
        uiHandleRectTransform.anchoredPosition = audioManager.bgmsetting ? handlePosition : handlePosition * -1;
        backgroundImage.color = audioManager.bgmsetting ? backgroundDefaultActiveColor : backgroundActiveColor;
        handleImage.color = audioManager.bgmsetting ? handleDefaultActiveColor : handleActiveColor;
        bgmSource.SetActive(audioManager.bgmsetting);
        audioManager.saveGameSettings();
    }

    public void OnBGMSwitchState(bool bgmsetting)
    {
        uiHandleRectTransform.anchoredPosition = bgmsetting ? handlePosition : handlePosition * -1;
        backgroundImage.color = bgmsetting ? backgroundDefaultActiveColor : backgroundActiveColor;
        handleImage.color = bgmsetting ? handleDefaultActiveColor : handleActiveColor;
    }
}
