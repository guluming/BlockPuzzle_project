using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jewels : MonoBehaviour
{
    public List<GameObject> jewels;
    public List<GameObject> jewelsCount;
    public List<GameObject> jewelCompletedCheck;

    void Awake()
    {
        for (int i = 0; i < jewels.Count; i++)
        {
            jewels[i].SetActive(false);
        }
    }
}
