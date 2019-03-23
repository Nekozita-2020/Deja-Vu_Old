using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class GameManagement : MonoBehaviour
{

    public GameObject MainCamera;
    public GameObject GameOverText;
    public GameObject ReturnGameMenuButton;

    void Start()
    {

    }

    void Update()
    {

    }

    public void OnGameOverProcess()
    {
        // Debug.Log("ゲームオーバー処理");

        // カメラ位置を停止させる
        MainCamera.GetComponent<forward>().ForwardSpeed = 0f;

        // ゲームオーバーテキストとゲームメニューボタンを表示させる
        GameOverText.GetComponent<GameOverUI>().GameOverView();
        ReturnGameMenuButton.GetComponent<GameOverUI>().GameOverView();

        // ハイスコアかどうかチェックさせる
        this.GetComponent<HighScoreCheck>().ScoreCompare();

    }

}