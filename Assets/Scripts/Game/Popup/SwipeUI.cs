using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwipeUI : MonoBehaviour
{
    public List<GameObject> stageCheck;
    public Text stagePlay;

    [SerializeField]
    private Scrollbar scrollbar;
    [SerializeField]
    private Transform[] circleContents;
    [SerializeField]
    private float swipeTime = 0.2f;
    [SerializeField]
    private float swipeDistance = 50.0f;

    private float[] scrollPageValues;
    private float valueDistance = 0;
    private int currentPage = 0;
    private int maxPage = 0;
    private float startTouchX;
    private float endTouchX;
    private bool isSwipeMode = false;
    private float circleContentScale = 2.0f;
    private string playerSaveChallengeGamekey = "playerSaveChallengeGame";

    [HideInInspector]
    public playerChallengeGameData playerSaveChallengeGame_ = new playerChallengeGameData();

    private void Awake()
    {
        scrollPageValues = new float[transform.childCount];
        valueDistance = 1f / (scrollPageValues.Length - 1f);

        for (int i =0; i<scrollPageValues.Length; ++ i) 
        {
            scrollPageValues[i] = valueDistance * i;
        }

        maxPage = transform.childCount;
    }

    private void Start()
    {
        if (BinaryDataStream.Exist(playerSaveChallengeGamekey))
        {
            Debug.Log("도전 모드 저장 파일이 있습니다.");

            string jsonPlayerSaveChallengeGame_ = BinaryDataStream.Read<string>(playerSaveChallengeGamekey);
            playerSaveChallengeGame_ = JsonUtility.FromJson<playerChallengeGameData>(jsonPlayerSaveChallengeGame_);

            ChallengeStage.challengemode = SetChallengeStagemode(playerSaveChallengeGame_.ChallengestartStage);

            for (int i=0; i < playerSaveChallengeGame_.ChallengestartStage - 1; i++) 
            {
                stageCheck[i].transform.GetChild(2).gameObject.SetActive(true);
            }

            stageCheck[playerSaveChallengeGame_.ChallengestartStage - 1].transform.GetChild(1).gameObject.SetActive(true);
            SetScrollBarValue((playerSaveChallengeGame_.ChallengestartStage - 1) / 5);

            if (playerSaveChallengeGame_.ChallengestartStage >= 36)
            {
                stagePlay.text = "All Clear";
            } 
            else
            {
                stagePlay.text = "LEVEL. " + (((playerSaveChallengeGame_.ChallengestartStage - 1) / 5) + 1) + "-" + (playerSaveChallengeGame_.ChallengestartStage % 5);
            }
        }
        else
        {
            Debug.Log("저장 파일이 없습니다.");
            ChallengeStage.challengemode = "Jewelmode";
            stageCheck[0].transform.GetChild(1).gameObject.SetActive(true);
            SetScrollBarValue(0);
        }
    }

    private string SetChallengeStagemode(int stage)
    {
        string stagemode = "";
        switch (stage)
        {
            case 1:
                stagemode = "Jewelmode";
                break;
            case 2:
                stagemode = "Scoremode";
                break;
            case 3:
                stagemode = "Jewelmode";
                break;
            case 4:
                stagemode = "Jewelmode";
                break;
            case 5:
                stagemode = "Jewelmode";
                break;
            case 6:
                stagemode = "Scoremode";
                break;
            case 7:
                stagemode = "Jewelmode";
                break;
            case 8:
                stagemode = "Jewelmode";
                break;
            case 9:
                stagemode = "Scoremode";
                break;
            case 10:
                stagemode = "Jewelmode";
                break;
            case 11:
                stagemode = "Jewelmode";
                break;
            case 12:
                stagemode = "Jewelmode";
                break;
            case 13:
                stagemode = "Scoremode";
                break;
            case 14:
                stagemode = "Jewelmode";
                break;
            case 15:
                stagemode = "Jewelmode";
                break;
            case 16:
                stagemode = "Scoremode";
                break;
            case 17:
                stagemode = "Jewelmode";
                break;
            case 18:
                stagemode = "Jewelmode";
                break;
            case 19:
                stagemode = "Jewelmode";
                break;
            case 20:
                stagemode = "Jewelmode";
                break;
            case 21:
                stagemode = "Scoremode";
                break;
            case 22:
                stagemode = "Jewelmode";
                break;
            case 23:
                stagemode = "Scoremode";
                break;
            case 24:
                stagemode = "Jewelmode";
                break;
            case 25:
                stagemode = "Jewelmode";
                break;
            case 26:
                stagemode = "Jewelmode";
                break;
            case 27:
                stagemode = "Jewelmode";
                break;
            case 28:
                stagemode = "Scoremode";
                break;
            case 29:
                stagemode = "Jewelmode";
                break;
            case 30:
                stagemode = "Jewelmode";
                break;
            case 31:
                stagemode = "Jewelmode";
                break;
            case 32:
                stagemode = "Scoremode";
                break;
            case 33:
                stagemode = "Scoremode";
                break;
            case 34:
                stagemode = "Scoremode";
                break;
            case 35:
                stagemode = "Jewelmode";
                break;
        }

        return stagemode;
    }

    public void SetScrollBarValue(int index) 
    {
        currentPage = index;
        scrollbar.value = scrollPageValues[index];
    }

    private void Update()
    {
        UpdateInput();

        UpdateCircleContent();
    }

    private void UpdateInput()
    {
        if (isSwipeMode == true)
        {
            return;
        }

        if (Input.GetMouseButtonDown(0))
        {
            startTouchX = Input.mousePosition.x;
        }
        else if (Input.GetMouseButtonUp(0))
        {
            endTouchX = Input.mousePosition.x;

            UpdateSwipe();
        }

        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                startTouchX = touch.position.x;
            }
            else if (touch.phase == TouchPhase.Ended)
            {
                endTouchX = touch.position.x;

                UpdateSwipe();
            }
        }
    }

    private void UpdateSwipe()
    {
        if (Mathf.Abs(startTouchX-endTouchX) < swipeDistance) 
        {
            StartCoroutine(OnSwipeOneStep(currentPage));
            return;
        }

        bool isLeft = startTouchX < endTouchX ? true : false;

        if (isLeft)
        {
            if (currentPage == 0)
            {
                return;
            }

            currentPage--;
        }
        else 
        {
            if (currentPage == maxPage - 1) 
            {
                return;
            }

            currentPage++;
        }

        StartCoroutine(OnSwipeOneStep(currentPage));
    }

    private IEnumerator OnSwipeOneStep(int index) 
    {
        float start = scrollbar.value;
        float current = 0;
        float percent = 0;

        isSwipeMode = true;

        while (percent < 1) 
        {
            current += Time.deltaTime;
            percent = current / swipeTime;

            scrollbar.value = Mathf.Lerp(start, scrollPageValues[index], percent);

            yield return null;
        }

        isSwipeMode = false;
    }

    private void UpdateCircleContent() 
    {
        for (int i = 0; i < scrollPageValues.Length; ++ i) 
        {
            circleContents[i].localScale = Vector2.one/2;
            /*circleContents[i].GetComponent<Image>().color = Color.white;*/

            if (scrollbar.value < scrollPageValues[i] + (valueDistance / 2) &&
                scrollbar.value > scrollPageValues[i] - (valueDistance / 2)) 
            {
                circleContents[i].localScale = (Vector2.one/2) * circleContentScale;
            }
        }
    }
}
