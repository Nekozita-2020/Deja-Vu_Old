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

    private void OnPrefabLoad(string LoadPrefab)
    {
        // プレハブを取得
        GameObject LoadObject = (GameObject)Resources.Load(LoadPrefab);

        // プレハブを元にインスタンスを生成する
        GameObject Instance = Instantiate(LoadObject, new Vector3(0.0f, 0.0f, 0.0f), Quaternion.identity);
    }

}