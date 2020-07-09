using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using UniRx;

namespace Nekozita
{
    /*
    public delegate void WindowDel(WindowParameter p);

    //Modelベースクラス
    public class WindowModelBase
    {
        public WindowModelBase() { }
    }

    //Presenterベースクラス
    public class WindowBase : MonoBehaviour
    {
        public bool IsOpen { protected set; get; }
        public bool IsCanOpenMultiple = false;
        public string WindowName { get { return this.GetType().Name; } }
        protected WindowParameter parameter { private set; get; }
        protected bool isInAni { get; private set; }
        BaseUIManager baseUIManager;
        protected Transform content;
        protected bool IsDestroyOnClose { get; private set; }
        protected bool IsReopen { get; private set; }
        //フェードインアウトするウインドウのときに自動でフェードアウトするするかどうか
        protected bool IsAutoFedeOut { get; private set; } = true;

        public BaseUIManager.UICanvas ParentCanvas = BaseUIManager.UICanvas.Middle;

        //public ActionByBackButton actionByBackButton = ActionByBackButton.Close;

        protected bool isWaitingData = false;
        public bool IsInOpenAni { get; private set; } = true;
        public bool IsInCloseAni { get; private set; }
        public bool IsForceAniCut { get; private set; } = false;

        protected virtual Type ScriptView { get { return typeof(WindowViewBase); } }
        protected WindowViewBase m_View = null;

        //windowBase内で変更のできるcallback
        //ベースクラスでは使用していない。継承先で必要に応じて必要な箇所で使用してください。
        protected NoParameterDel callback = null;
        void Init()
        {
            baseUIManager = GameObject.FindObjectOfType<BaseUIManager>();
            baseUIManager.AddWindow(this);

            IsReopen = false;
            IsDestroyOnClose = true;
            IsAutoFedeOut = true;
            WindowAniEvent wae = Helper.GetAllComponents<WindowAniEvent>(this.gameObject)[0];
            wae.OnCloseAniEndEvent = OnClose;
            wae.OnOpenAniEndEvent = OnOpen;

            content = Helper.FindChild(this, "content").transform;

            m_View = this.GetComponent<WindowViewBase>();
            m_View.Init(content);
            callback = null;
            SettingView();
            SettingModel();
            IsInCloseAni = false;
        }
        /// <summary>
        /// プレイヤーの操作によるイベントの設定
        /// </summary> 
        protected virtual void SettingView()
        {
            m_View.OnCloseEvent = () => this.OnBackButton();
        }

        /// <summary>
        /// Modelでの監視対象と変化時のイベントの設定
        /// </summary>
        protected virtual void SettingModel() { }

        public void OpenWindow(WindowParameter p = null)
        {
            if (p == null)
                p = new WindowParameter();
            this.parameter = p;
            IsForceAniCut = false;
            Init();
            IsInOpenAni = true;
            IsOpen = true;

            if (this.parameter.IsOpenCloseAniWithFade && !IsForceAniCut)
            {
                m_View.SetAnimatorEnabled(false);
                this.content.localScale = Vector3.zero;
                BaseUIManager.Instance.FadeIn(() =>
                {
                    this.content.localScale = Vector3.one;
                    OpenWindow();
                });
            }
            else
            {
                OpenWindow();
            }
        }

        void OpenWindow()
        {
            if (!IsReopen)
            {
                OnOpenBeforeAni(this.parameter);
                if (this.parameter.OnOpen != null)
                    this.parameter.OnOpen();
            }
            else
                OnReopenBeforeAni(this.parameter);

            if (isWaitingData == true)
            {
                //  BaseUIManager.Instance.ShowLoadingIcon(true);
                m_View.SetAnimatorEnabled(false);
                this.content.localScale = Vector3.zero;
            }
            else
            {
                OpenWindowFunc();
            }
        }

        void OpenWindowFunc()
        {
            this.gameObject.SetActive(true);
            this.content.localScale = Vector3.one;
            if (this.parameter.IsOpenCloseAniWithFade && !IsForceAniCut)
            {
                if (IsAutoFedeOut)
                    BaseUIManager.Instance.FadeOut(() => { OnOpen(); });
                else
                {
                    //自動フェードアウトが切れているから戻しておく
                    IsAutoFedeOut = true;
                    OnOpen();
                }
            }
            else
            {
                if (this.parameter.IsPlayOpenCloseAnime == false || IsForceAniCut)
                {
                    //強制アニメカットがonになっている可能性があるのでoffに変更しておく
                    IsForceAniCut = false;
                    OnOpen();
                    m_View.SetAnimatorEnabled(false);
                }
                else
                {
                    baseUIManager.ForbidAllPlayerUIInput(true);
                    isInAni = true;
                    m_View.PlayOpenAni();
                    this.content.localScale = Vector3.zero;
                }
            }
        }

        /// <summary>
        /// クローズ、スタンバイ問わず、オープン時に通る共通の処理
        /// </summary>
        protected virtual void OnOpen()
        {
            if (!IsReopen)
            {
                OnOpenAniEnd(this.parameter);
                if (this.parameter.OnOpenAniEnd != null)
                    this.parameter.OnOpenAniEnd();
            }
            else
                OnReopenAniEnd(this.parameter);

            baseUIManager.ForbidAllPlayerUIInput(false);
            isInAni = false;
            IsInOpenAni = false;
        }

        /// <summary>
        /// 新規オープン時のオープンアニメーション再生前処理
        /// </summary>
        /// <param name="p"></param>
        protected virtual void OnOpenBeforeAni(WindowParameter p)
        {
            m_View.OnOpenBeforAni(p);
        }


        /// <summary>
        /// 新規オープン時のオープンアニメーション再生後処理
        /// </summary>
        /// <param name="p"></param>
        public virtual void OnOpenAniEnd(WindowParameter p)
        {
            m_View.OnOpenAniEnd(p);
        }

        /// <summary>
        /// スタンバイから復帰する時のオープン処理
        /// </summary>
        /// <param name="p"></param>
        public void ReopenWindow()
        {
            IsReopen = true;
            IsInOpenAni = true;
            IsOpen = true;
            this.gameObject.SetActive(true);

            if (this.parameter.IsOpenCloseAniWithFade && !IsForceAniCut)
            {
                m_View.SetAnimatorEnabled(false);
                this.content.localScale = Vector3.zero;
                BaseUIManager.Instance.FadeIn(() =>
                {
                    this.content.localScale = Vector3.one;
                    OpenWindow();
                });
            }
            else
            {
                OpenWindow();
            }
        }

        /// <summary>
        /// スタンバイから復帰する時のオープンアニメーション再生前処理
        /// </summary>
        /// <param name="p"></param>
        protected virtual void OnReopenBeforeAni(WindowParameter p)
        {
            m_View.OnReopenBeforAni(p);
        }

        /// <summary>
        /// スタンバイから復帰する時のオープンアニメーション再生後処理
        /// </summary>
        /// <param name="p"></param>
        public virtual void OnReopenAniEnd(WindowParameter p)
        {
            m_View.OnReopenAniEnd(p);
        }


        /// <summary>
        /// 自分自身のクローズを呼ぶ時はこれ
        /// </summary>
        public void CloseWindow()
        {
            if (isInAni == true)
                return;
            IsInCloseAni = true;
            IsDestroyOnClose = true;

            CloseWindowFunc();
        }

        void CloseWindowFunc()
        {
            if (this.parameter.IsOpenCloseAniWithFade && !IsForceAniCut)
            {
                BaseUIManager.Instance.FadeIn(() =>
                {
                    OnCloseBeforeAni();
                    if (this.parameter.OnClose != null)
                        this.parameter.OnClose();
                    this.gameObject.SetActive(false);
                    if (IsAutoFedeOut)
                        BaseUIManager.Instance.FadeOut(() => { OnClose(); });
                    else
                    {
                        //自動フェードアウトが切れてるのをもとに戻す
                        IsAutoFedeOut = true;
                        OnClose();
                    }
                });
            }
            else
            {
                OnCloseBeforeAni();
                if (this.parameter.OnClose != null)
                    this.parameter.OnClose();
                if (this.parameter.IsPlayOpenCloseAnime == false || IsForceAniCut)
                {
                    //強制アニメカットがonになっている可能性があるのでoffに変更しておく
                    IsForceAniCut = false;
                    OnClose();
                }
                else
                {
                    baseUIManager.ForbidAllPlayerUIInput(true);
                    isInAni = true;
                    m_View.PlayCloseAni();
                }
            }
        }

        /// <summary>
        /// ウィンドウを閉じるときの処理
        /// 閉じるときはこれを呼ばずに、CloseWindowを呼んでね
        /// </summary>
        protected virtual void OnClose()
        {
            this.gameObject.SetActive(false);

            baseUIManager.ForbidAllPlayerUIInput(false);

            baseUIManager.RemoveWindow(this);
            isInAni = false;
            IsOpen = false;

            OnCloseAniEnd();
            if (this.parameter != null && this.parameter.OnCloseAniEnd != null)
                this.parameter.OnCloseAniEnd();

            if (IsDestroyOnClose)
            {
                OnCloseDestroy();
                baseUIManager.OpenStanByWindow();
                GameObject.Destroy(this.gameObject);
            }
            else
            {
                OnCloseStandby();
                baseUIManager.SetStandByWindow(this);
            }

            OnCloseWindowEnd();

            baseUIManager.CloseWindowEnd();
        }

        /// <summary>
        /// クローズ時の処理
        /// スタンバイ時は通らない
        /// </summary>
        protected virtual void OnCloseDestroy()
        {
            parameter?.OnCloseDestroy?.Invoke();
        }

        /// <summary>
        /// スタンバイ時の処理
        /// クローズ時は通らない
        /// </summary>
        protected virtual void OnCloseStandby()
        {
            parameter?.OnCloseStandby?.Invoke();
        }

        /// <summary>
        /// 閉じるアニメーション再生前の処理
        /// </summary>
        protected virtual void OnCloseBeforeAni()
        {
            m_View.OnCloseBeforAni();
        }

        /// <summary>
        /// 閉じるアニメーション再生後の処理
        /// </summary>
        public virtual void OnCloseAniEnd()
        {
            m_View.OnCloseAniEnd();
        }

        /// <summary>
        /// ウィンドウ閉じる際、最後に行う処理
        /// </summary>
        protected virtual void OnCloseWindowEnd()
        {
            parameter?.OnCloseWindowEnd?.Invoke();
        }

        /// <summary>
        /// スタンバイ状態にする処理
        /// </summary>
        public void CloseWindowAndSetStandBy()
        {
            if (isInAni == true)
                return;
            IsInCloseAni = true;
            IsDestroyOnClose = false;
            OnCloseBeforeAni();

            if (this.parameter != null && this.parameter.OnClose != null)
                this.parameter.OnClose();

            CloseWindowFunc();
        }

        protected virtual void OnDestroy()
        {
            if (m_View != null)
                m_View.OnDestroy();
        }

        public void Hide(bool isHide)
        {
            this.content.gameObject.SetActive(!isHide);
        }

        protected void OnReceiveDataFromServer()
        {
            if (isWaitingData == true)
            {
                // BaseUIManager.Instance.ShowLoadingIcon(false);
                isWaitingData = false;
                OpenWindowFunc();
            }
        }

        public void FixScrollbar(Scrollbar scrollbar)
        {
            if (isInAni)
                scrollbar.value = 1;
        }

        [SerializeField]
        protected ScrollRect fixScrollRect;

        void LateUpdate()
        {
            if (fixScrollRect != null && IsInOpenAni)
                fixScrollRect.verticalNormalizedPosition = 1;
        }

        //Viewベースクラスの自動追加
        protected void Reset()
        {
            var components = this.GetComponents<Component>();
            foreach (var component in components)
            {
                if (component.GetType().BaseType == typeof(WindowViewBase) ||
                    component.GetType() == typeof(WindowViewBase))
                    GameObject.DestroyImmediate(component);
            }
            WindowViewBase view = GetComponent(ScriptView) as WindowViewBase;
            if (view == null)
                this.gameObject.AddComponent(ScriptView);
        }

        /// <summary>
        /// 閉じるボタン押下など、Windowを閉じる処理
        /// </summary>
        public virtual void OnBackButton()
        {
            this.CloseWindow();
        }

#if UNITY_ANDROID
        public virtual void OnDeviceBackButton()
        {
            AppControl.Instance.QuitApp();
        }
#endif
        /// <summary>
        /// フェードイン、アウトするウインドウの場合に自動でフェードアウトしないように変更する
        /// OnOpenBeforAniかOnCloseBeforAniで呼び出すとよい
        /// </summary>
        public void CancelAutoFedeout()
        {
            IsAutoFedeOut = false;
        }

        public void ForceCutAni()
        {
            IsForceAniCut = true;
        }
    }

    public class WindowParameter
    {
        public bool IsPlayOpenCloseAnime = false;
        public bool IsOpenCloseAniWithFade = false;

        //アニメーション前もしくはFadeIn直後
        public NoParameterDel OnOpen = null;
        public NoParameterDel OnClose = null;

        //アニメーション後もしくはFadeOut後
        public NoParameterDel OnOpenAniEnd = null;
        public NoParameterDel OnCloseAniEnd = null;

        /// <summary>
        /// クローズして削除した時のみ通る処理
        /// </summary>
        public NoParameterDel OnCloseDestroy = null;
        /// <summary>
        /// スタンバイ状態にした時のみ通る処理
        /// </summary>
        public NoParameterDel OnCloseStandby = null;

        /// <summary>
        /// クローズスタンバイ問わず、最後に行われる処理
        /// </summary>
        public NoParameterDel OnCloseWindowEnd = null;

        public WindowParameter()
        {
        }

        public WindowParameter(NoParameterDel onCloseAniEnd)
        {
            this.OnCloseAniEnd = onCloseAniEnd;
        }

        public WindowParameter(bool isPlayAnime)
        {
            this.IsPlayOpenCloseAnime = isPlayAnime;
        }
    }
    */
}