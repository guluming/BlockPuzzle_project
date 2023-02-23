using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

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

    public int targetFrameRate = 60;

    public static bool sfxsetting;
    public static bool bgmsetting;

    [HideInInspector]
    public playerGameSettingData playerGameSettings_ = new playerGameSettingData();

    private string playerGameSettingskey = "playerGameSettings";

    private void Awake()
    {
        Application.targetFrameRate = targetFrameRate;

        if (BinaryDataStream.Exist(playerGameSettingskey))
        {
            playerGameSettings_ = BinaryDataStream.Read<playerGameSettingData>(playerGameSettingskey);

            sfxsetting = playerGameSettings_.sfxsetting;
            bgmsetting = playerGameSettings_.bgmsetting;
        }
        else {
            bgmsetting = true;
            sfxsetting = true;
        }

        bgmSource.SetActive(bgmsetting);
        sfxSource.SetActive(sfxsetting);
    }

    private void Update()
    {
        if (Application.platform == RuntimePlatform.Android) {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                if (Grid.gamemode != "MainMenu")
                {
                    Grid.gamemode = "MainMenu";
                    SceneManager.LoadScene("MainMenu");
                }
                else
                {
                    Application.Quit();
                }
            }
        }
    }

    public void saveGameSettings()
    {
        playerGameSettings_.sfxsetting = sfxsetting;
        playerGameSettings_.bgmsetting = bgmsetting;
        BinaryDataStream.Save<playerGameSettingData>(playerGameSettings_, playerGameSettingskey);
    }
}
