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
    public class WindowBase : MonoBehaviour
    {
        // Type
        protected virtual Type m_ScriptView => typeof (WindowViewBase);

        // Viewベースクラス
        protected WindowViewBase m_ViewBase;

        // 引き継いできたデータクラス
        protected WindowDataPack m_DataPack = null;

        /// <summary>
        /// トランジションのアニメーションの終了通知
        /// (蓋絵が開き切ったり、閉じきったことを通知する)
        /// </summary>
        private Subject<Unit> m_OnTransactionFinishedInternal;



        protected virtual void Awake()
        {
            m_ViewBase = this.gameObject.GetComponent<WindowViewBase>();

            this.m_OnTransactionFinishedInternal = new Subject<Unit>();
        }

        protected virtual void Start()
        {
            if (m_ViewBase != null)
            {
                // Viewのセッティング
                m_ViewBase?.Init();

                // Presenterのセッティング
                this.Init();
            }
        }

        /// <summary>
        /// スクリプトアタッチ時などの初期化時に通る
        /// Viewを自動で追加させる
        /// </summary>
        protected void Reset()
        {
            // MVP設計のスクリプトが重複することの無いように、ここでチェック
            var m_Components = this.GetComponents<Component>();

            foreach(var _Component in m_Components)
            {
                // 一旦WindowView及びそのサブクラスがあれば削除する(Viewの重複回避)
                if (_Component.GetType().BaseType == typeof(WindowViewBase) ||
                         _Component.GetType() == typeof(WindowViewBase))
                {
                    // 直ちに削除
                    GameObject.DestroyImmediate(_Component);
                }
            }

            WindowViewBase view = GetComponent(m_ScriptView) as WindowViewBase;

            if (view == null)
            {
                this.gameObject.AddComponent(m_ScriptView);
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
            m_ViewBase.OnCloseEvent = OnCloseWindow;

            // アニメーションが終了したイベントをObservableに変換する
            m_ViewBase.m_OnCompleteAnim.AddListener(
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
            m_ViewBase.OnOpenBeforeAni(m_DataPack);

            // アニメーションを再生
            m_ViewBase.PlayOpenAni();

            // アニメーションの終了を待機し、その後のアクションを実行するコルーチン
            StartCoroutine(this.SyncEndAnim(() => m_ViewBase.OnOpenAniEnd(m_DataPack)));
        }

        /// <summary>
        /// Close時の処理
        /// </summary>
        private void OnCloseWindow()
        {
            // アニメーション前に行う処理
            m_ViewBase.OnCloseBeforeAni();

            // アニメーションを再生
            m_ViewBase.PlayCloseAni();

            // アニメーションの終了を待機し、その後のアクションを実行するコルーチン
            StartCoroutine(this.SyncEndAnim(() =>
            {
                m_ViewBase.OnCloseAniEnd();

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