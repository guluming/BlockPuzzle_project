using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CongratulationWritings : MonoBehaviour
{
    public List<GameObject> writings;

    void Start()
    {
        GameEvents.ShowCongratulationWritings += ShowCongratulationWritings;
    }

    private void OnDisable()
    {
        GameEvents.ShowCongratulationWritings -= ShowCongratulationWritings;
    }

    private void ShowCongratulationWritings(int completedLines)
    {
        switch(completedLines) {
            case 1:
                ShowOneCongratulationWritings();
                break;
            case 2:
                ShowTwoCongratulationWritings();
                break;
            case 3:
                ShowThreeCongratulationWritings();
                break;
        }

        if (completedLines >= 4) {
            ShowFourmoreCongratulationWritings();
        }
    }

    private void ShowOneCongratulationWritings()
    {
        writings[3].SetActive(true);
    }

    private void ShowTwoCongratulationWritings()
    {
        writings[0].SetActive(true);
    }

    private void ShowThreeCongratulationWritings()
    {
        writings[1].SetActive(true);
    }

    private void ShowFourmoreCongratulationWritings()
    {
        writings[2].SetActive(true);
    }

    
}
