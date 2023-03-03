using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ViewPagerToggle : MonoBehaviour
{
    public List<Toggle> toggles;
    /*public Toggle Level1;
    public Toggle Level2;
    public Toggle Level3;
    public Toggle Level4;
    public Toggle Level5;
    public Toggle Level6;
    public Toggle Level7;*/

    void Start()
    {
        toggles[0].isOn = true;
    }

    public void OnSwipeUI() 
    {
    
    }

    private void CheckTogglesIsOn() 
    {
        
    }
}
