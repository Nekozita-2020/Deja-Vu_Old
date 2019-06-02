using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameOverUI : MonoBehaviour
{

    void Start()
    {
        this.gameObject.SetActive(false);
    }
    
    void Update()
    {

    }

    public void GameOverView()
    {
        this.gameObject.SetActive(true);
    }

}