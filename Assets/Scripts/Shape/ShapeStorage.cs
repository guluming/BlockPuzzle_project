using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeStorage : MonoBehaviour
{
    /*
     * 블록 난이도
     * 기본 : 10개 1 ~ 10 (index 기준 0 ~ 9)
     * 중간 : 2개 11 ~ 12 (index 기준 10 ~ 11)
     * 하드 : 5개 13 ~ 17 (index 기준 13 ~ 17)
     */
    public List<ShapeData> shapeData;
    public List<Shape> shapeList;
    public GameObject Shapes;
    public SquareTextureData SquareTextureData;
    public JewelSquareTextureData jewelSquareTextureData;
    public Grid grid;
    public Scores scores;
    public GameObject ComboObject;

    private string playerSaveGamekey = "playerSaveGame";
    private string playerSaveChallengeGamekey = "playerSaveChallengeGame";

    public static bool isCombo;
    public static int ComboCount;

    public int[] TwoRotationSquare = new int[]
    {
         1,2, 3,4, 5,6, 8,9, 18,19, 28,29, 31,32, 41,42
    };

    public int[] FourRotationSquare = new int[]
    {
        10,11,12,13, 14,15,16,17, 20,21,22,23, 24,25,26,27, 33,34,35,36, 37,38,39,40
    };

    public int[] firstShapeExistChallengeGame = new int[]
    {
        7, 11, 12, 14, 15, 18, 19, 22, 24, 25, 30, 33, 35
    };

    public List<int> firstShapeExistChallengeGameList = new List<int>();

    private void OnEnable()
    {
        GameEvents.RequestNewShapes += RequestNewShapes;
    }

    private void OnDisable()
    {
        GameEvents.RequestNewShapes -= RequestNewShapes;
    }

    void Start()
    {
        firstShapeExistChallengeGameList = new List<int>(firstShapeExistChallengeGame);
        if (Grid.gamemode == "ClassicGame")
        {
            if (BinaryDataStream.Exist(playerSaveGamekey))
            {
                string jsonPlayerSaveGame_ = BinaryDataStream.Read<string>(playerSaveGamekey);
                grid.playerSaveGame_ = JsonUtility.FromJson<playerClassicGameData>(jsonPlayerSaveGame_);

                if (!grid.playerSaveGame_.saveGameOver)
                {
                    LoadShapes();
                }
                else
                {
                    firstShapes();
                }
            }
            else
            {
                tutorialShapes();
            }
        }
        else if (Grid.gamemode == "ChallengeGame")
        {
            if (BinaryDataStream.Exist(playerSaveChallengeGamekey))
            {
                string jsonPlayerSaveGame_ = BinaryDataStream.Read<string>(playerSaveChallengeGamekey);
                grid.playerSaveChallengeGame_ = JsonUtility.FromJson<playerChallengeGameData>(jsonPlayerSaveGame_);

                if (!grid.playerSaveChallengeGame_.ChallengesaveGameOver)
                {
                    LoadChallengeShapes();
                }
                else if (grid.playerSaveChallengeGame_.ChallengesaveGameOver && firstShapeExistChallengeGameList.Contains(grid.playerSaveChallengeGame_.ChallengestartStage))
                {
                    firstChallengeShapesShapesSeleted(grid.playerSaveChallengeGame_.ChallengestartStage);
                }
                else
                {
                    firstShapes();
                }
            }
            else
            {
                firstShapes();
            }
        }
    }

    private void firstChallengeShapesShapesSeleted(int ChallengeGameStage)
    {
        switch (ChallengeGameStage)
        {
            case 7:
                ChallengeGamefirstShapes7();
                break;
            case 11:
                ChallengeGamefirstShapes11();
                break;
            case 12:
                ChallengeGamefirstShapes12();
                break;
            case 14:
                ChallengeGamefirstShapes14();
                break;
            case 15:
                ChallengeGamefirstShapes15();
                break;
            case 18:
                ChallengeGamefirstShapes18();
                break;
            case 19:
                ChallengeGamefirstShapes19();
                break;
            case 22:
                ChallengeGamefirstShapes22();
                break;
            case 24:
                ChallengeGamefirstShapes24();
                break;
            case 25:
                ChallengeGamefirstShapes25();
                break;
            case 30:
                ChallengeGamefirstShapes30();
                break;
            case 33:
                ChallengeGamefirstShapes33();
                break;
            case 35:
                ChallengeGamefirstShapes35();
                break;
        }
    }

    private void ChallengeGamefirstShapes7()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 1;
                shapeList[i].firstCreateShape(shapeData[1]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes11()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 32;
                shapeList[i].firstCreateShape(shapeData[32]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 32;
                shapeList[i].firstCreateShape(shapeData[32]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 32;
                shapeList[i].firstCreateShape(shapeData[32]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes12()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 7;
                shapeList[i].firstCreateShape(shapeData[7]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 7;
                shapeList[i].firstCreateShape(shapeData[7]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes14()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 5;
                shapeList[i].firstCreateShape(shapeData[5]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 5;
                shapeList[i].firstCreateShape(shapeData[5]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes15()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 19;
                shapeList[i].firstCreateShape(shapeData[19]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 9;
                shapeList[i].firstCreateShape(shapeData[9]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes18()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 8;
                shapeList[i].firstCreateShape(shapeData[8]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 18;
                shapeList[i].firstCreateShape(shapeData[18]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 7;
                shapeList[i].firstCreateShape(shapeData[7]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes19()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 32;
                shapeList[i].firstCreateShape(shapeData[32]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes22()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 5;
                shapeList[i].firstCreateShape(shapeData[5]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 5;
                shapeList[i].firstCreateShape(shapeData[5]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes24()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 20;
                shapeList[i].firstCreateShape(shapeData[20]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 22;
                shapeList[i].firstCreateShape(shapeData[22]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes25()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 20;
                shapeList[i].firstCreateShape(shapeData[20]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 22;
                shapeList[i].firstCreateShape(shapeData[22]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 1;
                shapeList[i].firstCreateShape(shapeData[1]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes30()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 28;
                shapeList[i].firstCreateShape(shapeData[28]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 28;
                shapeList[i].firstCreateShape(shapeData[28]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes33()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 10;
                shapeList[i].firstCreateShape(shapeData[10]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 13;
                shapeList[i].firstCreateShape(shapeData[13]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 7;
                shapeList[i].firstCreateShape(shapeData[7]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    private void ChallengeGamefirstShapes35()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        ChallengeShapeIndexSeleted(shapeIndexList);
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (i == 0)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 7;
                shapeList[i].firstCreateShape(shapeData[7]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else if (i == 1)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = 7;
                shapeList[i].firstCreateShape(shapeData[7]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            else
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
        }
        grid.saveChallengeGame();
    }

    public void tutorialShapes()
    {
        if (Grid.gamemode == "tutorial1")
        {
            shapeList[0].CreateShape(shapeData[0]);
            shapeList[1].CreateShape(shapeData[6]);
            shapeList[2].CreateShape(shapeData[0]);

            for (int i = 0; i < Shapes.transform.GetChild(0).transform.childCount; i++)
            {
                Shapes.transform.GetChild(0).transform.GetChild(i).gameObject.SetActive(false);
                Shapes.transform.GetChild(2).transform.GetChild(i).gameObject.SetActive(false);
            }

            UpdateSquareColor();
        }
        else if (Grid.gamemode == "tutorial2")
        {
            shapeList[0].RequestNewShape(shapeData[0]);
            shapeList[1].RequestNewShape(shapeData[5]);
            shapeList[2].RequestNewShape(shapeData[0]);

            for (int i = 0; i < Shapes.transform.GetChild(0).transform.childCount; i++)
            {
                Shapes.transform.GetChild(0).transform.GetChild(i).gameObject.SetActive(false);
                Shapes.transform.GetChild(2).transform.GetChild(i).gameObject.SetActive(false);
            }

            UpdateSquareColor();
        }
        else if (Grid.gamemode == "tutorial3")
        {
            shapeList[0].RequestNewShape(shapeData[0]);
            shapeList[1].RequestNewShape(shapeData[7]);
            shapeList[2].RequestNewShape(shapeData[0]);

            for (int i = 0; i < Shapes.transform.GetChild(0).transform.childCount; i++)
            {
                Shapes.transform.GetChild(0).transform.GetChild(i).gameObject.SetActive(false);
                Shapes.transform.GetChild(2).transform.GetChild(i).gameObject.SetActive(false);
            }

            UpdateSquareColor();
        }
    }

    private void firstShapes()
    {
        isCombo = false;
        ComboCount = 0;
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        if (Grid.gamemode == "ClassicGame")
        {
            ShapeIndexSeleted(shapeIndexList);
            for (int i = 0; i < shapeList.Count; i++)
            {
                grid.playerSaveGame_.shapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
            }

            grid.saveGame();
        }
        else
        {
            ChallengeShapeIndexSeleted(shapeIndexList);
            for (int i = 0; i < shapeList.Count; i++)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].firstCreateShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }

            grid.saveChallengeGame();
        }
    }

    private void LoadShapes()
    {
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (grid.playerSaveGame_.shapeDataIndexList[i] == -1)
            {
                shapeList[i].RequestNewShape(shapeData[0]);
                Shapes.transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(false);
            }
            else
            {
                shapeList[i].RequestNewShape(shapeData[grid.playerSaveGame_.shapeDataIndexList[i]]);
                UpdateSquareColor();
            }
        }

        grid.CheckIfPlayLost();
    }

    private void LoadChallengeShapes()
    {
        for (int i = 0; i < shapeList.Count; i++)
        {
            if (grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] == -1)
            {
                shapeList[i].firstCreateShape(shapeData[0]);
                Shapes.transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(false);
            }
            else
            {
                shapeList[i].firstCreateShape(shapeData[grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i]]);
                UpdateSquareColor();
                /*UpdateJewelSquare();*/
            }
        }

        grid.CheckIfPlayLost();
    }

    private void RequestNewShapes()
    {
        if (!isCombo)
        {
            ComboCount = 0;
        }
        else
        {
            isCombo = false;
        }
        IsComboObject();

        List<int> shapeIndexList = new List<int>();

        if (Grid.gamemode == "ClassicGame")
        {
            ShapeIndexSeleted(shapeIndexList);
            for (int i = 0; i < shapeList.Count; i++)
            {
                grid.playerSaveGame_.shapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].RequestNewShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
            }
            //Debug.Log("기본 저장");
            grid.saveGame();
        }
        else if (Grid.gamemode == "ChallengeGame" && ChallengeStage.challengemode == "Jewelmode")
        {
            ChallengeShapeIndexSeleted(shapeIndexList);
            for (int i = 0; i < shapeList.Count; i++)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].RequestNewShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
                UpdateJewelSquare();
            }
            //Debug.Log("도전 저장");
            grid.saveChallengeGame();
        }
        else if (Grid.gamemode == "ChallengeGame")
        {
            ChallengeShapeIndexSeleted(shapeIndexList);
            for (int i = 0; i < shapeList.Count; i++)
            {
                grid.playerSaveChallengeGame_.ChallengeshapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].RequestNewShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
            }
            //Debug.Log("도전 저장");
            grid.saveChallengeGame();
        }
        else
        {
            ShapeIndexSeleted(shapeIndexList);
            for (int i = 0; i < shapeList.Count; i++)
            {
                grid.playerSaveGame_.shapeDataIndexList[i] = shapeIndexList[i];
                shapeList[i].RequestNewShape(shapeData[shapeIndexList[i]]);
                UpdateSquareColor();
            }
            //Debug.Log("기본 저장");
            grid.saveGame();
        }

        if (Grid.gamemode != "tutorial1" && Grid.gamemode != "tutorial2" && Grid.gamemode != "tutorial3")
        {
            grid.CheckIfPlayLost();
        }
    }

    public void resurrectionNewShapes()
    {
        if (!isCombo)
        {
            ComboCount = 0;
        }
        else
        {
            isCombo = false;
        }
        IsComboObject();

        for (int i = 0; i < shapeList.Count; i++)
        {
            grid.playerSaveGame_.shapeDataIndexList[i] = 0;
            shapeList[i].RequestNewShape(shapeData[0]);
            UpdateSquareColor();
            UpdateJewelSquare();
        }

        grid.CheckIfPlayLost();
    }

    private void ChallengeShapeIndexSeleted(List<int> shapeIndexList)
    {
        while (shapeIndexList.Count <= 3)
        {
            int shapeIndex = 0;
            shapeIndex = UnityEngine.Random.Range(0, 33);

            if (!shapeIndexList.Contains(shapeIndex))
            {
                if (Array.Exists(TwoRotationSquare, i => i == shapeIndex))
                {
                    int temp = Array.IndexOf(TwoRotationSquare, shapeIndex);

                    if (temp % 2 == 0)
                    {
                        if (!shapeIndexList.Contains(TwoRotationSquare[temp + 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 2 == 1)
                    {
                        if (!shapeIndexList.Contains(TwoRotationSquare[temp - 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                }
                else if (Array.Exists(FourRotationSquare, i => i == shapeIndex))
                {
                    int temp = Array.IndexOf(FourRotationSquare, shapeIndex);

                    if (temp % 4 == 0)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp + 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 2]) && !shapeIndexList.Contains(FourRotationSquare[temp + 3]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 1)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 2]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 2)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 2]) && !shapeIndexList.Contains(FourRotationSquare[temp - 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 3)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 3]) && !shapeIndexList.Contains(FourRotationSquare[temp - 2]) && !shapeIndexList.Contains(FourRotationSquare[temp - 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                }
                else
                {
                    shapeIndexList.Add(shapeIndex);
                }
            }
        }
    }

    private void ShapeIndexSeleted(List<int> shapeIndexList)
    {
        bool normalShape = false;
        bool hardShape = false;
        while (shapeIndexList.Count <= 3)
        {
            int shapeIndex = 0;

            int activeGridSpuare = 0;
            for (int i = 0; i < grid.transform.childCount; i++)
            {
                if (grid.transform.GetChild(i).transform.GetChild(2).gameObject.activeSelf)
                {
                    activeGridSpuare++;
                }
            }

            if (Grid.gamemode == "ClassicGame")
            {
                if (scores.currentScores_ >= 1500)
                {
                    if (normalShape && hardShape)
                    {
                        shapeIndex = UnityEngine.Random.Range(0, 24);
                    }
                    else if (!normalShape && hardShape)
                    {
                        if (activeGridSpuare >= 32)
                        {
                            //보통 제외
                            shapeIndex = UnityEngine.Random.Range(0, 24);
                        }
                        else
                        {
                            shapeIndex = UnityEngine.Random.Range(0, 33);
                        }
                    }
                    else if (normalShape && !hardShape)
                    {
                        if (UnityEngine.Random.Range(0, 2) == 0)
                        {
                            shapeIndex = UnityEngine.Random.Range(0, 24);
                        }
                        else
                        {
                            shapeIndex = UnityEngine.Random.Range(33, shapeData.Count);
                        }
                    }
                    else
                    {
                        if (activeGridSpuare >= 19)
                        {
                            //어려움 제외
                            shapeIndex = UnityEngine.Random.Range(0, 33);
                        }
                        else if (activeGridSpuare >= 32)
                        {
                            //보통 제외
                            shapeIndex = UnityEngine.Random.Range(0, 24);
                        }
                        else
                        {
                            shapeIndex = UnityEngine.Random.Range(0, shapeData.Count);
                        }
                    }
                }
                else
                {
                    if (normalShape)
                    {
                        shapeIndex = UnityEngine.Random.Range(0, 24);
                    }
                    else
                    {
                        if (activeGridSpuare >= 32)
                        {
                            //보통 제외
                            shapeIndex = UnityEngine.Random.Range(0, 24);
                        }
                        else
                        {
                            shapeIndex = UnityEngine.Random.Range(0, 33);
                        }
                    }
                }
            }

            if (Grid.gamemode == "ChallengeGame")
            {
                if (normalShape)
                {
                    shapeIndex = UnityEngine.Random.Range(0, 24);
                }
                else
                {
                    if (activeGridSpuare >= 32)
                    {
                        //보통 제외
                        shapeIndex = UnityEngine.Random.Range(0, 24);
                    }
                    else
                    {
                        shapeIndex = UnityEngine.Random.Range(0, 33);
                    }
                }
            }

            if (shapeIndex >= 24 && shapeIndex <= 32)
            {
                normalShape = true;
            }

            if (shapeIndex >= 33 && shapeIndex <= shapeData.Count - 1)
            {
                hardShape = true;
            }

            if (!shapeIndexList.Contains(shapeIndex))
            {
                if (Array.Exists(TwoRotationSquare, i => i == shapeIndex))
                {
                    int temp = Array.IndexOf(TwoRotationSquare, shapeIndex);

                    if (temp % 2 == 0)
                    {
                        if (!shapeIndexList.Contains(TwoRotationSquare[temp + 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 2 == 1)
                    {
                        if (!shapeIndexList.Contains(TwoRotationSquare[temp - 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                }
                else if (Array.Exists(FourRotationSquare, i => i == shapeIndex))
                {
                    int temp = Array.IndexOf(FourRotationSquare, shapeIndex);

                    if (temp % 4 == 0)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp + 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 2]) && !shapeIndexList.Contains(FourRotationSquare[temp + 3]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 1)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 2]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 2)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 2]) && !shapeIndexList.Contains(FourRotationSquare[temp - 1]) && !shapeIndexList.Contains(FourRotationSquare[temp + 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                    else if (temp % 4 == 3)
                    {
                        if (!shapeIndexList.Contains(FourRotationSquare[temp - 3]) && !shapeIndexList.Contains(FourRotationSquare[temp - 2]) && !shapeIndexList.Contains(FourRotationSquare[temp - 1]))
                        {
                            shapeIndexList.Add(shapeIndex);
                        }
                    }
                }
                else
                {
                    shapeIndexList.Add(shapeIndex);
                }
            }

        }
    }

    public void IsComboObject()
    {
        if (ComboCount > 0)
        {
            ComboObject.SetActive(true);
        }
        else
        {
            ComboObject.SetActive(false);
        }
    }

    public Shape GetCurrentSelectedShape()
    {
        foreach (var shape in shapeList)
        {
            if (shape.IsOnStartPosition() == false && shape.IsAnyOfShapeSqaureActive())
            {
                return shape;
            }
        }

        /*Debug.LogError("There is no shape selected");*/
        return null;
    }

    public bool IsShapeStorageEmpty()
    {
        foreach (var shape in shapeList)
        {
            if (shape.IsAnyOfShapeSqaureActive())
            {
                return false;
            }
        }
        return true;
    }

    public void UpdateSquareColor()
    {
        if (GameEvents.UpdateSquareColor != null)
        {
            SquareTextureData.UpdateColors();
        }
    }

    public void UpdateJewelSquare()
    {
        if (GameEvents.UpdateJewelSquare != null)
        {
            jewelSquareTextureData.UpdateJewels();
        }
    }
}
