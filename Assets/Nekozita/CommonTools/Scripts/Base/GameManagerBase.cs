using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nekozita
{
    public class GameManagerBase : MonoBehaviour
    {
        [Header("再生するBGM")]
        [SerializeField] private AudioClip PlayBGM = null;



        protected virtual void Awake()
        {
            // 使用していないアセットをアンロードしてメモリを解放
            Resources.UnloadUnusedAssets();

            /*
            // フェードインしてシーンをスタートさせる
            SceneController.Instance?.FadeIn();
            */

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