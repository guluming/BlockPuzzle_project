using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartPopup : MonoBehaviour
{
    void Update()
    {
        /*if (Input.GetMouseButtonDown(0))
        {
            gameObject.SetActive(false);
        }*/

        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                gameObject.SetActive(false);
            }
        }
    }

    private void OnEnable()
    {
        StartCoroutine(StartPopupDiactive());
    }

    IEnumerator StartPopupDiactive()
    {
        yield return new WaitForSeconds(2.0f);

        gameObject.SetActive(false);
    }
}
