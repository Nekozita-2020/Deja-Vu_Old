using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StageClearUIManager : GameManagerBase
{

    [SerializeField] GameObject ClearMessageUI = null;
    [SerializeField] GameObject GrapeMemoryWin_BackGround = null;
    [SerializeField] Text m_NewMemoryText = null;

    [Header("クリアしたステージ番号(=このステージの番号)")]
    [SerializeField] private int ClearStegeNum = 0;

    // ストーリーの進捗度を取得(クリアしたステージ数)
    private int StoryProgress;



    private void Start()
    {
        // ストーリーの進捗度を取得(クリアしたステージ数)
        StoryProgress = PlayerPrefs.GetInt("ClearStage", -1);

        if(StoryProgress < ClearStegeNum)
        {
            // 【重要】このステージを初めてクリアした時のみ、ストーリー進捗度を進める
            AddStoryProgress();

            // 新たな記憶が解放されたテキストを出す
            m_NewMemoryText.gameObject.SetActive(true);
        }

        ClearMessageUI?.SetActive(true);
    }

    /// <summary>
    /// ストーリーの進捗度を進めてセーブ
    /// </summary>
    private void AddStoryProgress()
    {
        PlayerPrefs.SetInt("ClearStage", ClearStegeNum);
        PlayerPrefs.Save();
    }

    public void OnClickGrapeMemoryWinButton()
    {
        GrapeMemoryWin_BackGround.SetActive(true);

        // プレハブをロードしていなければロード(=子オブジェクトが閉じるボタンしか無いなら)
        if (GrapeMemoryWin_BackGround.transform.childCount <= 1)
        {
            GameObject Obj = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_GRAPE_MEMORY_WINDOW);

            // 第2引数をfalseにすることで、子オブジェクトにした時、プレハブのScale値などが保たれる
            Obj.transform.SetParent(GrapeMemoryWin_BackGround.transform, false);

            // プレハブ側で値が設定されている為、仕方なくここで再配置
            Obj.transform.localPosition = new Vector3(0, 0, 0);
        }
    }

    public void OnClickCloseGrapeMemoryWinButton()
    {
        GrapeMemoryWin_BackGround.SetActive(false);
    }

}
