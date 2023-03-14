using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveJewelImageSelector : MonoBehaviour
{
    public JewelSquareTextureData jewelSquareTextureData;
    public ChallengeStage ChallengeStage;

    private void OnEnable()
    {
        ChallengeStage = GameObject.Find("ChallengeStage").GetComponent<ChallengeStage>();
        UpdateJewelSquareBaseOnCurrentPoints();
    }

    private void UpdateJewelSquareBaseOnCurrentPoints()
    {
        int temp = Random.Range(0, ChallengeStage.TargetActivateJewel.Count);
        
        for (int i = 0; i < ChallengeStage.TargetActivateJewel.Count; i++)
        {
            if (i == temp)
            {
                GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[ChallengeStage.TargetActivateJewel[i]].texture;
            }
        }
    }
}
