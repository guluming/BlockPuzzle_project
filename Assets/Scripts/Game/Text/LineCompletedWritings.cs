using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LineCompletedWritings : MonoBehaviour
{
    public List<GameObject> Linewritings;

    private int childIndex;

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

    private void ShowTwoLineCompletedWritings()
    {
        childIndex = 0;
        Linewritings[0].SetActive(true);
        Invoke("DeactivateWritings", 1.5f);
    }

    private void ShowThreeLineCompletedWritings()
    {
        childIndex = 1;
        Linewritings[1].SetActive(true);
        Invoke("DeactivateWritings", 1.5f);
    }

    private void ShowFourLineCompletedWritings()
    {
        childIndex = 2;
        Linewritings[2].SetActive(true);
        Invoke("DeactivateWritings", 1.5f);
    }

    private void DeactivateWritings()
    {
        gameObject.transform.GetChild(childIndex).gameObject.SetActive(false);
    }
}
