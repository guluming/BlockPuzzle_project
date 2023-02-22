using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SfxSwitchToggle : MonoBehaviour
{
    [SerializeField] RectTransform uiHandleRectTransform;
    [SerializeField] Sprite backgroundActiveSprite;
    [SerializeField] Color handleActiveColor;

    Image backgroundImage, handleImage;

    Sprite backgroundDefaultActiveSprite;

    Color handleDefaultActiveColor;

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

        backgroundDefaultActiveSprite = backgroundImage.sprite;
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
        uiHandleRectTransform.anchoredPosition = audioManager.sfxsetting ? new Vector2(handlePosition.x, handlePosition.y) : new Vector2((handlePosition.x * -1) -7, handlePosition.y);
        backgroundImage.sprite = audioManager.sfxsetting ? backgroundDefaultActiveSprite : backgroundActiveSprite;
        handleImage.color = audioManager.sfxsetting ? handleDefaultActiveColor : handleActiveColor;
        sfxSource.SetActive(audioManager.sfxsetting);
        audioManager.saveGameSettings();
    }

    public void OnSFXSwitchState(bool sfxsetting)
    {
        uiHandleRectTransform.anchoredPosition = sfxsetting ? new Vector2(handlePosition.x, handlePosition.y) : new Vector2((handlePosition.x * -1) - 7, handlePosition.y);
        backgroundImage.sprite = sfxsetting ? backgroundDefaultActiveSprite : backgroundActiveSprite;
        handleImage.color = sfxsetting ? handleDefaultActiveColor : handleActiveColor;
    }
}
