using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using UniRx;

namespace Nekozita
{
    /// <summary>
    /// Windowにデータを受け渡すときに利用する
    /// </summary>
    public class WindowDataPack { }

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
    public class WindowBase<T> : MonoBehaviour
    {
        // Viewベースクラス
        protected WindowViewBase m_View;

        // 引き継いできたデータクラス
        protected WindowDataPack m_DataPack = null;

        /// <summary>
        /// トランジションのアニメーションの終了通知
        /// (蓋絵が開き切ったり、閉じきったことを通知する)
        /// </summary>
        private Subject<Unit> m_OnTransactionFinishedInternal;



        protected virtual void Awake()
        {
            m_View = this.gameObject.GetComponent<WindowViewBase>();

            this.m_OnTransactionFinishedInternal = new Subject<Unit>();
        }

        protected virtual void Start()
        {
            if (m_View != null)
            {
                // Viewのセッティング
                m_View?.Init();

                // Presenterのセッティング
                this.Init();
            }
        }

        /// <summary>
        /// 外部からこのWindowにデータを引き継ぐ
        /// </summary>
        /// <param name="_DataPack"></param>
        public void OnInheritData(WindowDataPack _DataPack)
        {
            m_DataPack = _DataPack;
        }

        protected virtual void Init()
        {
            // Close時のコールバックをセット
            m_View.OnCloseEvent = OnCloseWindow;

            // アニメーションが終了したイベントをObservableに変換する
            m_View.m_OnCompleteAnim.AddListener(
                () => m_OnTransactionFinishedInternal.OnNext(Unit.Default));

            // Opne時の処理
            OnOpenWindow();
        }

        /// <summary>
        /// Open時の処理
        /// </summary>
        private void OnOpenWindow()
        {
            // アニメーション前に行う処理
            m_View.OnOpenBeforeAni(m_DataPack);

            // アニメーションを再生
            m_View.PlayOpenAni();

            // アニメーションの終了を待機し、その後のアクションを実行するコルーチン
            StartCoroutine(this.SyncEndAnim(() => m_View.OnOpenAniEnd(m_DataPack)));
        }

        /// <summary>
        /// Close時の処理
        /// </summary>
        private void OnCloseWindow()
        {
            // アニメーション前に行う処理
            m_View.OnCloseBeforeAni();

            // アニメーションを再生
            m_View.PlayCloseAni();

            // アニメーションの終了を待機し、その後のアクションを実行するコルーチン
            StartCoroutine(this.SyncEndAnim(() =>
            {
                m_View.OnCloseAniEnd();

                // このWindowを破棄するタイミングで1度だけViewのOnDestroy()が実行される
                Destroy(this.gameObject);
            }));
        }

        private IEnumerator SyncEndAnim(Action _EndAnimCallback = null)
        {
            // アニメーションが終了するのを待つ
            yield return m_OnTransactionFinishedInternal.FirstOrDefault().ToYieldInstruction();

            _EndAnimCallback?.Invoke();
        }
    }
}