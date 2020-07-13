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



        public void Init(Transform _Content)
        {
            m_Animator = _Content.GetComponent<Animator>();
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
            m_Animator.Play("PopupOpen");
        }

        public void PlayCloseAni()
        {
            SetAnimatorEnabled(true);
            m_Animator.Play("PopupClose");
        }

        public void EndAnim()
        {
            m_OnCompleteAnim?.Invoke();
        }

        public void OnClick_Close()
        {
            OnCloseEvent?.Invoke();
        }
    }
}