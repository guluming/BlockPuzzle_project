using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InGamePopup : MonoBehaviour
{
    public GameObject StartPopup;
    public GameObject TargetScore;
    public GameObject TargetJewel;
    public List<GameObject> TargetJewelList = new List<GameObject>();
    public List<Text> TargetJewelCountList = new List<Text>();

    public GameObject SuccessPopup;
    public GameObject SuccessScore;
    public GameObject SuccessJewel;
    public List<GameObject> SuccessJewelList = new List<GameObject>();

    public ChallengeStage challengeStage;

    private void Start()
    {
        StartPopup.SetActive(true);

        if (ChallengeStage.challengemode == "Jewelmode")
        {
            for (int i=0; i<challengeStage.TargetActivateJewel.Count; i++)
            {
                TargetJewelList[challengeStage.TargetActivateJewel[i]].SetActive(true);
                TargetJewelCountList[challengeStage.TargetActivateJewel[i]].text = challengeStage.TargetActivateJewelCount[i].ToString();
            }
            TargetJewel.SetActive(true);
        }
        else
        {
            TargetScore.GetComponent<Text>().text = challengeStage.TargetScore.ToString();
            TargetScore.SetActive(true);
        }
    }

    public void SuccessPopupActive() 
    {
        SuccessPopup.SetActive(true);

        if (ChallengeStage.challengemode == "Jewelmode")
        {
            for (int i = 0; i < challengeStage.TargetActivateJewel.Count; i++)
            {
                SuccessJewelList[challengeStage.TargetActivateJewel[i]].SetActive(true);
            }
            SuccessJewel.SetActive(true);
        }
        else
        {
            SuccessScore.GetComponent<Text>().text = challengeStage.TargetScore.ToString();
            SuccessScore.SetActive(true);
        }
    }
}
