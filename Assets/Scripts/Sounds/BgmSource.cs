using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BgmSource : MonoBehaviour
{
    public AudioSource bgmAudioSource;

    private void OnEnable()
    {
        bgmAudioSource.Play();
    }
}
