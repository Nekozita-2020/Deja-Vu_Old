using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TutorialManager : MonoBehaviour
{
    [SerializeField] private forward MainCameraForword;
    [SerializeField] private GameObject TutorialWindow;
    [SerializeField] private Pausable Pausable;


    void Start()
    {
        OnClickTutorialButton();
    }

    public void OnClickTutorialButton()
    {
        // ゲームを一時停止
        Pausable.pausing = true;
        MainCameraForword.ForwardSpeed = 0f;

        // チュートリアルウインドウを表示
        TutorialWindow.SetActive(true);
    }

    public void OnClickTutorialWindowCloseButton()
    {
        // チュートリアルウインドウを閉じる
        TutorialWindow.SetActive(false);

        // ゲームを再開
        Pausable.pausing = false;
        MainCameraForword.ForwardSpeed = 13f;
    }

}