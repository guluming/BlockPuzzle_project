using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour
{
    public Grid grid;
    public GameObject SettingsPopup;
    public GameObject NoticePopup;

    private void Awake()
    {
        if (Application.isEditor == false) {
            Debug.unityLogger.logEnabled = false;
        }
    }

    public void LoadSeleteScene(string name)
    {
        if (name == "ClassicGame")
        {
            Grid.gamemode = "ClassicGame";
        }
        else if (name == "ChallengeGame")
        {
            Grid.gamemode = "ChallengeGame";
        }
        else
        {
            Grid.gamemode = "Menu";
        }

        SceneManager.LoadScene(name);
    }

    public void LoadReplayScene()
    {
        if (Grid.gamemode == "ClassicGame")
        {
            Grid.gamemode = "ClassicGame";
            grid.playerSaveGame_.saveGameOver = true;
            grid.saveGame(true);
            SceneManager.LoadScene("ClassicGame");
        }
        else if (Grid.gamemode == "ChallengeGame")
        {
            Grid.gamemode = "ChallengeGame";
            grid.playerSaveChallengeGame_.ChallengesaveGameOver = true;
            grid.saveChallengeGame(true);
            SceneManager.LoadScene("ChallengeGame");
        }
    }

    /*public static void LoadAdsMainScene()
    {
        SceneManager.LoadScene("MainMenu");
        Grid.gamemode = "";
    }*/

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

    public void OnNoticePopup()
    {
        NoticePopup.SetActive(true);
    }

    public void OffNoticePopup()
    {
        NoticePopup.SetActive(false);
    }
}
