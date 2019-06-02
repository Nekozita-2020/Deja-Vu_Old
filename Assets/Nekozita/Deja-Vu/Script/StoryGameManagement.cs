using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class StoryGameManagement : MonoBehaviour
{

    public GameObject MainCamera;

    // ゲームオーバーUI
    public GameObject GameOverText;

    // ゲームクリアUI
    public GameObject ClearMessage;

    void Start()
    {

    }

    void Update()
    {

    }

    public void OnGameOverProcess()
    {
        // カメラ位置を停止させる
        MainCamera.GetComponent<forward>().ForwardSpeed = 0f;

        // ゲームオーバーUIを表示させる
        GameOverText.GetComponent<GameOverUI>().GameOverView();
    }

    public void OnGameClearProcess()
    {
        // カメラ位置を停止させる
        MainCamera.GetComponent<forward>().ForwardSpeed = 0f;

        // クリア時にフェードアウトさせる
        ClearMessage.GetComponent<ObjectActive>().OnObjectActive();
        ClearMessage.GetComponent<FadeController>().isFadeOut = true;
    }

}