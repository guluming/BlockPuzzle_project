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
        if (ChallengeStage.challengemode == "Scoremode")
        {
            TargetScore.text = challengeStage.TargetScore.ToString();
            TargetScorePopup.SetActive(true);
        }
        else
        {
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
        if (ChallengeStage.challengemode == "Scoremode")
        {
            FailureScore.text = grid.score.currentScores_.ToString();
            FailureScorePopup.SetActive(true);
        }
        else
        {
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
}
