using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// シングルトンでBGMとSEの管理をするマネージャ
/// </summary>
public class SoundManager : SingletonMonoBehaviour<SoundManager>
{

    // オーディオファイルのパス
    private const string BGM_PATH = "Sound/BGM";
    private const string SE_PATH = "Sound/SE";

    // BGMがフェードするのにかかる時間
    public const float BGM_FADE_SPEED_RATE_HIGH = 0.9f;
    public const float BGM_FADE_SPEED_RATE_LOW = 0.3f;
    private float _bgmFadeSpeedRate = BGM_FADE_SPEED_RATE_HIGH;

    // 次に流すBGM名、SE名
    private string _nextBGMName;
    private string _nextSEName;

    // BGMをフェードアウト中か
    private bool _isFadeOut = false;

    // BGM用、SE用に分けてオーディオソースを持つ
    private AudioSource _bgmSource = null;
    private List<AudioSource> _seSourceList = null;
    private const int SE_SOURCE_NUM = 5;

    // 全AudioClipを保持
    private Dictionary<string, AudioClip> _bgmDic, _seDic;

    //=================================================================================
    //初期化
    //=================================================================================

    private void Awake()
    {
        /*
        if (this != Instance)
        {
            Destroy(this);
            return;
        }
        */
        // シーン遷移後に削除されないようにする
        DontDestroyOnLoad(this.gameObject);

        //オーディオリスナーおよびオーディオソースをSE+1(BGMの分)作成
        gameObject.AddComponent<AudioListener>();
        for (int i = 0; i < SE_SOURCE_NUM + 1; i++)
        {
            gameObject.AddComponent<AudioSource>();
        }

        //作成したオーディオソースを取得して各変数に設定、ボリュームも設定
        AudioSource[] audioSourceArray = GetComponents<AudioSource>();
        _seSourceList = new List<AudioSource>();

        for (int i = 0; i < audioSourceArray.Length; i++)
        {
            audioSourceArray[i].playOnAwake = false;

            if (i == 0)
            {
                audioSourceArray[i].loop = true;
                _bgmSource = audioSourceArray[i];
                // BGMのデフォルト音量を設定
                _bgmSource.volume = PlayerPrefs.GetFloat("BGM_VOLUME_KEY", 0.3f);
            }
            else
            {
                _seSourceList.Add(audioSourceArray[i]);
                // SEのデフォルト音量を設定
                audioSourceArray[i].volume = PlayerPrefs.GetFloat("SE_VOLUME_KEY", 0.5f);
            }

        }

        //リソースフォルダから全SE&BGMのファイルを読み込みセット
        _bgmDic = new Dictionary<string, AudioClip>();
        _seDic = new Dictionary<string, AudioClip>();

        object[] bgmList = Resources.LoadAll(BGM_PATH);
        object[] seList = Resources.LoadAll(SE_PATH);

        foreach (AudioClip bgm in bgmList)
        {
            _bgmDic[bgm.name] = bgm;
        }
        foreach (AudioClip se in seList)
        {
            _seDic[se.name] = se;
        }

    }

    //=================================================================================
    //SE
    //=================================================================================

    /// <summary>
    /// 指定したファイル名のSEを流す。第二引数のdelayに指定した時間だけ再生までの間隔を空ける
    /// </summary>
    public void PlaySE(string seName = null, float delay = 0.0f)
    {
        if (!_seDic.ContainsKey(seName))
        {
            Debug.Log(seName + "という名前のSEがありません");
            return;
        }

        _nextSEName = seName;
        Invoke("DelayPlaySE", delay);
    }

    private void DelayPlaySE()
    {
        foreach (AudioSource seSource in _seSourceList)
        {
            if (!seSource.isPlaying)
            {
                seSource.PlayOneShot(_seDic[_nextSEName] as AudioClip);
                return;
            }
        }
    }

    //=================================================================================
    //BGM
    //=================================================================================

    /// <summary>
    /// 指定したファイル名のBGMを流す。ただし既に流れている場合は前の曲をフェードアウトさせてから。
    /// 第二引数のfadeSpeedRateに指定した割合でフェードアウトするスピードが変わる
    /// </summary>
    public void PlayBGM(string bgmName, float fadeSpeedRate = BGM_FADE_SPEED_RATE_HIGH)
    {
        if (!_bgmDic.ContainsKey(bgmName))
        {
            Debug.Log(bgmName + "という名前のBGMがありません");
            return;
        }

        // 現在BGMが流れていない時はそのまま流す
        if (!_bgmSource.isPlaying)
        {
            _nextBGMName = "";
            _bgmSource.clip = _bgmDic[bgmName] as AudioClip;
            _bgmSource.Play();
        }
        // 違うBGMが流れている時は、流れているBGMをフェードアウトさせてから次を流す。同じBGMが流れている時はスルー
        else if (_bgmSource.clip.name != bgmName)
        {
            _nextBGMName = bgmName;
            FadeOutBGM(fadeSpeedRate);
        }
    }

    /// <summary>
    /// BGMをすぐに止める
    /// </summary>
    public void StopBGM()
    {
        _bgmSource.Stop();
    }

    /// <summary>
    /// 現在流れている曲をフェードアウトさせる
    /// fadeSpeedRateに指定した割合でフェードアウトするスピードが変わる
    /// </summary>
    public void FadeOutBGM(float fadeSpeedRate = BGM_FADE_SPEED_RATE_LOW)
    {
        _bgmFadeSpeedRate = fadeSpeedRate;
        _isFadeOut = true;
    }

    private void Update()
    {
        if (!_isFadeOut)
        {
            return;
        }

        // 徐々にボリュームを下げていき、ボリュームが0になったらボリュームを戻し次の曲を流す
        _bgmSource.volume -= Time.deltaTime * _bgmFadeSpeedRate;
        if (_bgmSource.volume <= 0)
        {
            _bgmSource.Stop();
            _bgmSource.volume = PlayerPrefs.GetFloat("BGM_VOLUME_KEY", 0.3f);
            _isFadeOut = false;

            if (!string.IsNullOrEmpty(_nextBGMName))
            {
                PlayBGM(_nextBGMName);
            }
        }

    }

    //=================================================================================
    //音量変更
    //=================================================================================

    /// <summary>
    /// BGMとSEのボリュームを別々に変更&保存
    /// </summary>
    public void ChangeVolume(float BGMVolume, float SEVolume)
    {
        _bgmSource.volume = BGMVolume;
        foreach (AudioSource seSource in _seSourceList)
        {
            seSource.volume = SEVolume;
        }

        PlayerPrefs.SetFloat("BGM_VOLUME_KEY", BGMVolume);
        PlayerPrefs.SetFloat("SE_VOLUME_KEY", SEVolume);
    }

}