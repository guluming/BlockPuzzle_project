using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class adsManager : MonoBehaviour
{
    public GameOverPopup gameOverPopup;
    public ShapeStorage shapeStorage;
    public static adsManager I;

    string adType;
    string gameId;

    private void Awake()
    {
        I = this;

        if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            gameId = "5150982";
        }
        else {
            gameId = "5150983";
        }

        Advertisement.Initialize(gameId, true);
    }

    public void ShowRewardAd()
    {
        adType = "Rewarded";
        if (gameId == "5150982") {
            adType += "_iOS";
            if (Advertisement.IsReady())
            {
                ShowOptions options = new ShowOptions { resultCallback = ResultRewardAds };
                Advertisement.Show(adType, options);
            }
        } else if (gameId == "5150983") {
            adType += "_Android";
            if (Advertisement.IsReady())
            {
                ShowOptions options = new ShowOptions { resultCallback = ResultRewardAds };
                Advertisement.Show(adType, options);
            }
        }
    }

    void ResultRewardAds(ShowResult result)
    {
        switch (result)
        {
            case ShowResult.Failed:
                Debug.LogError("광고 보기에 실패했습니다.");
                break;
            case ShowResult.Skipped:
                Debug.LogError("광고를 스킵했습니다.");
                break;
            case ShowResult.Finished:
                gameOverPopup.RetryPopupDeactive();
                shapeStorage.resurrectionNewShapes();
                Debug.Log("광고 보기를 완료했습니다.");
                break;
        }
    }

    public void ShowInterstitialAd()
    {
        adType = "Interstitial";
        if (gameId == "5150982") {
            adType += "_iOS";
            if (Advertisement.IsReady())
            {
                ShowOptions options = new ShowOptions { resultCallback = ResultInterstitialAds };
                Advertisement.Show(adType, options);
            }
        } else if (gameId == "5150983") {
            adType += "_Android";
            if (Advertisement.IsReady())
            {
                ShowOptions options = new ShowOptions { resultCallback = ResultInterstitialAds };
                Advertisement.Show(adType, options);
            }
        }
    }

    void ResultInterstitialAds(ShowResult result) {
        switch (result) {
            case ShowResult.Failed:
                Debug.LogError("광고 보기에 실패했습니다.");
                break;
            case ShowResult.Skipped:
                Grid.Playerlife = 0;
                gameOverPopup.RetryPopupDeactive();
                Debug.Log("광고를 스킵했습니다.");
                break;
            case ShowResult.Finished:
                Grid.Playerlife = 0;
                gameOverPopup.RetryPopupDeactive();
                Debug.Log("광고 보기를 완료했습니다.");
                break;
        }
    }
}
