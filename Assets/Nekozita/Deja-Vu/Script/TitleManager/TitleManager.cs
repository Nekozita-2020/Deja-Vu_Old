using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{

    private void Awake()
    {

    }

    private void Start()
    {
        // タイトルBGMを再生
        // SoundManager.Instance.PlayBGM(ResourcesFilePath.);
    }

    public void OnChangeScene(string ChangeScene)
    {
        SceneController.Instance.FadeOut(ChangeScene);
    }

}
