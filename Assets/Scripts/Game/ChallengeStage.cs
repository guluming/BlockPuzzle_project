using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChallengeStage : MonoBehaviour
{
    public GameObject ScoreWindow;
    public GameObject JewelWindow;
    public GameObject ScorecompleteCheck;
    public GameObject JewelcompleteCheck;

    public Grid grid;
    public Text TargetScoreText;
    public Scores scores;
    public Jewels jewels;
    public JewelSquareTextureData jewelSquareTextureData;
    public List<int> TargetActivateJewel;
    public List<int> TargetActivateJewelCount;

    [HideInInspector]
    public int TargetScore;

    public static string challengemode = "Jewelmode";
    public void ChallengeStageSelete(int stageIndex)
    {
        switch (stageIndex) {
            case 1:
                ChallengeStage1();
                break;
            case 2:
                ChallengeStage2();
                break;
            case 3:
                ChallengeStage3();
                break;
            case 4:
                ChallengeStage4();
                break;
            case 5:
                ChallengeStage5();
                break;
            case 6:
                ChallengeStage6();
                break;
            case 7:
                ChallengeStage7();
                break;
            case 8:
                ChallengeStage8();
                break;
            case 9:
                ChallengeStage9();
                break;
            case 10:
                ChallengeStage10();
                break;
            case 11:
                ChallengeStage11();
                break;
            case 12:
                ChallengeStage12();
                break;
        }
    }

    private void ChallengeStage1()
    {
        Grid.startStage = 1;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 2, 2 };
        int[] activateSquareList = new int[] { 10, 13 };
        int[] activateJewel = new int[] { 2 };
        int[] activateJewelCount = new int[] { 3 };

        for (int i = 0; i < activateJewel.Length; i++) 
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i = 0; i < activateSquareTexturesList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void ChallengeStage2()
    {
        Grid.startStage = 2;
        TargetScore = 100;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage3()
    {
        Grid.startStage = 3;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 2, 2, 3, 3 };
        int[] activateSquareList = new int[] { 11, 12, 19, 20 };
        int[] activateJewel = new int[] { 2, 3 };
        int[] activateJewelCount = new int[] { 2, 2 };

        for (int i = 0; i < activateJewel.Length; i++)
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i =0; i < activateSquareTexturesList.Length; i++) 
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void ChallengeStage4()
    {
        Grid.startStage = 4;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 1, 0, 1, 0 };
        int[] activateSquareList = new int[] { 11, 12, 19, 20 };
        int[] activateJewel = new int[] { 1, 0 };
        int[] activateJewelCount = new int[] { 2, 2 };

        for (int i = 0; i < activateJewel.Length; i++)
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i = 0; i < activateSquareTexturesList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void ChallengeStage5()
    {
        Grid.startStage = 5;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 2, 3, 0, 0, 3, 2 };
        int[] activateSquareList = new int[] { 24, 25, 26, 29, 30, 31 };
        int[] activateJewel = new int[] { 2, 3, 0 };
        int[] activateJewelCount = new int[] { 4, 4, 2 };

        for (int i = 0; i < activateJewel.Length; i++)
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i = 0; i < activateSquareTexturesList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void ChallengeStage6()
    {
        Grid.startStage = 6;
        TargetScore = 200;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage7()
    {
        Grid.startStage = 7;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
        int[] activateSquareList = new int[] { 18, 19, 20, 21, 26, 29, 34, 35,36, 37 };
        int[] activateJewel = new int[] { 4 };
        int[] activateJewelCount = new int[] { 10 };

        for (int i = 0; i < activateJewel.Length; i++)
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i = 0; i < activateSquareTexturesList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void ChallengeStage8()
    {
        Grid.startStage = 8;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 1, 1, 5, 4, 5, 4, 3, 3 };
        int[] activateSquareList = new int[] { 19, 20, 26, 29, 34, 37, 43, 44 };
        int[] activateJewel = new int[] { 1, 3, 5, 4 };
        int[] activateJewelCount = new int[] { 3, 3, 3, 3 };

        for (int i = 0; i < activateJewel.Length; i++)
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i = 0; i < activateSquareTexturesList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void ChallengeStage9()
    {
        Grid.startStage = 9;
        TargetScore = 250;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage10()
    {
        Grid.startStage = 10;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 5, 0, 5, 0, 5, 0 };
        int[] activateSquareList = new int[] { 9, 14, 18, 21, 27, 28 };
        int[] activateJewel = new int[] { 5, 0 };
        int[] activateJewelCount = new int[] { 3, 3 };

        for (int i = 0; i < activateJewel.Length; i++)
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i = 0; i < activateSquareTexturesList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void ChallengeStage11()
    {
        Grid.startStage = 11;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 3, 3, 2, 2, 2, 2, 3, 2, 2, 3 };
        int[] activateSquareList = new int[] { 2, 5, 10, 13, 18, 21, 24, 25, 30, 31 };
        int[] activateJewel = new int[] { 2, 3 };
        int[] activateJewelCount = new int[] { 12, 8 };

        for (int i = 0; i < activateJewel.Length; i++)
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i = 0; i < activateSquareTexturesList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void ChallengeStage12()
    {
        Grid.startStage = 12;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 3, 3, 3, 4, 4, 4, 3, 4, 3, 4, 3, 3, 3, 4, 4, 4 };
        int[] activateSquareList = new int[] { 0, 1, 2, 5, 6, 7, 8, 15, 48, 55, 56, 57, 58, 61, 62, 63 };
        int[] activateJewel = new int[] { 3, 4 };
        int[] activateJewelCount = new int[] { 10, 10 };

        for (int i = 0; i < activateJewel.Length; i++)
        {
            jewels.jewels[activateJewel[i]].SetActive(true);
            jewels.jewelsCount[activateJewel[i]].GetComponent<Text>().text = activateJewelCount[i].ToString();

            TargetActivateJewel.Add(activateJewel[i]);
            TargetActivateJewelCount.Add(activateJewelCount[i]);
        }

        for (int i = 0; i < activateSquareTexturesList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).transform.GetChild(2).GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[activateSquareTexturesList[i]].texture;
        }

        for (int i = 0; i < activateSquareList.Length; i++)
        {
            grid.transform.GetChild(activateSquareList[i]).GetComponent<GridSquare>().ActivateSquare();
        }
    }

    private void UpdateTargetScoreText()
    {
        TargetScoreText.text = TargetScore.ToString();
    }
}
