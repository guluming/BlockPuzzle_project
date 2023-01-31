using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Settings : MonoBehaviour
{
    public GameObject SettingPopup;

    public void OnClickSettingPopup()
    {
        SettingPopup.SetActive(true);
    }

    public void OnClickSettingPopdown()
    {
        SettingPopup.SetActive(false);
    }

    public void OnClickBackgroundMusic()
    {

    }

    public void OnClickSoundsFX()
    {

    }
}
