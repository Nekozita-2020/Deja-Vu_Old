using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreCount : MonoBehaviour
{

    public int ScoreNum;

    void Start()
    {
        ScoreNum = 0;
    }

    void Update()
    {

    }

    public void AddScore()
    {
        //スコアを加算
        Text Score = this.GetComponent<Text>();
        ScoreNum += 1;
        Score.text = ScoreNum.ToString();
    }

}
