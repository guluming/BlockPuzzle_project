using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RadialProgress : MonoBehaviour
{
    public Grid grid;
    public Scores score;
    public GameOverPopup gameOverPopup;
    public AdsManager adsManager;
    public Text ProgressIndicator;
    public Image LoadingBar;
    float currentValue = 0;
    float currentValuetext = 5f;

    private void OnDisable()
    {
        Time.timeScale = 1;
        if (Grid.Playerlife > 0)
        {
            Grid.Playerlife = 0;
        }
        else {
            if (score.currentScores_ >= score.bestScores_.score)
            {
                gameOverPopup.NewBestScoreActive();
            }
            else
            {
                gameOverPopup.GameOverActive();
            }
        }
    }

    void Update()
    {
        if (currentValue < 5)
        {
            currentValue += Time.deltaTime;
            currentValuetext -= Time.deltaTime;
            ProgressIndicator.text = ((int)currentValuetext).ToString();
        }
        else
        {
            adsManager.ShowInterstitial();
            //adsManager.I.ShowInterstitialAd();
            grid.playerSaveGame_.saveGameOver = true;
            ProgressIndicator.text = "0";
        }

        LoadingBar.fillAmount = currentValue / 5;
    }

    public void LoadRewardAds() {
        Time.timeScale = 0;
        adsManager.ShowRewardedInterstitialAd();
        //adsManager.I.ShowRewardAd();
    }
}
