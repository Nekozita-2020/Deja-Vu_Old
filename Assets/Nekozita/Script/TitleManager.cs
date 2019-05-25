using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{

    private void Awake()
    {
        // CommonToolsシーンのオブジェクトを追加する
        SceneManager.LoadScene("CommonTools", LoadSceneMode.Additive);
    }

    void Start()
    {
        // タイトルBGMを再生
        SoundManager.Instance.PlayBGM(SoundConfig.BGM_HARUJION_BGM);
    }

}
