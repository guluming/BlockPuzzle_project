using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SfxSource : MonoBehaviour
{
    public AudioSource sfxAudioSource;
    public AudioClip blockDownSfx;
    public AudioClip blockCompletedSfx;

    private void OnEnable()
    {
        GameEvents.blockDown += blockDown;
        GameEvents.blockCompleted += blockCompleted;
    }

    private void OnDisable()
    {
        GameEvents.blockDown -= blockDown;
        GameEvents.blockCompleted -= blockCompleted;
    }

    public void blockDown()
    {
        sfxAudioSource.PlayOneShot(blockDownSfx);
    }

    public void blockCompleted()
    {
        sfxAudioSource.PlayOneShot(blockCompletedSfx);
    }
}
