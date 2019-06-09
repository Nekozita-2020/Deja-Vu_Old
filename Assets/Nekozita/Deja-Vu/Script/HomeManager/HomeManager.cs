using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeManager : MonoBehaviour
{

    void Start()
    {
        // 使用していないアセットをアンロードしてメモリを解放
        Resources.UnloadUnusedAssets();

        // シーンに必要なアセットをロード
        ObjectManager.Instance.OnPrefabLoad(ResourcesFilePath.PREFAB_GRAPE);
        ObjectManager.Instance.OnPrefabLoad(ResourcesFilePath.PREFAB_WATER_FLOAR);

        // シーンをフェードイン
        SceneController.Instance.FadeIn();
    }

}