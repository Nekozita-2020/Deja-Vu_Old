using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HighScoreCheck : MonoBehaviour
{
    GameObject ScoreCount;
    GameObject HighScoreCount;
    private int NowScore, HighScoreNum;

    void Start()
    {
        ScoreCount = GameObject.Find("ScoreCount");
        HighScoreCount = GameObject.Find("HighScoreCount");
        HighScoreNum = PlayerPrefs.GetInt("HighScore", 0);
        Text HighScore = HighScoreCount.GetComponent<Text>();
        HighScore.text = HighScoreNum.ToString();
    }

    void Update()
    {

    }

    public void ScoreCompare()
    {
        NowScore = ScoreCount.GetComponent<ScoreCount>().ScoreNum;

        if (HighScoreNum < NowScore)
        {
            PlayerPrefs.SetInt("HighScore", NowScore);
            PlayerPrefs.Save();
        }
    }

}
