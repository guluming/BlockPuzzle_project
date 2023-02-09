using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioManager : MonoBehaviour
{
    public GameObject bgmSource;
    public GameObject sfxSource;

    private void Update()
    {
        bgmSource.SetActive(SwitchToggle.bgmsetting);
    }
}
