using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SfxSwitchToggle : MonoBehaviour
{
    [SerializeField] RectTransform uiHandleRectTransform;
    [SerializeField] Color backgroundActiveColor;
    [SerializeField] Color handleActiveColor;

    Image backgroundImage, handleImage;

    Color backgroundDefaultActiveColor, handleDefaultActiveColor;

    Vector2 handlePosition;

    public audioManager audioManager;
    public GameObject sfxSource;

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
        toggle.isOn = audioManager.sfxsetting;
        OnSFXSwitchState(audioManager.sfxsetting);
    }

    public void OnSFXSwitch()
    {
        audioManager.sfxsetting = toggle.isOn;
        uiHandleRectTransform.anchoredPosition = audioManager.sfxsetting ? handlePosition : handlePosition * -1;
        backgroundImage.color = audioManager.sfxsetting ? backgroundDefaultActiveColor : backgroundActiveColor;
        handleImage.color = audioManager.sfxsetting ? handleDefaultActiveColor : handleActiveColor;
        sfxSource.SetActive(audioManager.sfxsetting);
        audioManager.saveGameSettings();
    }

    public void OnSFXSwitchState(bool sfxsetting)
    {
        uiHandleRectTransform.anchoredPosition = sfxsetting ? handlePosition : handlePosition * -1;
        backgroundImage.color = sfxsetting ? backgroundDefaultActiveColor : backgroundActiveColor;
        handleImage.color = sfxsetting ? handleDefaultActiveColor : handleActiveColor;
    }
}
