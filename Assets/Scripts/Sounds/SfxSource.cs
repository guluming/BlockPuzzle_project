using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SfxSource : MonoBehaviour
{
    public AudioSource sfxAudioSource;
    public AudioClip blockDownSfx;
    public AudioClip blockSeSuccessActiveSfx;
    public AudioClip blockFailureActiveSfx;
    public AudioClip blockCreateSfx;
    public AudioClip blockCompletedSfx;
    public AudioClip block2CompletedSfx;
    public AudioClip block3CompletedSfx;
    public AudioClip block4CompletedSfx;
    public AudioClip block5CompletedMoreSfx;
    public AudioClip blockGameoverSfx;
    public AudioClip blockClassicGameSfx;
    public AudioClip blockresurrectionCountSfx;
    public AudioClip blockNewBestScoreSfx;
    public AudioClip blockChallengeGameSfx;

    private void OnEnable()
    {
        GameEvents.blockDown += blockDown;
        GameEvents.blockSeSuccessActive += blockSeSuccessActive;
        GameEvents.blockFailureActive += blockFailureActive;
        GameEvents.blockCreate += blockCreate;
        GameEvents.blockCompleted += blockCompleted;
        GameEvents.block2Completed += block2Completed;
        GameEvents.block3Completed += block3Completed;
        GameEvents.block4Completed += block4Completed;
        GameEvents.block5CompletedMore += block5CompletedMore;
        GameEvents.blockGameover += blockGameover;
        GameEvents.blockClassicGame += blockClassicGame;
        GameEvents.blockresurrectionCount += blockresurrectionCount;
        GameEvents.blockNewBestScore += blockNewBestScore;
        GameEvents.blockChallengeGame += blockChallengeGame;
    }

    private void OnDisable()
    {
        GameEvents.blockDown -= blockDown;
        GameEvents.blockSeSuccessActive -= blockSeSuccessActive;
        GameEvents.blockFailureActive -= blockFailureActive;
        GameEvents.blockCreate -= blockCreate;
        GameEvents.blockCompleted -= blockCompleted;
        GameEvents.block2Completed -= block2Completed;
        GameEvents.block3Completed -= block3Completed;
        GameEvents.block4Completed -= block4Completed;
        GameEvents.block5CompletedMore -= block5CompletedMore;
        GameEvents.blockGameover -= blockGameover;
        GameEvents.blockClassicGame -= blockClassicGame;
        GameEvents.blockresurrectionCount -= blockresurrectionCount;
        GameEvents.blockNewBestScore -= blockNewBestScore;
        GameEvents.blockChallengeGame -= blockChallengeGame;
    }

    public void blockDown()
    {
        sfxAudioSource.PlayOneShot(blockDownSfx);
    }

    public void blockSeSuccessActive()
    {
        sfxAudioSource.PlayOneShot(blockSeSuccessActiveSfx);
    }

    public void blockFailureActive()
    {
        sfxAudioSource.PlayOneShot(blockFailureActiveSfx);
    }

    public void blockCreate()
    {
        sfxAudioSource.PlayOneShot(blockCreateSfx);
    }

    public void blockCompleted()
    {
        sfxAudioSource.PlayOneShot(blockCompletedSfx);
    }

    public void block2Completed()
    {
        sfxAudioSource.PlayOneShot(block2CompletedSfx);
    }

    public void block3Completed()
    {
        sfxAudioSource.PlayOneShot(block3CompletedSfx);
    }

    public void block4Completed()
    {
        sfxAudioSource.PlayOneShot(block4CompletedSfx);
    }

    public void block5CompletedMore()
    {
        sfxAudioSource.PlayOneShot(block5CompletedMoreSfx);
    }

    public void blockGameover()
    {
        sfxAudioSource.PlayOneShot(blockGameoverSfx);
    }

    public void blockClassicGame()
    {
        sfxAudioSource.PlayOneShot(blockClassicGameSfx);
    }

    public void blockresurrectionCount()
    {
        sfxAudioSource.PlayOneShot(blockresurrectionCountSfx);
    }

    public void blockNewBestScore()
    {
        sfxAudioSource.PlayOneShot(blockNewBestScoreSfx);
    }

    public void blockChallengeGame()
    {
        sfxAudioSource.PlayOneShot(blockChallengeGameSfx);
    }
}
