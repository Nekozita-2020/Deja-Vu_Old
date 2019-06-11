using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeManager : MonoBehaviour
{
    [SerializeField] HomeMenu Story = new HomeMenu();
    [SerializeField] HomeMenu GrapeMemory = null;
    [SerializeField] HomeMenu Setting = null;
    [SerializeField] HomeMenu Credit = null;

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

public class HomeMenu
{
    public GameObject Button = null;
    public GameObject Window = null;
}