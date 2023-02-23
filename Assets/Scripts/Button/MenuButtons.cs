using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour
{
    public Grid grid;
    public GameObject SettingsPopup;

    private void Awake()
    {
        if (Application.isEditor == false) {
            Debug.unityLogger.logEnabled = false;
        }
    }

    public void LoadClassicGame(string name)
    {
        Grid.gamemode = "ClassicGame";
        SceneManager.LoadScene(name);
    }

    public void LoadChallengeGame(string name)
    {
        Grid.gamemode = "ChallengeGame";
        SceneManager.LoadScene(name);
    }

    public void LoadMainScene(string name)
    {
        Grid.gamemode = "MainMenu";
        SceneManager.LoadScene(name);
    }

    public void LoadReplayScene()
    {
        grid.playerSaveGame_.saveGameOver = true;
        grid.saveGame(true);
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
