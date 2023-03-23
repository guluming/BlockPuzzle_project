using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuccessPopup : MonoBehaviour
{
    public GameOverPopup GameOverPopup;
    void Update()
    {
        /*if (Input.GetMouseButtonDown(0))
        {
            gameObject.SetActive(false);
            GameOverPopup.SuccessPopupActive();
            Debug.Log("터치 했다");
        }*/

        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                gameObject.SetActive(false);
                GameOverPopup.SuccessPopupActive();
            }
        }
    }

    private void OnEnable()
    {
        StartCoroutine(SuccessPopupDiactive());
    }

    IEnumerator SuccessPopupDiactive()
    {
        yield return new WaitForSeconds(2.0f);

        gameObject.SetActive(false);
        GameOverPopup.SuccessPopupActive();
    }
}
