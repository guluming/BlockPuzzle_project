using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour
{
    public AdsManager adsManager;
    public GameObject SettingsPopup;

    private void Awake()
    {
        if (Application.isEditor == false) {
            Debug.unityLogger.logEnabled = false;
        }
    }

    public void LoadClassicGame(string name)
    {
        SceneManager.LoadScene(name);
        Grid.gamemode = "ClassicGame";
    }

    public void LoadChallengeGame(string name)
    {
        SceneManager.LoadScene(name);
        Grid.gamemode = "ChallengeGame";
    }

    public void LoadMainScene(string name)
    {
        SceneManager.LoadScene(name);
        Grid.gamemode = "";
    }

    public void LoadReplayScene()
    {
        SceneManager.LoadScene("Game");
    }

    public static void LoadAdsMainScene()
    {
        SceneManager.LoadScene("MainMenu");
        Grid.gamemode = "";
    }

    public void ReTryGame(string name)
    {
        SceneManager.LoadScene(name);
    }

    public void OnSettingsPopup()
    {
        SettingsPopup.SetActive(true);
    }

    public void OffSettingsPopup()
    {
        SettingsPopup.SetActive(false);
    }
}
