using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StageClearUIManager : GameManagerBase
{

    [SerializeField] GameObject ClearMessageUI = null;

    private void Start()
    {
        ClearMessageUI?.SetActive(true);
    }

    public void OnClickGrapeMemoryButton()
    {
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_GRAPE_MEMORY_WINDOW);
    }

}
