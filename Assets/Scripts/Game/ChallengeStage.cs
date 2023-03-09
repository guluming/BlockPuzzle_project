using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChallengeStage : MonoBehaviour
{
    public Grid grid;
    public GameObject ScoreWindow;
    public GameObject JewelWindow;
    public GameObject ScorecompleteCheck;
    public GameObject JewelcompleteCheck;
    public Text TargetScoreText;
    public Scores scores;
    public Jewels jewels;

    [HideInInspector]
    public int TargetScore;

    public static string challengemode;

    public void ChallengeStageSelete(int stageIndex)
    {
        switch (stageIndex) {
            case 1:
                ChallengeStage1();
                break;
            case 2:
                ChallengeStage2();
                break;
        }
    }

    private void ChallengeStage1() 
    {
        Grid.startStage = 1;
        TargetScore = 100;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
        //grid.transform.GetChild(0).GetComponent<GridSquare>().ActivateSquare();
    }

    private void ChallengeStage2()
    {
        Grid.startStage = 2;
        TargetScore = 300;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
        //grid.transform.GetChild(0).GetComponent<GridSquare>().ActivateSquare();
    }

    private void ChallengeStage3()
    {
        Grid.startStage = 3;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);
        //grid.transform.GetChild(0).GetComponent<GridSquare>().ActivateSquare();
    }

    private void UpdateTargetScoreText()
    {
        TargetScoreText.text = TargetScore.ToString();
    }

    private void closeGrid(int a, int b, int c, int d)
    {
        for (int i = 0; i < 64; i++)
        {
            if (i == a || i == b || i == c || i == d)
            {
                continue;
            }

            grid.transform.GetChild(i).GetComponent<GridSquare>().Selected = false;
            grid.transform.GetChild(i).GetComponent<GridSquare>().SquareOccupied = true;
        }
    }
}
