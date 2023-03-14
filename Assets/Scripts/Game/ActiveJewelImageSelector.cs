using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveJewelImageSelector : MonoBehaviour
{
    public JewelSquareTextureData jewelSquareTextureData;
    public ChallengeStage ChallengeStage;

    private List<int> TargetActivateJewelTexture = new List<int>();

    private void OnEnable()
    {
        ChallengeStage = GameObject.Find("ChallengeStage").GetComponent<ChallengeStage>();
        TargetActivateJewelTexture = new List<int>(ChallengeStage.TargetActivateJewel);
        UpdateJewelSquareBaseOnCurrentPoints();
    }

    private void UpdateJewelSquareBaseOnCurrentPoints()
    {
        for (int i=0; i< ChallengeStage.TargetActivateJewelCount.Count; i++)
        {
            if (ChallengeStage.TargetActivateJewelCount[i] <= 0)
            {
                TargetActivateJewelTexture.Remove(ChallengeStage.TargetActivateJewel[i]);
            }
        }

        int temp = Random.Range(0, TargetActivateJewelTexture.Count);
        
        for (int i = 0; i < TargetActivateJewelTexture.Count; i++)
        {
            if (i == temp)
            {
                GetComponent<Image>().sprite = jewelSquareTextureData.activeJewelSquareTextures[TargetActivateJewelTexture[i]].texture;
            }
        }
    }
}
