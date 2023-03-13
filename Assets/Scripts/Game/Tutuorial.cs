using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutuorial : MonoBehaviour
{
    public Grid grid;

    public void tutuorial1()
    {
        Grid.gamemode = "tutorial1";
        closeGrid(20, 28, 36, 44);

        for (int i = 16; i < 48; i++)
        {
            if (i == 20 || i == 28 || i == 36 || i == 44)
            {
                continue;
            }

            grid.transform.GetChild(i).GetComponent<GridSquare>().ActivateSquare();
            grid.transform.GetChild(i).GetComponent<GridSquare>().transform.GetChild(2).GetComponent<Image>().sprite = grid.squareTextureData.activeSquareTextures[0].texture;
        }
    }

    public void tutuorial2()
    {
        Grid.gamemode = "tutorial2";
        closeGrid(34, 35, 36, 37);

        for (int i = 2; i < 6; i++) {
            for (int j = i; j < 62; j += 8)
            {
                if (j == 34 || j == 35 || j == 36 || j == 37)
                {
                    continue;
                }

                grid.transform.GetChild(j).GetComponent<GridSquare>().ActivateSquare();
                grid.transform.GetChild(j).GetComponent<GridSquare>().transform.GetChild(2).GetComponent<Image>().sprite = grid.squareTextureData.activeSquareTextures[1].texture;
            }
        }
    }

    public void tutuorial3()
    {
        Grid.gamemode = "tutorial3";
        closeGrid(27, 28, 35, 36);

        for (int i = 24; i < 40; i++)
        {
            if (i == 27 || i == 28 || i == 35 || i == 36)
            {
                continue;
            }

            grid.transform.GetChild(i).GetComponent<GridSquare>().ActivateSquare();
            grid.transform.GetChild(i).GetComponent<GridSquare>().transform.GetChild(2).GetComponent<Image>().sprite = grid.squareTextureData.activeSquareTextures[2].texture;
        }

        for (int i = 3; i < 5; i++) {
            for (int j = i; j < 62; j += 8)
            {
                if (j == 27 || j == 28 || j == 35 || j == 36)
                {
                    continue;
                }

                grid.transform.GetChild(j).GetComponent<GridSquare>().ActivateSquare();
                grid.transform.GetChild(j).GetComponent<GridSquare>().transform.GetChild(2).GetComponent<Image>().sprite = grid.squareTextureData.activeSquareTextures[3].texture;
            }
        }
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
