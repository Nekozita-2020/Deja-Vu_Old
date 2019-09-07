using System;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine;
using System.Collections.Generic;
using System.Linq;

/// <summary>
/// Resourcesディレクトリ以下のプレハブやファイルへの「パスを管理するクラス」を自動生成するクラス
/// </summary>
public static class ResourcesPathClassGenerator
{

    // コマンド名
    private const string COMMAND_NAME = "Tools/Create/ResourcesPath";

    // パスをまとめるDictionary
    private static Dictionary<string, string> _filePathDict, _directoryPathDict;

    // パスを管理するクラスを作成します
    [MenuItem(COMMAND_NAME)]
    private static void CreatePathClass()
    {

        // ディクショナリー初期化
        _filePathDict = new Dictionary<string, string>();
        _directoryPathDict = new Dictionary<string, string>();

        // Resourcesディレクトリのパスを全て取得
        string[] resourcesDirectoryPaths = Directory.GetDirectories("Assets", "Resources", SearchOption.AllDirectories);

        // 各Resourcesディレクトリ内のディレクトリとファイルのパスを全て取得
        foreach (string resourcesDirectoryPath in resourcesDirectoryPaths)
        {
            SetFilePath(resourcesDirectoryPath, "");
            SetDirectoryPath(resourcesDirectoryPath);
        }

        // 定数クラス作成
        ConstantsClassCreator.Create("ResourcesPath", "Resources以下のプレハブやファイルパスを定数で管理するクラス", _filePathDict);
        ConstantsClassCreator.Create("ResourcesDirectoryPath", "Resources以下のディレクトリパスを定数で管理するクラス", _directoryPathDict);
    }

    // 指定したパスのResourcesディレクトリ内に含まれる全ディレクトリへのパスを設定
    private static void SetDirectoryPath(string parentPath)
    {

        // 指定したパスのディレクトリ内に含まれる全ディレクトリへのパスを取得
        string[] childPaths = Directory.GetDirectories(parentPath, "*", SearchOption.AllDirectories);

        // 最初に/が入らないようにResources以下のパスを取得し設定
        foreach (string childPath in childPaths)
        {
            string relativePath = childPath.Substring(parentPath.Length + 1, childPath.Length - parentPath.Length - 1);
            _directoryPathDict[relativePath] = relativePath;

            // ディレクトリ内のファイルへのパスを設定
            SetFilePath(childPath, relativePath + "/");
        }
    }

    // 指定したパスのディレクトリ内に含まれる全ファイルへのパスを設定
    private static void SetFilePath(string absolutePath, string relativePath)
    {
        // 指定したパスのディレクトリ内に含まれる全ファイルへのパスを取得
        string[] childPaths = Directory.GetFiles(absolutePath, "*", SearchOption.TopDirectoryOnly);

        // パスを取得し設定
        foreach (string childPath in childPaths)
        {

            // 拡張子からファイルの種類を取得、未定義の拡張子(.metaとか)の場合はこのファイルへのパスは作成しない
            string fileType = GetFileTypeFromExtention(Path.GetExtension(childPath));
            if (string.IsNullOrEmpty(fileType))
            {
                continue;
            }

            // ファイルの種類+ファイル名でパスを設定
            string fileName = Path.GetFileNameWithoutExtension(childPath);
            string key = fileType + fileName;

            if (_filePathDict.ContainsKey(key))
            {
                Debug.Log(key + "が重複しています！");
            }

            // BGM鳴らす時に"ファイル名"が指定し辛いのでパスを
            if (fileType == "Audio")
            {
                // ファイル名のみでアクセスしたいファイルタイプの場合はパスは入れない
                _filePathDict[key] = fileName;
            }
            else
            {
                // 基本的には「パス＋ファイル名」でアクセスできるようにする
                _filePathDict[key] = relativePath + fileName;
            }
        }
    }

    // 拡張子に対応するファイルの種類名を取得
    // パス管理ファイルが冗長になるので必要なファイルタイプだけにする
    private static string GetFileTypeFromExtention(string extension)
    {
    
        if (new List<string>() { ".prefab" }.Contains(extension))
        {
            return "Prefab";
        }
        else if (new List<string>() { ".wav", ".mp3", ".ogg", ".aif", ".aiff", ".xm", ".mod", ".it", ".s3m" }.Contains(extension))
        {
            return "Audio";
        }
        else if (new List<string>() { ".anim" }.Contains(extension))
        {
            return "Animation";
        }
        else if (new List<string>() { ".mov", ".mpg", ".mpeg", ".mp4", ".avi", ".asf" }.Contains(extension))
        {
            return "Movie";
        }

        /*
        else if (new List<string>() { ".physicmaterial" }.Contains(extension))
        {
            return "Physicmaterial";
        }
        else if (new List<string>() { ".cubemap", ".hdr" }.Contains(extension))
        {
            return "Cubemap";
        }
        else if (new List<string>() { ".ttf", ".otf", ".dfont" }.Contains(extension))
        {
            return "Font";
        }
        else if (new List<string>() { ".mat", ".material" }.Contains(extension))
        {
            return "Material";
        }
        else if (new List<string>() { ".fbx", ".obj", ".max", ".blend" }.Contains(extension))
        {
            return "Mesh";
        }
        else if (new List<string>() { ".shader" }.Contains(extension))
        {
            return "Shader";
        }
        else if (new List<string>() { ".txt", ".htm", " .html", ".xml", ".bytes", ".json", ".csv", ".yaml", ".fnt" }.Contains(extension))
        {
            return "Text";
        }
        else if (new List<string>() { ".exr", ".psd", ".tif", ".tiff", ".jpg", ".tga", ".png", ".gif", ".bmp", ".iff", ".pict" }.Contains(extension))
        {
            return "Texture";
        }
        else if (new List<string>() { ".asset" }.Contains(extension))
        {
            return "Asset";
        }
        else if (new List<string>() { ".unity" }.Contains(extension))
        {
            return "Scene";
        }
        */
        return "";
    }

}