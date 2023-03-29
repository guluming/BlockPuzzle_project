using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverPopup : MonoBehaviour
{
    public GameObject RetryPopup;
    public GameObject NewBestScore;
    public GameObject MaintainScore;
    public GameObject SuccessPopup;
    public GameObject FailurePopup;

    public GameObject TargetScorePopup;
    public GameObject TargetJewelPopup;

    public GameObject FailureScorePopup;
    public GameObject FailureJewelPopup;

    public Grid grid;
    public Scores score;
    public ChallengeStage challengeStage;
    public Text TargetScore;
    public Text FailureScore;
    public Sprite gameoverimg;
    public List<GameObject> FailureJewelcompleted;
    public List<Text> FailureJewelCount;
    public ShapeStorage shapeStorage;
    public AdsManager adsManager;

    private string playerSaveGamekey = "playerSaveGame";
    private string playerSaveChallengeGamekey = "playerSaveChallengeGame";

    void Start()
    {
        RetryPopup.SetActive(false);
        NewBestScore.SetActive(false);
        MaintainScore.SetActive(false);
        SuccessPopup.SetActive(false);
        FailurePopup.SetActive(false);
    }

    public void RetryPopupActive()
    {
        RetryPopup.SetActive(true);
    }

    public void NewBestScoreActive()
    {
        adsManager.ShowInterstitial();

        classicGameLogEvent();

        GameEvents.blockClassicGame();
        grid.playerSaveGame_.saveGameOver = true;
        string playerSaveGameData = JsonUtility.ToJson(grid.playerSaveGame_);
        BinaryDataStream.Save<string>(playerSaveGameData, playerSaveGamekey);
        NewBestScore.SetActive(true);
    }

    public void GameOverActive()
    {
        adsManager.ShowInterstitial();

        classicGameLogEvent();

        GameEvents.blockClassicGame();
        grid.playerSaveGame_.saveGameOver = true;
        string playerSaveGameData = JsonUtility.ToJson(grid.playerSaveGame_);
        BinaryDataStream.Save<string>(playerSaveGameData, playerSaveGamekey);
        MaintainScore.SetActive(true);
    }

    private void classicGameLogEvent() 
    {
        if (score.currentScores_ >= 300 && score.currentScores_ <= 499)
        {
            SingularSDK.Event("classic_complete_300");
            Firebase.Analytics.FirebaseAnalytics.LogEvent("classic_complete_300");
        }
        else if (score.currentScores_ >= 500 && score.currentScores_ <= 699)
        {
            SingularSDK.Event("classic_complete_500");
            Firebase.Analytics.FirebaseAnalytics.LogEvent("classic_complete_500");
        }
        else if (score.currentScores_ >= 700 && score.currentScores_ <= 999)
        {
            SingularSDK.Event("classic_complete_700");
            Firebase.Analytics.FirebaseAnalytics.LogEvent("classic_complete_700");
        }
        else if (score.currentScores_ >= 1000 && score.currentScores_ <= 1399)
        {
            SingularSDK.Event("classic_complete_1000");
            Firebase.Analytics.FirebaseAnalytics.LogEvent("classic_complete_1000");
        }
        else if (score.currentScores_ >= 1400 && score.currentScores_ <= 1999)
        {
            SingularSDK.Event("classic_complete_1400");
            Firebase.Analytics.FirebaseAnalytics.LogEvent("classic_complete_1400");
        }
        else if (score.currentScores_ >= 2000)
        {
            SingularSDK.Event("classic_complete_2000");
            Firebase.Analytics.FirebaseAnalytics.LogEvent("classic_complete_2000");
        }
    }

    public void SuccessPopupActive()
    {
        if (Grid.thisStage >= 4)
        {
            adsManager.ShowInterstitial();
        }

        SingularSDK.Event("challenge_complete", "set", ((Grid.thisStage - 1) / 5) + 1, "stage", Grid.thisStage);
        Firebase.Analytics.Parameter[] challenge_completeParameters = {
            new Firebase.Analytics.Parameter("set", ((Grid.thisStage - 1) / 5) + 1),
            new Firebase.Analytics.Parameter("stage", Grid.thisStage)
        };
        Firebase.Analytics.FirebaseAnalytics.LogEvent("challenge_complete", challenge_completeParameters);

        GameEvents.blockChallengeGame();

        if (ChallengeStage.challengemode == "Scoremode")
        {
            TargetScore.text = challengeStage.TargetScore.ToString();
            TargetScorePopup.SetActive(true);
        }
        else
        {
            for (int i=0; i<challengeStage.TargetActivateJewel.Count; i++)
            {
                TargetJewelPopup.transform.GetChild(challengeStage.TargetActivateJewel[i]).gameObject.SetActive(true);
            }

            TargetJewelPopup.SetActive(true);
        }

        grid.playerSaveChallengeGame_.ChallengesaveGameOver = true;
        grid.playerSaveChallengeGame_.ChallengestartStage = Grid.startStage;
        string playerSaveGameData = JsonUtility.ToJson(grid.playerSaveChallengeGame_);
        BinaryDataStream.Save<string>(playerSaveGameData, playerSaveChallengeGamekey);
        SuccessPopup.SetActive(true);
    }

    public void FailurePopupPopupActive()
    {
        if (Grid.thisStage >= 4)
        {
            adsManager.ShowInterstitial();
        }

        SingularSDK.Event("challenge_complete", "set", ((Grid.thisStage - 1) / 5) + 1, "stage", Grid.thisStage);
        Firebase.Analytics.Parameter[] challenge_completeParameters = {
            new Firebase.Analytics.Parameter("set", ((Grid.thisStage - 1) / 5) + 1),
            new Firebase.Analytics.Parameter("stage", Grid.thisStage)
        };
        Firebase.Analytics.FirebaseAnalytics.LogEvent("challenge_complete", challenge_completeParameters);

        GameEvents.blockClassicGame();

        if (ChallengeStage.challengemode == "Scoremode")
        {
            FailureScore.text = grid.score.currentScores_.ToString();
            FailureScorePopup.SetActive(true);
        }
        else
        {
            for (int i = 0; i < challengeStage.TargetActivateJewel.Count; i++)
            {
                FailureJewelPopup.transform.GetChild(challengeStage.TargetActivateJewel[i]).gameObject.SetActive(true);
                if (challengeStage.TargetActivateJewelCount[i] <= 0)
                {
                    FailureJewelCount[challengeStage.TargetActivateJewel[i]].gameObject.SetActive(false);
                    FailureJewelcompleted[challengeStage.TargetActivateJewel[i]].gameObject.SetActive(true);
                }
                else
                {
                    FailureJewelCount[challengeStage.TargetActivateJewel[i]].text = challengeStage.TargetActivateJewelCount[i].ToString();
                }
            }
            FailureJewelPopup.SetActive(true);
        }

        grid.playerSaveChallengeGame_.ChallengesaveGameOver = true;
        grid.playerSaveChallengeGame_.ChallengestartStage = Grid.startStage;
        string playerSaveGameData = JsonUtility.ToJson(grid.playerSaveChallengeGame_);
        BinaryDataStream.Save<string>(playerSaveGameData, playerSaveChallengeGamekey);
        FailurePopup.SetActive(true);
    }

    public void RetryPopupDeactive()
    {
        shapeStorage.resurrectionNewShapes();
        RetryPopup.SetActive(false);
    }

    public void RetryPopupDeactiveAndNewBestScoreActive()
    {
        RetryPopup.SetActive(false);
        StartCoroutine(GameOverAin(1));
    }

    public void RetryPopupDeactiveAndGameOverActive()
    { 
        RetryPopup.SetActive(false);
        StartCoroutine(GameOverAin(0));
    }

    IEnumerator GameOverAin(int index)
    {
        grid.playerSaveGame_.saveGameOver = true;
        GameEvents.blockGameover();

        for (int i = 0; i < 57; i += 8)
        {
            for (int k = i; k < i + 8; k++)
            {
                grid.transform.GetChild(k).transform.GetChild(2).gameObject.GetComponent<Image>().sprite = gameoverimg;
            }

            yield return new WaitForSeconds(0.075f);
        }

        if (index == 0)
        {
            GameOverActive();
        }
        else
        {
            NewBestScoreActive();
        }
    }
}
