using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// シーン遷移時のフェード操作などを操作する
/// </summary>
public class SceneController : SingletonMonoBehaviour<SceneController>
{

    // フェード用のCanvas
    [SerializeField] private Canvas FadeCanvas;
    private Image FadeImage = null;

    // フェード用Imageの透明度
    private float Alpha = 0.0f;

    // フェードインアウトのフラグ
    public bool IsFadeIn = false;
    public bool IsFadeOut = false;

    // フェードしたい時間（単位は秒）
    private float FadeTime = 1.0f;

    // 遷移先のシーン名
    private string NextScene = null;



    private void Awake()
    {
        // シーン遷移後に削除されないようにする
        DontDestroyOnLoad(this.gameObject);

        FadeImage = FadeCanvas.GetComponent<Image>();
    }

    /// <summary>
    /// シーンをフェードインさせる際などに使う
    /// </summary>
    public void FadeIn(float FadeTime_Secoond = 1.0f)
    {
        if (FadeCanvas.gameObject.activeInHierarchy == false)
        {
            FadeCanvas.gameObject.SetActive(true);
        }
        IsFadeIn = true;
        FadeTime = FadeTime_Secoond;
    }

    /// <summary>
    /// フェードアウトさせてシーン遷移を行う
    /// フェードさせる時間も指定できる
    /// </summary>
    /// <param name="SceneName">Scene name.</param>
    public void FadeOut(string SceneName, float FadeTime_Secoond = 1.0f)
    {
        if (FadeCanvas.gameObject.activeInHierarchy == false)
        {
            FadeCanvas.gameObject.SetActive(true);
        }
        NextScene = SceneName;
        FadeCanvas.enabled = true;
        IsFadeOut = true;
        FadeTime = FadeTime_Secoond;
    }

    void Update()
    {
        // フラグ有効なら毎フレームフェードイン/アウト処理
        if (IsFadeIn)
        {
            // 経過時間から透明度計算
            Alpha -= Time.deltaTime / FadeTime;

            // フェードイン終了判定
            if (Alpha <= 0.0f)
            {
                IsFadeIn = false;
                Alpha = 0.0f;
                FadeCanvas.enabled = false;
                FadeCanvas.gameObject.SetActive(false);
            }

            // フェード用Imageの透明度設定
            FadeImage.color = new Color(0.0f, 0.0f, 0.0f, Alpha);
        }
        else if (IsFadeOut)
        {
            // 経過時間から透明度計算
            Alpha += Time.deltaTime / FadeTime;

            // フェードアウト終了判定
            if (Alpha >= 1.0f)
            {
                IsFadeOut = false;
                Alpha = 1.0f;

                // 次のシーンへ遷移
                SceneManager.LoadScene(NextScene);
            }

            // フェード用Imageの透明度設定
            FadeImage.color = new Color(0.0f, 0.0f, 0.0f, Alpha);
        }
    }

}