using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class playerGameSettingData
{
    public bool sfxsetting = true;
    public bool bgmsetting = true;
}

public class audioManager : MonoBehaviour
{
    public GameObject bgmSource;
    public GameObject sfxSource;

    [HideInInspector]
    public playerGameSettingData playerGameSettings_ = new playerGameSettingData();

    private string playerGameSettingskey = "playerGameSettings";

    private void Awake()
    {
        if (BinaryDataStream.Exist(playerGameSettingskey))
        {
            playerGameSettings_ = BinaryDataStream.Read<playerGameSettingData>(playerGameSettingskey);

            SwitchToggle.sfxsetting = playerGameSettings_.sfxsetting;
            SwitchToggle.bgmsetting = playerGameSettings_.bgmsetting;
        }
        else {
            SwitchToggle.bgmsetting = true;
            SwitchToggle.sfxsetting = true;
        }

        bgmSource.SetActive(SwitchToggle.bgmsetting);
        sfxSource.SetActive(SwitchToggle.sfxsetting);
    }

    public void saveGameSettings()
    {
        playerGameSettings_.sfxsetting = SwitchToggle.sfxsetting;
        playerGameSettings_.bgmsetting = SwitchToggle.bgmsetting;
        BinaryDataStream.Save<playerGameSettingData>(playerGameSettings_, playerGameSettingskey);
    }

    private void Update()
    {
        bgmSource.SetActive(SwitchToggle.bgmsetting);
        sfxSource.SetActive(SwitchToggle.sfxsetting);
    }
}
