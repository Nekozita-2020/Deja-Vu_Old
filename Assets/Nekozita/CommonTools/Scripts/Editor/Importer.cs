using UnityEngine;
using UnityEditor;

/// <summary>
/// Assetをインポートする毎にインポートするファイルに設定をする等、自動で処理ができるスクリプト
/// </summary>
public sealed class Importer : AssetPostprocessor
{

    // returnの値が小さいほど優先される
    public override int GetPostprocessOrder()
    {
        return 0;
    }

    //==================================================================
    // Audio設定
    //==================================================================
    /*
    // サウンドファイルのインポート設定 サウンドファイルがインポートされる直前に呼び出される
    void OnPreprocessAudio()
    {
        // インポート時のAudioファイルを設定するクラス
        AudioImporter audioImporter = assetImporter as AudioImporter;

        // パス名にBGMが含まれているか
        // これを利用してSEとBGMの初期設定を分けるとか
        // if(audioImporter.assetPath.Contains("BGM")){
        // }

        // 各設定
        audioImporter.forceToMono = true;           // モノラルにするか
        audioImporter.format = AudioImporterFormat.Compressed;  // フォーマット設定 Native or Compressed
        audioImporter.threeD = false;               // 3Dサウンドにするか
        audioImporter.compressionBitrate = 96000;       // ビットレートの設定[kbps]
        audioImporter.hardware = true;              // iOS上でオーディオを圧縮するか
        audioImporter.loopable = false;             // AndroidまたはiOS上でループを保持するか

        // 読み込み時設定
        // DecompressOnLoad ロード中にサウンドを解凍．圧縮されたサウンドを解凍する時１０倍以上のメモリを使用．大きいファイルには不向き．
        // CompressedInMemory メモリ上に圧縮したサウンドを保持，再生中に解凍．オーバヘッドが小さい．サイズが大きいファイル向き
        // StreamFromDisc 直接オーディデータを流す。こ非常に長い曲向き。
        audioImporter.loadType = AudioImporterLoadType.DecompressOnLoad;
    }
    */

    /// <summary>
    /// サウンドファイルをインポートする毎に処理を行う
    /// "完全なインポート後"ではなく、インポート前の"最終段階"的なタイミング
    /// 引数にインポートファイルが格納されるが、メソッド処理後は破棄されてしまう
    /// </summary>

    void OnPostprocessAudio(AudioClip Soundfile)
    {
        EditorUtility.DisplayDialog(Soundfile.ToString(), "ファイルをインポートします" + "\n\nUnityメニュー\n「Tools/Create/SoundConfig.cs」の実行を忘れずに！", "OK");
    }

    //==================================================================
    // Texture設定
    //==================================================================
    /*
    // Textureファイルのインポート設定 Textureファイルがインポートされる直前に呼び出される
    void OnPreprocessTexture()
    {
        // インポート時のTextureファイルを設定するクラス
        TextureImporter textureImporter = assetImporter as TextureImporter;

        // 各設定
        textureImporter.wrapMode = TextureWrapMode.Repeat;  // テクスチャをタイルにしたときの処理
        textureImporter.filterMode = FilterMode.Point;      // 引き延ばした時にどうするか


        // パス名にGUIが含まれているか
        if (textureImporter.assetPath.Contains("GUI"))
        {

            // テクスチャタイプ設定
            textureImporter.textureType = TextureImporterType.GUI;

        }
    }
    */
}