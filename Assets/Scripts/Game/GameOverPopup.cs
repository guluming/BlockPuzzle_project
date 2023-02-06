using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOverPopup : MonoBehaviour
{
    public GameObject RetryPopup;
    public GameObject NewBestScore;
    public GameObject GameOver;

    void Start()
    {
        RetryPopup.SetActive(false);
        NewBestScore.SetActive(false);
        GameOver.SetActive(false);
    }

    public void RetryPopupActive()
    {
        RetryPopup.SetActive(true);
    }

    public void NewBestScoreActive()
    {
        adsManager.I.ShowAd();
        NewBestScore.SetActive(true);
    }

    public void GameOverActive()
    {
        adsManager.I.ShowAd();
        GameOver.SetActive(true);
    }

    public void RetryPopupDeactive()
    {
        RetryPopup.SetActive(false);
    }
}
