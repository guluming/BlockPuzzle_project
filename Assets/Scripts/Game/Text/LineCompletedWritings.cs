using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LineCompletedWritings : MonoBehaviour
{
    public List<GameObject> Linewritings;

    void Start()
    {
        GameEvents.ShowLineCompletedWritings += ShowLineCompletedWritings;
    }

    private void OnDisable()
    {
        GameEvents.ShowLineCompletedWritings -= ShowLineCompletedWritings;
    }

    private void ShowLineCompletedWritings(int completedLines)
    {
        //switch(completedLines) {
        //    case 1:
        //        ShowOneLineCompletedWritings();
        //        break;
        //    case 2:
        //        ShowTwoLineCompletedWritings();
        //        break;
        //    case 3:
        //        ShowThreeLineCompletedWritings();
        //        break;
        //}

        if (completedLines == 2)
        {
            ShowTwoLineCompletedWritings();
        }

        if (completedLines == 3)
        {
            ShowThreeLineCompletedWritings();
        }

        if (completedLines >= 4) {
            ShowFourLineCompletedWritings();
        }
    }

    //private void ShowOneLineCompletedWritings()
    //{
    //    writings[3].SetActive(true);
    //}

    private void ShowTwoLineCompletedWritings()
    {
        Linewritings[0].SetActive(true);
        Invoke("DeactivateWritings", 1.5f);
    }

    private void ShowThreeLineCompletedWritings()
    {
        Linewritings[1].SetActive(true);
        Invoke("DeactivateWritings", 1.5f);
    }

    private void ShowFourLineCompletedWritings()
    {
        Linewritings[2].SetActive(true);
        Invoke("DeactivateWritings", 1.5f);
    }

    private void DeactivateWritings()
    {
        gameObject.SetActive(false);
    }
}
