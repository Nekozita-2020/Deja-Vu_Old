using System;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine;

/// <summary>
/// 【説明】サウンドのファイル名を定数で管理するクラスを作成するスクリプト
/// 1. Unityメニュー「Tools/Create/SoundConfig.cs」を実行する。
/// 2. EXPORT_PATHのパスにSoundConfig.csファイルが作成される。
/// 3. SoundManager内の大ローマ字引数が使えるようになり、格段に使いやすくなる！
/// </summary>
public static class SoundConfigCreator
{

    private const string COMMAND_NAME = "Tools/Create/SoundConfig_File";        // コマンド名
    private const string EXPORT_PATH = "Assets/Nekozita/CommonTools/Resources/Scripts/SoundManager/SoundConfig.cs"; //作成したスクリプトを保存するパス

    // ファイル名(拡張子あり、なし)
    private static readonly string FILENAME = Path.GetFileName(EXPORT_PATH);
    private static readonly string FILENAME_WITHOUT_EXTENSION = Path.GetFileNameWithoutExtension(EXPORT_PATH);

    /// <summary>
    /// サウンドのファイル名を定数で管理するクラスを作成します
    /// </summary>
    [MenuItem(COMMAND_NAME)]
    public static void Create()
    {
        if (!CanCreate())
        {
            return;
        }

        CreateScript();

        EditorUtility.DisplayDialog(FILENAME, EXPORT_PATH + "\n\nファイルの作成が完了しました", "OK");
    }

    /// <summary>
    /// スクリプトを作成します
    /// </summary>
    public static void CreateScript()
    {
        StringBuilder builder = new StringBuilder();

        builder.AppendLine("/// <summary>");
        builder.AppendLine("/// サウンド名を定数で管理するクラス");
        builder.AppendLine("/// </summary>");
        builder.AppendFormat("public static class {0}", FILENAME_WITHOUT_EXTENSION).AppendLine();
        builder.AppendLine("{");

        // 指定したパスのリソースを全て取得
        object[] bgmList = Resources.LoadAll("Sound/BGM");
        object[] seList = Resources.LoadAll("Sound/SE");

        foreach (AudioClip bgm in bgmList)
        {
            builder.Append("\t").AppendFormat(@"  public const string BGM_{0} = ""{1}"";", bgm.name.ToUpper(), bgm.name).AppendLine();
        }

        builder.AppendLine("\t");

        foreach (AudioClip se in seList)
        {
            builder.Append("\t").AppendFormat(@"  public const string SE_{0} = ""{1}"";", se.name.ToUpper(), se.name).AppendLine();
        }

        builder.AppendLine("}");

        string directoryName = Path.GetDirectoryName(EXPORT_PATH);
        if (!Directory.Exists(directoryName))
        {
            Directory.CreateDirectory(directoryName);
        }

        File.WriteAllText(EXPORT_PATH, builder.ToString(), Encoding.UTF8);
        AssetDatabase.Refresh(ImportAssetOptions.ImportRecursive);
    }

    /// <summary>
    /// サウンドファイル名を定数で管理するクラスを作成できるかどうかを取得します
    /// </summary>
    [MenuItem(COMMAND_NAME, true)]
    private static bool CanCreate()
    {
        return !EditorApplication.isPlaying && !Application.isPlaying && !EditorApplication.isCompiling;
    }

}