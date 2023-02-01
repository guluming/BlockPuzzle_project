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

    public void ReTryGame(string name)
    {
        SceneManager.LoadScene(name);
    }
}
