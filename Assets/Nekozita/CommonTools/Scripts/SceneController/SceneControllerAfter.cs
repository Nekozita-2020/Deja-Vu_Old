using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// シーン遷移時のフェード操作などを操作する
/// </summary>
public class SceneControllerAfter : SingletonMonoBehaviour<SceneControllerAfter>
{

    // フェード用のCanvas
    [SerializeField] private Canvas FadeCanvas;
    private Image FadeImage;

    // フェード用Imageの透明度
    private float Alpha = 0.0f;

    // フェードインアウトのフラグ
    public bool IsFadeIn = false;
    public bool IsFadeOut = false;

    // フェードしたい時間（単位は秒）
    private float FadeTime = 0.2f;

    // 遷移先のシーン名
    private string NextScene;



    private void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
        FadeImage = FadeCanvas.GetComponent<Image>();
    }

    // フェードイン開始
    public void FadeIn()
    {
        if (FadeCanvas == null)
        {
            FadeCanvas.gameObject.SetActive(true);
        }
        IsFadeIn = true;
    }

    // フェードアウト開始
    public void FadeOut(string SceneName)
    {
        if (FadeCanvas == null) FadeCanvas.gameObject.SetActive(true);
        NextScene = SceneName;
        FadeCanvas.enabled = true;
        IsFadeOut = true;
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