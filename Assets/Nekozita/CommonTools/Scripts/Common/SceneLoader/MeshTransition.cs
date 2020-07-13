using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Nekozita
{
    public class MeshTransition : MonoBehaviour
    {
        // トランジション関連のAnimator
        [SerializeField] Animator m_TransitionAnimator = null;

        // トランジションアニメーションが終了したイベント
        [NonSerialized] public UnityEvent onTransitionComplete = new UnityEvent();



        /// <summary>
        /// シーン遷移の蓋を閉じるアニメーション
        /// </summary>
        public void OnPlayCloseTransitionAnim()
        {
            m_TransitionAnimator.Play("CloseTransition");
        }

        /// <summary>
        /// シーン遷移の蓋を開けるアニメーション
        /// </summary>
        public void OnPlayOpenTransitionAnim()
        {
            m_TransitionAnimator.Play("OpenTransition");
        }

        public void EndAnim()
        {
            onTransitionComplete?.Invoke();
        }
    }
}