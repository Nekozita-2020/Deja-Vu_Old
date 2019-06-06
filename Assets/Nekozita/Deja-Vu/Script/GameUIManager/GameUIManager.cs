using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameUIManager : MonoBehaviour
{

    void Start()
    {
        // 使用していないアセットをアンロードしてメモリを解放
        Resources.UnloadUnusedAssets();

        // シーンに必要なアセットをロード
        // OnPrefabLoad("Grape");
        // OnPrefabLoad("WoterFloar");

        // シーンをフェードイン
        SceneController.Instance.FadeIn();
    }

}