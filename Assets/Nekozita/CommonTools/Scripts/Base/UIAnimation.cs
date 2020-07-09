/*
using UnityEngine;
using UniRx;
using UniRx.Triggers;
using UniRx.Async;
using UniRx.Async.Triggers;
using System.Threading;
using System;


namespace Teco
{
    public interface IUIAnimation
    {
        IObservable<Unit> OpenAnimeBegin { get; }
        IObservable<Unit> OpenAnimeEnd { get; }
        IObservable<Unit> CloseAnimeBegin { get; }
        IObservable<Unit> CloseAnimeEnd { get; }
        void Play(bool isOpen);
    }

    [RequireComponent(typeof(Animation))]
    public class UIAnimation : MonoBehaviour, IUIAnimation
    {
        Subject<Unit> openAnimeBegin { get; set; } = default;
        Subject<Unit> openAnimeEnd { get; set; } = default;
        Subject<Unit> closeAnimeBegin { get; set; } = default;
        Subject<Unit> closeAnimeEnd { get; set; } = default;
        // 変換させない、発行させない

        /// <summary>
        /// アニメーション開始検知(Open)
        /// </summary>
        public IObservable<Unit> OpenAnimeBegin => openAnimeBegin.AsObservable();
        /// <summary>
        /// アニメーション終了検知(Open)
        /// </summary>
        public IObservable<Unit> OpenAnimeEnd => openAnimeEnd.AsObservable();
        /// <summary>
        /// アニメーション開始検知(Close)
        /// </summary>
        public IObservable<Unit> CloseAnimeBegin => closeAnimeBegin.AsObservable();
        /// <summary>
        /// アニメーション終了検知(Close)
        /// </summary>
        public IObservable<Unit> CloseAnimeEnd => closeAnimeEnd.AsObservable();

        [SerializeField] CanvasGroup group = default;
        [SerializeField] Animation animeCompo = default;
        [SerializeField] PopupAnimationScriptableObject animeSetting = default;

        private void Awake()
        {
            openAnimeBegin = new Subject<Unit>();
            openAnimeEnd = new Subject<Unit>();
            closeAnimeBegin = new Subject<Unit>();
            closeAnimeEnd = new Subject<Unit>();
        }

        /// <summary>
        /// popup生成時、見えず、触れない状態にする
        /// </summary>
        public void Start()
        {
            group.alpha = 0;
            group.blocksRaycasts = false;
        }

        /// <summary>
        /// アニメーション再生
        /// true: Open
        /// false : Close
        /// </summary>
        /// <param name="isOpen"></param>
        public void Play(bool isOpen)
        {
            if (isOpen)
                Open(this.GetCancellationTokenOnDestroy()).Forget();
            else
                Close(this.GetCancellationTokenOnDestroy()).Forget();
        }

        /// <summary>
        /// ブロッキング処理も兼ねる
        /// </summary>
        /// <param name="token"></param>
        /// <returns></returns>
        async UniTaskVoid Open(CancellationToken token)
        {
            group.blocksRaycasts = false;
            openAnimeBegin.OnNext(Unit.Default);

            if (animeCompo.Play(animeSetting.OpenClip))
                await UniTask.WaitWhile(() => animeCompo.isPlaying, cancellationToken: token);

            openAnimeEnd.OnNext(Unit.Default);
            group.blocksRaycasts = true;
        }

        /// <summary>
        /// ブロッキング処理も兼ねる
        /// </summary>
        /// <param name="token"></param>
        /// <returns></returns>
        async UniTaskVoid Close(CancellationToken token)
        {
            group.blocksRaycasts = false;
            closeAnimeBegin.OnNext(Unit.Default);

            if (animeCompo.Play(animeSetting.CloseClip))
                await UniTask.WaitWhile(() => animeCompo.isPlaying, cancellationToken: token);

            closeAnimeEnd.OnNext(Unit.Default);
            group.blocksRaycasts = true;
        }

        private void Reset()
        {
            group = GetComponent<CanvasGroup>();
            animeCompo = gameObject.GetOrAddComponect<Animation>();

#if UNITY_EDITOR
            animeSetting = PopupAnimationScriptableObject.SetSetting();
            if (animeSetting == null)
                return;

            if (animeSetting.OpenClip != null)
                animeCompo.AddClip(animeSetting.OpenClip, animeSetting.OpenClip.name);

            if (animeSetting.CloseClip != null)
                animeCompo.AddClip(animeSetting.CloseClip, animeSetting.CloseClip.name);
#endif
        }

        private void OnDestroy()
        {
            openAnimeEnd?.Dispose();
            closeAnimeEnd?.Dispose();
        }
    }
}
*/