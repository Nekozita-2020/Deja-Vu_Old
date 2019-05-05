using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TutorialManager : MonoBehaviour
{

    [SerializeField] private GameObject TutorialWindow;
    public Pausable Pausable;



    void Start()
    {
        OnClickTutorialButton();
    }

    public void OnClickTutorialButton()
    {
        // ゲームを一時停止
        Pausable.pausing = true;

        // チュートリアルウインドウを表示
        TutorialWindow.SetActive(true);
    }

    public void OnClickTutorialWindowCloseButton()
    {
        // チュートリアルウインドウを閉じる
        TutorialWindow.SetActive(false);

        // ゲームを再開
        Pausable.pausing = false;
    }

}