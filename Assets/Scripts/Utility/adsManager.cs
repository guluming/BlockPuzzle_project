using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class adsManager : MonoBehaviour
{
    public GameOverPopup gameOverPopup;
    public static adsManager I;

    string adType;
    string gameId;

    private void Awake()
    {
        I = this;

        if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            adType = "Rewarded_iOS";
            gameId = "5150982";
        }
        else {
            adType = "Rewarded_Android";
            gameId = "5150983";
        }

        Advertisement.Initialize(gameId, true);
    }

    public void ShowRewardAd() {
        if (Advertisement.IsReady()) {
            ShowOptions options = new ShowOptions { resultCallback = ResultAds };
            Advertisement.Show(adType, options);
        }
    }

    public void ShowAd()
    {
        if (Advertisement.IsReady())
        {
            Advertisement.Show("Interstitial_Android");
        }
    }

    void ResultAds(ShowResult result) {
        switch (result) {
            case ShowResult.Failed:
                Debug.LogError("광고 보기에 실패했습니다.");
                break;
            case ShowResult.Skipped:
                Debug.LogError("광고를 스킵했습니다.");
                break;
            case ShowResult.Finished:
                Grid.Playerlife = 0;
                gameOverPopup.RetryPopupDeactive();
                Debug.LogError("광고 보기를 완료했습니다.");
                break;
        }
    }
}
