using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using UniRx;

namespace Nekozita
{
    /// <summary>
    /// Modelベースクラス
    /// </summary>
    public class WindowModelBase
    {
        public WindowModelBase() { }
    }

    /// <summary>
    /// Presenterベースクラス
    /// </summary>
    public class WindowBase : MonoBehaviour
    {
        WindowViewBase m_View;

        /// <summary>
        /// トランジションのアニメーションの終了通知
        /// (蓋絵が開き切ったり、閉じきったことを通知する)
        /// </summary>
        private Subject<Unit> m_OnTransactionFinishedInternal = new Subject<Unit>();



        private void Awake()
        {
            m_View = this.GetComponent<WindowViewBase>();
        }

        public void Init()
        {
            // アニメーションが終了したイベントをObservableに変換する
            m_View.m_OnCompleteAnim.AddListener(
                () => m_OnTransactionFinishedInternal.OnNext(Unit.Default));
        }

        private IEnumerator SyncEndAnim()
        {
            // トランジションアニメーションが終了するのを待つ
            yield return m_OnTransactionFinishedInternal.FirstOrDefault().ToYieldInstruction();
        }
    }

    public class WindowParameter
    {

    }
}