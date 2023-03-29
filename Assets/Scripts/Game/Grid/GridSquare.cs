using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GridSquare : MonoBehaviour
{
    public AnimationCurve curve;
    public Grid grid;
    public Image hooverImage;
    public Image ActiveImage;
    public Image normalImage;
    public List<Sprite> normalImages;

    private Vector3 startScale = new Vector3(1.0f, 1.0f, 1.0f);
    private Config.SquareColor currentSquareColor_ = Config.SquareColor.NotSet;

    public Config.SquareColor GetCurrentColor()
    {
        return currentSquareColor_;
    }

    public bool Selected { get; set; }
    public int SquareIndex { get; set; }
    public bool SquareOccupied { get; set; }
    
    void Awake()
    {
        Selected = false;
        SquareOccupied = false;
        grid = GameObject.Find("Grid").GetComponent<Grid>();
    }

    public bool CanWeUseThisSquare()
    {
        return hooverImage.gameObject.activeSelf;
    }

    public void PlaceShapeOnBoard(Config.SquareColor color)
    {
        ActivateSquare();
    }

    public void ActivateSquare()
    {
        hooverImage.gameObject.SetActive(false);
        ActiveImage.gameObject.SetActive(true);
        Selected = true;
        SquareOccupied = true;
    }

    public void Deactivate()
    {
        currentSquareColor_ = Config.SquareColor.NotSet;
        ActiveImage.gameObject.SetActive(false);
        StartCoroutine(ActiveImageDeactivateAim());
    }

    IEnumerator ActiveImageDeactivateAim()
    {
        ActiveImage.gameObject.SetActive(true);
        Vector3 targetScale = new Vector3(0.0f, 0.0f, 0.0f);
        float timer = 0.0f;
        float duration = 0.35f;
        float percentage;

        while (timer < duration)
        {
            timer += Time.deltaTime;
            percentage = timer / duration;
            ActiveImage.transform.localScale = Vector3.Lerp(startScale, targetScale, curve.Evaluate(percentage));
            yield return null;
        }

        ActiveImage.gameObject.SetActive(false);
        ActiveImage.transform.localScale = startScale;

        if (Grid.gamemode == "ClassicGame")
        {
            grid.saveGame();
        }
        else if (Grid.gamemode == "ChallengeGame")
        {
            grid.saveChallengeGame();
        }
    }

    public void ClearOccupied()
    {
        currentSquareColor_ = Config.SquareColor.NotSet;
        Selected = false;
        SquareOccupied = false;
    }

    public void SetImage(bool setFirstImage)
    {
        normalImage.GetComponent<Image>().sprite = setFirstImage ? normalImages[1] : normalImages[0];
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag != "Shape") 
        {
            if (SquareOccupied == false)
            {
                if (hooverImage.gameObject.activeSelf)
                {
                    Selected = true;
                }
                else
                {
                    Selected = true;
                    hooverImage.sprite = collision.GetComponent<Image>().sprite;
                    hooverImage.gameObject.SetActive(true);
                }
            }
            else if (collision.GetComponent<ShapeSquare>() != null)
            {
                collision.GetComponent<ShapeSquare>().SetOccupied();
            }
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.tag != "Shape")
        {
            Selected = true;

            if (SquareOccupied == false)
            {
                hooverImage.sprite = collision.GetComponent<Image>().sprite;
                hooverImage.gameObject.SetActive(true);
                ActiveImage.sprite = collision.GetComponent<Image>().sprite;
            }
            else if (collision.GetComponent<ShapeSquare>() != null)
            {
                collision.GetComponent<ShapeSquare>().SetOccupied();
            }
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag != "Shape")
        {
            if (SquareOccupied == false)
            {
                Selected = false;
                hooverImage.gameObject.SetActive(false);
            }
            else if (collision.GetComponent<ShapeSquare>() != null)
            {
                collision.GetComponent<ShapeSquare>().UnSetOccupied();
            }
        }
    }
}
