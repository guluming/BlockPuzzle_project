using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour
{
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

    public static void LoadAdsMainScene()
    {
        SceneManager.LoadScene("MainMenu");
        Grid.gamemode = "";
    }

    public static void LoadRewardAds()
    {
        adsManager.I.ShowRewardAd();
    }

    public void ReTryGame(string name)
    {
        SceneManager.LoadScene(name);
    }
}
