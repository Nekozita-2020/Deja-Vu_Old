/*
using UnityEngine;
using UniRx.Async;
using System.Threading;
using UnityEngine.UI;
using UniRx;
using UniRx.Async;
using UniRx.Async.Triggers;
using System.Threading;
using System;

namespace Teco
{
    /// <summary>
    /// 外部パラメータ用
    /// </summary>
    public abstract class PopupParam { }


    /// <summary>
    /// 戻る遷移の制限
    /// </summary>
    public enum BackTransitionLimit
    {
        Unlimited,  // 有効
        Invalid,    // 無効
    }

    /// <summary>
    /// OnBackTransitionがどこを起点に呼ばれたか
    /// </summary>
    public enum PopupBackTransitionType
    {
        NegativeButton = 0,
        BackButton,
    }

    /// <summary>
    /// 利用者側でViewやmodelは作成しないと扱いづらいと思うのでベースクラスの段階では作成しなかった
    /// PopupBaseを継承して利用する
    /// </summary>
    [RequireComponent(typeof(Canvas)),
     RequireComponent(typeof(CanvasGroup)),
     RequireComponent(typeof(GraphicRaycaster)),
     RequireComponent(typeof(LockTransformInspector)),
     RequireComponent(typeof(NoGraphicTouchListener))]
    public class PopupBase : MonoBehaviour
    {
        /// <summary>
        /// アニメーション管理
        /// </summary>
        IUIAnimation uiAnime = default;

        /// <summary>
        /// 戻る遷移に対する挙動
        /// </summary>
        [field: SerializeField, RenameField(nameof(BackTransitionType))]
        public BackTransitionLimit BackTransitionType { get; private set; }

        /// <summary>
        /// 外部から設定するParameter
        /// アニメーションの検知は出来るので、IUIAnimationを利用すれば事足りると思う
        /// </summary>
        protected PopupParam param = default;

        /// <summary>
        /// 破壊予約
        /// 差し込みで行いたいことがあるので、instanceを即時破棄したくない
        /// </summary>
        public bool IsDestoryReservation { get; private set; } = false;

        /// <summary>
        /// 初期化処理
        /// </summary>
        /// <param name="token"></param>
        /// <returns></returns>
        public async virtual UniTask Init(CancellationToken token) { }

        /// <summary>
        /// -- BackButton及び、否定ボタンの閉じる処理 --
        /// ※Backボタンと、否定ボタンの処理を一元化したい
        /// </summary>
        public virtual void OnBackTransition(
            PopupBackTransitionType type = PopupBackTransitionType.NegativeButton) => CloseReservation();

        /// <summary>
        /// 閉じる予約( popup内部で呼ぶやつ)
        /// 破棄は即時性のあるものではない
        /// </summary>
        protected void CloseReservation()
        {
            // 既に削除済み
            if (IsDestoryReservation)
            {
                LogGer.Error($"削除済みです!->{gameObject?.name}");
                return;
            }

            // 破棄予約
            IsDestoryReservation = true;

            // Closeアニメーション開始
            GetUIAnime().Play(false);
        }

        /// <summary>
        /// アニメーション管理(ブロッキング)
        /// 無ければCacheする
        /// </summary>
        /// <returns></returns>
        public IUIAnimation GetUIAnime()
        {
            if (uiAnime == null)
                uiAnime = GetComponent<IUIAnimation>();

            return uiAnime;
        }

        /// <summary>
        /// 外部からのパラメータセット
        /// </summary>
        /// <param name="popupParam"></param>
        public void SetParam(PopupParam popupParam) => param = popupParam;

        private void Reset()
        {
            if (GetComponent<IUIAnimation>() == null)
                gameObject.AddComponent<UIAnimation>();
        }
    }
}
*/