using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEvents : MonoBehaviour
{
    public static Action GameOver;

    public static Action<int> AddScores;

    public static Action CheckIfShapeCanBePlaced;

    public static Action MoveShapeToStartPosition;

    public static Action RequestNewShapes;

    public static Action SetShapeInactive;

    public static Action<int, int> UpdateBestScoreBar;

    public static Action<Config.SquareColor> UpdateSquareColor;

    public static Action<Config.jewelSquare> UpdateJewelSquare;

    public static Action ShowAllLineCompletedWritings;

    public static Action<int> ShowLineCompletedWritings;

    public static Action blockDown;

    public static Action blockSeSuccessActive;

    public static Action blockFailureActive;

    public static Action blockCreate;

    public static Action blockCompleted;

    public static Action block2Completed;

    public static Action block3Completed;

    public static Action block4Completed;

    public static Action block5CompletedMore;

    public static Action blockGameover;

    public static Action blockClassicGame;

    public static Action blockresurrectionCount;

    public static Action blockNewBestScore;

    public static Action blockChallengeGame;
}
