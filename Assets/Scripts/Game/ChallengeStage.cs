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
    public List<int> TargetActivateJewel = new List<int>();
    public List<int> TargetActivateJewelCount = new List<int>();

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
            case 13:
                ChallengeStage13();
                break;
            case 14:
                ChallengeStage14();
                break;
            case 15:
                ChallengeStage15();
                break;
            case 16:
                ChallengeStage16();
                break;
            case 17:
                ChallengeStage17();
                break;
            case 18:
                ChallengeStage18();
                break;
            case 19:
                ChallengeStage19();
                break;
            case 20:
                ChallengeStage20();
                break;
            case 21:
                ChallengeStage21();
                break;
            case 22:
                ChallengeStage22();
                break;
            case 23:
                ChallengeStage23();
                break;
            case 24:
                ChallengeStage24();
                break;
            case 25:
                ChallengeStage25();
                break;
            case 26:
                ChallengeStage26();
                break;
            case 27:
                ChallengeStage27();
                break;
            case 28:
                ChallengeStage28();
                break;
            case 29:
                ChallengeStage29();
                break;
            case 30:
                ChallengeStage30();
                break;
            case 31:
                ChallengeStage31();
                break;
            case 32:
                ChallengeStage32();
                break;
            case 33:
                ChallengeStage33();
                break;
            case 34:
                ChallengeStage34();
                break;
            case 35:
                ChallengeStage35();
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

    private void ChallengeStage13()
    {
        Grid.startStage = 13;
        TargetScore = 300;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage14()
    {
        Grid.startStage = 14;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3};
        int[] activateSquareList = new int[] { 20, 21, 22, 23, 24, 25, 26, 27, 36, 37, 38, 39, 40, 41, 42, 43 };
        int[] activateJewel = new int[] { 2, 3 };
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

    private void ChallengeStage15()
    {
        Grid.startStage = 15;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 4, 4, 2, 2 };
        int[] activateSquareList = new int[] { 11, 12, 24, 31 };
        int[] activateJewel = new int[] { 2, 4 };
        int[] activateJewelCount = new int[] { 11, 11 };

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

    private void ChallengeStage16()
    {
        Grid.startStage = 16;
        TargetScore = 400;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage17()
    {
        Grid.startStage = 17;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 4, 4, 4, 4, 4, 4, 3, 3 };
        int[] activateSquareList = new int[] { 8, 14, 17, 21, 25, 29, 57, 61 };
        int[] activateJewel = new int[] { 4, 3 };
        int[] activateJewelCount = new int[] { 14, 12 };

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

    private void ChallengeStage18()
    {
        Grid.startStage = 18;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 5, 5, 5, 5, 5, 5, 2, 2, 2, 2 };
        int[] activateSquareList = new int[] { 0, 1, 6, 7, 8, 15, 50, 53, 56, 63 };
        int[] activateJewel = new int[] { 5, 2 };
        int[] activateJewelCount = new int[] { 14, 14 };

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

    private void ChallengeStage19()
    {
        Grid.startStage = 19;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0 };
        int[] activateSquareList = new int[] { 11, 12, 16, 17, 18, 21, 22, 24, 32, 33, 34, 37, 38, 39, 43, 44 };
        int[] activateJewel = new int[] { 1, 3 };
        int[] activateJewelCount = new int[] { 16, 16 };

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

    private void ChallengeStage20()
    {
        Grid.startStage = 20;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 3, 3, 3, 3, 0, 0, 0, 0, 4, 4, 4, 4 };
        int[] activateSquareList = new int[] { 10, 11, 12, 13, 26, 27, 28, 29, 42, 43, 44, 45 };
        int[] activateJewel = new int[] { 3, 0, 4 };
        int[] activateJewelCount = new int[] { 8, 8, 8 };

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

    private void ChallengeStage21()
    {
        Grid.startStage = 21;
        TargetScore = 450;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage22()
    {
        Grid.startStage = 22;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 5, 5, 2, 2, 5, 5, 2, 2, 0, 0, 3, 3, 0, 0, 3, 3 };
        int[] activateSquareList = new int[] { 0, 1, 6, 7, 8, 9, 14, 15, 48, 49, 54, 55, 56, 57, 62, 63 };
        int[] activateJewel = new int[] { 5, 2, 0, 3 };
        int[] activateJewelCount = new int[] { 8, 8, 8, 8 };

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

    private void ChallengeStage23()
    {
        Grid.startStage = 23;
        TargetScore = 550;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage24()
    {
        //목표 보석하고 목표 보석 갯수가 없어 임의삽입
        Grid.startStage = 24;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 1, 2, 5, 5, 1, 2, 5, 5, 1, 2 };
        int[] activateSquareList = new int[] { 10, 13, 17, 22, 26, 29, 33, 38, 42, 45 };
        int[] activateJewel = new int[] { 1, 2, 5 };
        int[] activateJewelCount = new int[] { 10, 10, 12 };

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

    private void ChallengeStage25()
    {
        Grid.startStage = 25;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3 };
        int[] activateSquareList = new int[] { 16, 18, 21, 23, 25, 30, 34, 37, 41, 43, 44, 46 };
        int[] activateJewel = new int[] { 3, 5 };
        int[] activateJewelCount = new int[] { 20, 20 };

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

    private void ChallengeStage26()
    {
        Grid.startStage = 26;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
        int[] activateSquareList = new int[] { 9, 10, 13, 14, 17, 22, 41, 46, 49, 50, 53, 54 };
        int[] activateJewel = new int[] { 2 };
        int[] activateJewelCount = new int[] { 42 };

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

    private void ChallengeStage27()
    {
        Grid.startStage = 27;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 3, 3, 3, 3, 2, 2, 2, 2, 3, 3, 3, 3 };
        int[] activateSquareList = new int[] { 1, 2, 5, 6, 27, 28, 35, 36, 57, 58, 61, 62 };
        int[] activateJewel = new int[] { 3, 2 };
        int[] activateJewelCount = new int[] { 23, 23 };

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

    private void ChallengeStage28()
    {
        Grid.startStage = 28;
        TargetScore = 700;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage29()
    {
        Grid.startStage = 29;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 3, 3, 2, 1, 2, 1, 5, 5 };
        int[] activateSquareList = new int[] { 11, 12, 25, 30, 33, 38, 51, 52 };
        int[] activateJewel = new int[] { 3, 2, 1, 5 };
        int[] activateJewelCount = new int[] { 14, 14, 14, 14 };

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

    private void ChallengeStage30()
    {
        Grid.startStage = 30;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1 };
        int[] activateSquareList = new int[] { 3, 4, 5, 21, 22, 23, 40, 41, 42, 58, 59, 60 };
        int[] activateJewel = new int[] { 2, 1 };
        int[] activateJewelCount = new int[] { 27, 27 };

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

    private void ChallengeStage31()
    {
        Grid.startStage = 31;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 0, 0, 4, 4, 4, 4, 3, 3 };
        int[] activateSquareList = new int[] { 10, 13, 33, 34, 37, 38, 59, 60 };
        int[] activateJewel = new int[] { 0, 4, 3 };
        int[] activateJewelCount = new int[] { 20, 20, 20 };

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

    private void ChallengeStage32()
    {
        Grid.startStage = 32;
        TargetScore = 800;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage33()
    {
        Grid.startStage = 33;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
        int[] activateSquareList = new int[] { 10, 13, 17, 19, 20, 22, 25, 30, 33, 38, 42, 45, 51, 52 };
        int[] activateJewel = new int[] { 2 };
        int[] activateJewelCount = new int[] { 55 };

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

    private void ChallengeStage34()
    {
        Grid.startStage = 34;
        TargetScore = 1000;
        challengemode = "Scoremode";
        ScoreWindow.gameObject.SetActive(true);
        UpdateTargetScoreText();
    }

    private void ChallengeStage35()
    {
        Grid.startStage = 35;
        challengemode = "Jewelmode";
        JewelWindow.gameObject.SetActive(true);

        int[] activateSquareTexturesList = new int[] { 5, 5, 2, 2, 5, 5, 2, 2, 2, 2, 5, 5, 2, 2, 5, 5 };
        int[] activateSquareList = new int[] { 9, 10, 13, 14, 17, 18, 21, 22, 41, 42, 45, 46, 49, 50, 53, 54 };
        int[] activateJewel = new int[] { 5, 2 };
        int[] activateJewelCount = new int[] { 33, 33 };

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
