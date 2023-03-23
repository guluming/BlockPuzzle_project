using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class BestScoreData
{
    public int score = 0;
}

public class Scores : MonoBehaviour
{
    public SquareTextureData SquareTextureData;
    public Grid grid;
    public Text scoreText;

    //private bool newBestScore_ = false;

    [HideInInspector]
    public int currentScores_;
    public BestScoreData bestScores_ = new BestScoreData();

    private bool bestScoreCheck;
    private string playerSaveGamekey = "playerSaveGame";
    private string playerSaveChallengeGamekey = "playerSaveChallengeGame";
    private string bestScoreKey_ = "blockpuzzlescore";

    private void Awake()
    {
        bestScoreCheck = true;
        if (Grid.gamemode == "ClassicGame")
        {
            if (BinaryDataStream.Exist(bestScoreKey_))
            {
                StartCoroutine(ReadDataFile());
            }
        }
    }

    private IEnumerator ReadDataFile()
    {
        bestScores_ = BinaryDataStream.Read<BestScoreData>(bestScoreKey_);
        yield return new WaitForEndOfFrame();
        GameEvents.UpdateBestScoreBar(currentScores_, bestScores_.score);
    }

    void Start()
    {
        if (Grid.gamemode == "ClassicGame")
        {
            if (BinaryDataStream.Exist(playerSaveGamekey))
            {
                string jsonPlayerSaveGame_ = BinaryDataStream.Read<string>(playerSaveGamekey);
                grid.playerSaveGame_ = JsonUtility.FromJson<playerClassicGameData>(jsonPlayerSaveGame_);
                if (!grid.playerSaveGame_.saveGameOver)
                {
                    currentScores_ = grid.playerSaveGame_.saveScore;
                }
                else
                {
                    currentScores_ = 0;
                }
            }
            else
            {
                currentScores_ = 0;
            }
        } else if (Grid.gamemode == "ChallengeGame") 
        {
            if (BinaryDataStream.Exist(playerSaveChallengeGamekey))
            {
                string jsonPlayerSaveGame_ = BinaryDataStream.Read<string>(playerSaveChallengeGamekey);
                grid.playerSaveChallengeGame_ = JsonUtility.FromJson<playerChallengeGameData>(jsonPlayerSaveGame_);
                if (!grid.playerSaveChallengeGame_.ChallengesaveGameOver)
                {
                    currentScores_ = grid.playerSaveChallengeGame_.ChallengesaveScore;
                }
                else
                {
                    currentScores_ = 0;
                }
            }
            else
            {
                currentScores_ = 0;
            }
        }
        
        SquareTextureData.SetStartColor();
        UpdateScoreText();
    }

    private void OnEnable()
    {
        GameEvents.AddScores += AddScores;
        GameEvents.GameOver += SaveBestScores;
    }

    private void OnDisable()
    {
        GameEvents.AddScores -= AddScores;
        GameEvents.GameOver -= SaveBestScores;
    }

    public void SaveBestScores()
    {
        BinaryDataStream.Save<BestScoreData>(bestScores_, bestScoreKey_);
    }

    private void AddScores(int scores)
    {
        if (Grid.gamemode == "ClassicGame")
        {
            currentScores_ += scores;
            if (currentScores_ > bestScores_.score)
            {
                if (bestScoreCheck) 
                {
                    GameEvents.blockNewBestScore();
                }
                bestScoreCheck = false;
                bestScores_.score = currentScores_;
                SaveBestScores();
            }

            GameEvents.UpdateBestScoreBar(currentScores_, bestScores_.score);
            UpdateScoreText();
        } else if (Grid.gamemode == "ChallengeGame" && ChallengeStage.challengemode == "Scoremode") 
        {
            currentScores_ += scores;
            UpdateScoreText();
        }
        
    }

    private void UpdateScoreText()
    {
        scoreText.text = currentScores_.ToString();
    }
}
