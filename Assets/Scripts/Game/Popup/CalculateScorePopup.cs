using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CalculateScorePopup : MonoBehaviour
{
    public Scores scores;
    public Text scoreText;
    public Text bestScoreText;

    private void OnEnable()
    {
        UpdateScoreText();
        UpdateBestScoreText();
    }

    private void UpdateScoreText()
    {
        scoreText.text = scores.currentScores_.ToString();
    }

    private void UpdateBestScoreText()
    {
        bestScoreText.text = scores.bestScores_.score.ToString();
    }
}
