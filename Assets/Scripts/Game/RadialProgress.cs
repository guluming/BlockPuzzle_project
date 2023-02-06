using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RadialProgress : MonoBehaviour
{
    public Text ProgressIndicator;
    public Image LoadingBar;
    float currentValue;
    float currentValuetext = 5f;
    public float speed;

    private void OnEnable()
    {
        Update();
    }

    void Update()
    {
        if (currentValue < 5)
        {
            currentValue += Time.deltaTime;
            currentValuetext -= Time.deltaTime;
            ProgressIndicator.text = ((int)currentValuetext).ToString();
        }
        else {

            ProgressIndicator.text = "end";
        }

        LoadingBar.fillAmount = currentValue / 5;
    }
}
