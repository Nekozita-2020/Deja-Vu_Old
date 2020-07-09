using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
/*
public class LogoWindowView : WindowViewBase
{
    // 蓋となる画像(この透明度を変えて下のロゴを表示させる)
    [SerializeField] public Image Blocker = null;

    // 蓋とロゴレイヤーの背景の色情報
    [SerializeField] private Color BackgroundColor;

    // フェードイン/フェードアウトのフラグ(フェードインでロゴを表示させる)
    [NonSerialized] public bool FadeInFlag, FadeOutFlag;

    // フェードイン/フェードアウトの完了フラグ
    [NonSerialized] public bool FadeCompleteFlag;

    // 元々のアルファ値の保存用(フェードアウト完了判定に用いる)
    [NonSerialized] public float DefaultAlphaNum;

    // 変化させるアルファ値の保存用
    private float NowAlphaNum;

    // フェードイン/フェードアウトさせる時間
    private float FadeTime = 1.0f;

    // フェードイン/フェードアウトが完了し、このウインドウのクローズと共に走るコールバック
    public Action CompleteCallback = null;



    private void Update()
    {
        if(FadeInFlag == true || FadeOutFlag == true)
        {
            // 現在のアルファ値を保存
            NowAlphaNum = Blocker.color.a;

            // フェードイン
            if (FadeInFlag)
            {
                NowAlphaNum -= Time.deltaTime / FadeTime;
            }
            // フェードアウト
            else if (FadeOutFlag)
            {
                NowAlphaNum += Time.deltaTime / FadeTime;
            }

            // フェードした値でカラーを更新
            UpdateFadeImageColor(Blocker, Blocker.color.r, Blocker.color.g, Blocker.color.b, NowAlphaNum);

            // フラグの切り替えチェック
            FadeFlagChack();
        }
    }

    /// <summary>
    /// 蓋とロゴの背景カラーをセット
    /// </summary>
    public void SetFadeImageColor()
    {
        Blocker.color = BackgroundColor;
        this.GetComponent<Image>().color = BackgroundColor;

        // ここで必要な基礎データもセット
        DefaultAlphaNum = Blocker.color.a;
    }

    /// <summary>
    /// 指定したImageのカラーを更新
    /// </summary>
    /// <param name="m_UpdateImage"></param>
    /// <param name="m_ColorNum_Red"></param>
    /// <param name="m_ColorNum_Green"></param>
    /// <param name="m_ColorNum_Blue"></param>
    /// <param name="m_ColorNum_Alpha"></param>
    private void UpdateFadeImageColor(Image m_UpdateImage, float m_ColorNum_Red,
        float m_ColorNum_Green, float m_ColorNum_Blue, float m_ColorNum_Alpha)
    {
        m_UpdateImage.color = new Color(m_ColorNum_Red, m_ColorNum_Green, m_ColorNum_Blue, m_ColorNum_Alpha);
    }

    /// <summary>
    /// フェードフラグの切り替えチェック
    /// </summary>
    private void FadeFlagChack()
    {
        // フェードイン完了時
        if(Blocker.color.a <= 0.0f)
        {
            FadeInFlag = false;

            // ロゴ表示時間分待機させる
            StartCoroutine(WaitForSecond());
        }
        else if (FadeInFlag == false && DefaultAlphaNum <= Blocker.color.a)
        {
            // ここでフェードイン/フェードアウトどちらも完了する想定
            // コールバックがあれば実行
            CompleteCallback?.Invoke();

            // フェード完了フラグ
            FadeCompleteFlag = true;

            // このウインドウを閉じる
            // Destroy(this);
        }
    }

    /// <summary>
    /// 指定した秒数待機させる
    /// </summary>
    /// <returns></returns>
    private IEnumerator WaitForSecond()
    {
        yield return new WaitForSeconds(1.0f);
        FadeOutFlag = true;
    }
}
*/