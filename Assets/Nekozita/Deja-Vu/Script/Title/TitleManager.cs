using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : GameManagerBase
{
    [SerializeField] private LogoWindowView m_LogoWindowView = null;

    void Start()
    {
        // 必要なプレハブを生成
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // ロゴウインドウを削除
        Destroy(m_LogoWindowView.gameObject);
    }

}
