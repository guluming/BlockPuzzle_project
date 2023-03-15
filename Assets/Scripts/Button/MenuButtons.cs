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
        else if (Grid.startStage >= 36)
        {
            name = "ChallengeMenu";
        }
        else
        {
            Grid.gamemode = "Menu";
        }

        SceneManager.LoadScene(name);
    }

    public void LoadReplayScene()
    {
        Debug.Log(Grid.gamemode);
        if (Grid.gamemode == "ClassicGame")
        {
            Grid.gamemode = "ClassicGame";
            grid.playerSaveGame_.saveGameOver = true;
            grid.saveGame();
            SceneManager.LoadScene("ClassicGame");
        }
        else if (Grid.gamemode == "ChallengeGame")
        {
            Grid.gamemode = "ChallengeGame";
            grid.playerSaveChallengeGame_.ChallengesaveGameOver = true;
            grid.saveChallengeGame();
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

    public void TermsOfServiceButton() 
    {
        Application.OpenURL("https://forms.gle/1T21xFFbhXqpWbVC6");
    }

    public void PrivacyPolicyButton() 
    {
        Application.OpenURL("https://forms.gle/iXdwuQJdVW5aK76H7");
    }
}
