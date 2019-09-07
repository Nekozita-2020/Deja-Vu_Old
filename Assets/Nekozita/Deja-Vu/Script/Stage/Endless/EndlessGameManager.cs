using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;

public class EndlessGameManager : StageGameManagerBase
{

    // ストーリーの進捗度(クリアしたステージ数)
    private int StoryProgress;

    // ランダムに生成するオブジェクトリスト
    private List<GameObject> RandomGenerateObject = new List<GameObject>();

    // Resoucesディレクトリのパス
    private const string m_ResoucesPath = "Assets/Nekozita/Deja-Vu/Resources/";



    protected override void Init()
    {
        base.Init();

        // ストーリーの進捗度を取得(クリアしたステージ数)
        StoryProgress = PlayerPrefs.GetInt("ClearStage", 0);

        // Storyディレクトリ以下のGameObjectを全て取得
        string StoryDirectoryPath = m_ResoucesPath + ResourcesDirectoryPath.PREFAB_STORY;
        SetObjectList(StoryDirectoryPath + "/Stage");
    }

    /// <summary>
    /// 指定したディレクトリ(ディレクトリパス)以下の全ファイルを取得
    /// </summary>
    /// <param name="_DirectoryPath"></param>
    private void SetObjectList(string _DirectoryPath)
    {
        for(int i = 0; i <= StoryProgress; i++)
        {
            _DirectoryPath = _DirectoryPath + i;

            // クリアしたステージまでのディレクトリに入っている全オブジェクトパスを取得
            string[] FilePathArray =
                Directory.GetFiles(_DirectoryPath, "*.prefab", SearchOption.AllDirectories);

            // 取得したファイルの中からアセットだけリストに追加する
            foreach (string FilePath in FilePathArray)
            {
                string TargetPath = FilePath.Replace(m_ResoucesPath, "");
                TargetPath = TargetPath.Replace(".prefab", "");
                GameObject obj = ObjectManager.Instance.OnPrefabLoad(TargetPath);

                if (obj != null)
                {
                    RandomGenerateObject.Add(obj);
                }
            }
        }
    }

}
