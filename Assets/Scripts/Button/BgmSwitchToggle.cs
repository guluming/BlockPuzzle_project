using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BgmSwitchToggle : MonoBehaviour
{
    [SerializeField] RectTransform uiHandleRectTransform;
    [SerializeField] Sprite backgroundActiveSprite;
    [SerializeField] Color handleActiveColor;

    Image backgroundImage, handleImage;

    Sprite backgroundDefaultActiveSprite;

    Color handleDefaultActiveColor;

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

        backgroundDefaultActiveSprite = backgroundImage.sprite;
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
        uiHandleRectTransform.anchoredPosition = audioManager.bgmsetting ? new Vector2(handlePosition.x, handlePosition.y) : new Vector2((handlePosition.x * -1) - 7, handlePosition.y);
        backgroundImage.sprite = audioManager.bgmsetting ? backgroundDefaultActiveSprite : backgroundActiveSprite;
        handleImage.color = audioManager.bgmsetting ? handleDefaultActiveColor : handleActiveColor;
        bgmSource.SetActive(audioManager.bgmsetting);
        audioManager.saveGameSettings();
    }

    public void OnBGMSwitchState(bool bgmsetting)
    {
        uiHandleRectTransform.anchoredPosition = bgmsetting ? new Vector2(handlePosition.x, handlePosition.y) : new Vector2((handlePosition.x * -1) - 7, handlePosition.y);
        backgroundImage.sprite = bgmsetting ? backgroundDefaultActiveSprite : backgroundActiveSprite;
        handleImage.color = bgmsetting ? handleDefaultActiveColor : handleActiveColor;
    }
}
