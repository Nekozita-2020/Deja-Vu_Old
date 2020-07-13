using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Nekozita
{
    /// <summary>
    /// Viewベースクラス
    /// </summary>
    public class WindowViewBase : MonoBehaviour
    {
        // Window関係のAnimator
        private Animator m_Animator = null;

        public Action OnCloseEvent = null;

        // アニメーションが終了したイベント
        [NonSerialized] public UnityEvent m_OnCompleteAnim = new UnityEvent();



        public void Init()
        {
            // WindowにAnimatorがアタッチされている前提
            m_Animator = this.GetComponent<Animator>();

            // 念のためAnimatorは始め無効化しておく
            SetAnimatorEnabled(false);
        }

        public virtual void OnOpenBeforeAni(WindowParameter _p) { }

        public virtual void OnOpenAniEnd(WindowParameter _p) { }

        // public virtual void OnReopenBeforeAni(WindowParameter _p) { }

        // public virtual void OnReopenAniEnd(WindowParameter _p) { }

        public virtual void OnCloseBeforeAni() { }

        public virtual void OnCloseAniEnd() { }

        public virtual void OnDestroy() { }

        public void SetAnimatorEnabled(bool _IsEnabled)
        {
            m_Animator.enabled = _IsEnabled;
        }

        public void PlayOpenAni()
        {
            SetAnimatorEnabled(true);
            m_Animator.Play("OpenWindow");
        }

        public void PlayCloseAni()
        {
            SetAnimatorEnabled(true);
            m_Animator.Play("CloseWindow");
        }

        /// <summary>
        /// Animation内から呼び出し、イベントを発行する想定
        /// </summary>
        public void EndAnim()
        {
            Debug.Log("Anim終了検知");
            SetAnimatorEnabled(false);
            Debug.Log("Animatorfalse検知");
            m_OnCompleteAnim?.Invoke();
        }

        public void OnClick_Close()
        {
            OnCloseEvent?.Invoke();
        }
    }
}