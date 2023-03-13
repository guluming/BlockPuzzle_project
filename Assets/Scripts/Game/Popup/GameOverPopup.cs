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
        grid.playerSaveGame_.saveGameOver = true;
        string playerSaveGameData = JsonUtility.ToJson(grid.playerSaveGame_);
        BinaryDataStream.Save<string>(playerSaveGameData, playerSaveGamekey);
        NewBestScore.SetActive(true);
    }

    public void GameOverActive()
    {
        adsManager.ShowInterstitial();
        grid.playerSaveGame_.saveGameOver = true;
        string playerSaveGameData = JsonUtility.ToJson(grid.playerSaveGame_);
        BinaryDataStream.Save<string>(playerSaveGameData, playerSaveGamekey);
        MaintainScore.SetActive(true);
    }

    public void SuccessPopupActive()
    {
        if (Grid.startStage / 2 == 0 || Grid.startStage > 10)
        {
            adsManager.ShowInterstitial();
        }

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
        if (Grid.startStage / 2 == 0 || Grid.startStage > 10)
        {
            adsManager.ShowInterstitial();
        }

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
        for (int i = 0; i < 57; i += 8)
        {
            for (int k = i; k < i + 8; k++)
            {
                grid.transform.GetChild(k).transform.GetChild(2).gameObject.GetComponent<Image>().sprite = gameoverimg;
            }

            yield return new WaitForSeconds(0.25f);
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
