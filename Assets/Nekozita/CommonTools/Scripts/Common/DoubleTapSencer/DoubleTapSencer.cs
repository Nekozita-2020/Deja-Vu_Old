using UnityEngine;
using System;
using System.Collections;

public class DoubleTapSencer : MonoBehaviour
{

    // ダブルタップを検知した時のコールバック
    public Action OnDoubleTap;

    // タップ開始からの累積時間
    private float DoubleTapTime;

    // シングルタップのフラグ用
    private bool IsSingleTap;

    // ドラッグのフラグ用
    private bool IsDrag;



    private void FixedUpdate()
    {
        if (IsSingleTap)
        {
            DoubleTapTime += Time.deltaTime;
        }
    }

    /// <summary>
    /// タップ処理
    /// </summary>
    public void OnTap()
    {
        // タップのフラグ
        if (IsSingleTap)
        {
            // 1度目のタップから判定時間「0.3秒」以内かつドラッグしていない場合
            if (DoubleTapTime < 0.3f && IsDrag == false)
            {
                // タブルタップを検知
                OnDoubleTap?.Invoke();

                // 初期化
                IsSingleTap = false;
                DoubleTapTime = 0.0f;
                IsDrag = false;
            }
            else
            {
                // 初期化
                IsSingleTap = false;
                DoubleTapTime = 0.0f;
                IsDrag = false;
            }
        }
        else
        {
            if (IsDrag == false)
            {
                IsSingleTap = true;
            }
            else IsDrag = false;
        }
    }

    /// <summary>
    /// ドラッグ処理
    /// </summary>
    public void OnDrag()
    {
        // ドラッグしたらダブルタップの判定を無効に
        IsDrag = true;
    }

}
