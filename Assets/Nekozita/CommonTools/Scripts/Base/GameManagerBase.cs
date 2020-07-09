using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Nekozita
{
    public class GameManagerBase : MonoBehaviour
    {
        [Header("再生するBGM")]
        [SerializeField] private AudioClip PlayBGM = null;



        protected virtual void Awake()
        {
            // 処理を滞りなく始める為に待機をさせる初期化メソッド
            StartCoroutine(SyncInit());
        }

        protected virtual void Start()
        {

        }

        /// <summary>
        /// CommonToolsの生成等、処理の始まるタイミングの辻褄を合わせる為の初期化用メソッド
        /// </summary>
        /// <returns></returns>
        private IEnumerator SyncInit()
        {
            // CommonToolsが生成されるまで待機させて、動作を保証させる
            yield return new WaitUntil(() => EntryPoint.m_MakeToolsFlag);

            if (PlayBGM != null)
            {
                // BGMを再生(同じBGMが再生されていれば未処理)
                SoundManager.Instance.PlayBGM(PlayBGM.name);
            }
        }

        /// <summary>
        /// 指定したシーンへ遷移させる
        /// </summary>
        /// <param name="_SceneLavel">Scene name.</param>
        public void OnSceneChange(SceneLavel _SceneLavel)
        {
            // SceneController.Instance.FadeOut(SceneName);
            SceneLoader.LoadScene(_SceneLavel);
        }
    }
}