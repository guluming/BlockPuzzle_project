using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridWall : MonoBehaviour
{
    public Grid grid;

    private bool OnTriggerState = false;

    private void Update()
    {
        if (OnTriggerState)
        {
            grid.AllGridSquareHooverImageOff();
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "block") 
        {
            OnTriggerState = true;
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.tag == "block")
        {
            OnTriggerState = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "block")
        {
            OnTriggerState = false;
        }
    }
}
