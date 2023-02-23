using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOverPopup : MonoBehaviour
{
    public GameObject RetryPopup;
    public GameObject NewBestScore;
    public GameObject MaintainScore;

    public Grid grid;
    public ShapeStorage shapeStorage;
    public AdsManager adsManager;

    private string playerSaveGamekey = "playerSaveGame";

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

    public void RetryPopupDeactive()
    {
        shapeStorage.resurrectionNewShapes();
        RetryPopup.SetActive(false);
    }
}
