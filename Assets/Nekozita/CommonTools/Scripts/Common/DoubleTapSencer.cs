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

            // 1度目のタップから判定時間「0.5秒」以内
            if (DoubleTapTime < 0.5f && IsDrag == false)
            {
                // 1度目のタップから0.5秒以内に再度クリック(=ダブルタップ)
                if (Input.GetMouseButtonUp(0))
                {
                    // タブルタップを検知
                    OnDoubleTap?.Invoke();

                    // 初期化
                    IsSingleTap = false;
                    DoubleTapTime = 0.0f;
                }
            }
            else
            {
                // 初期化
                IsSingleTap = false;
                DoubleTapTime = 0.0f;
            }
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

    /// <summary>
    /// 1度目のタップ
    /// </summary>
    public void OnSingleTap()
    {
        // ドラッグしていなければ
        if (IsDrag == false)
        {
            IsSingleTap = true;
        }
        else IsDrag = false;
    }


}