using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOverPopup : MonoBehaviour
{
    public GameObject RetryPopup;
    public GameObject NewBestScore;
    public GameObject MaintainScore;

    void Start()
    {
        RetryPopup.SetActive(false);
        NewBestScore.SetActive(false);
        MaintainScore.SetActive(false);
    }

    public void RetryPopupActive()
    {
        RetryPopup.SetActive(true);
    }

    public void NewBestScoreActive()
    {
        adsManager.I.ShowInterstitialAd();
        NewBestScore.SetActive(true);
    }

    public void GameOverActive()
    {
        adsManager.I.ShowInterstitialAd();
        MaintainScore.SetActive(true);
    }

    public void RetryPopupDeactive()
    {
        RetryPopup.SetActive(false);
    }
}
