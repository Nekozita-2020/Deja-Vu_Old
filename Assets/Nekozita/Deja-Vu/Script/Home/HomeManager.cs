﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nekozita
{
    public class TestDataPack : WindowDataPack
    {
        public string m_Text;

        public TestDataPack(string _Text)
        {
            m_Text = _Text;
        }
    }

    public class HomeManager : GameManagerBase
    {
        protected override void Start()
        {
            base.Start();
        }

        public void Test()
        {
            string m_Text = "引き継いだデータがあります。";
            var m_DataPack = new TestDataPack(m_Text);
            UIManager.OnInstantiateWindow<TestWindow>("TestWindow", m_UICanvas.transform, m_DataPack);
        }

        public void SceneChangeTest()
        {
            OnSceneChange(SceneLavel.Title);
        }

        /*
        // 各Windowの親となるオブジェクト
        [SerializeField] private GameObject HomeMenu = null;

        // TouchSencer(SettingWindowで専用のセンサーに切り替える為)
        [SerializeField] private GameObject HomeScene_TouchSencer = null;

        // 現在表示しているWindow
        private GameObject NowWindow = null;

        private bool DragFlug = false;



        void Start()
        {
            base.Start();
            // シーンに必要なアセットをロード
            // ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

            // BGMを再生(同じBGMが再生されていれば未処理)
            // SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);
        }

        /// <summary>
        /// 指定されたWindowを表示する
        /// </summary>
        public void OnOpenWindow(string WindowName)
        {
            if (NowWindow != null) this.OnCloseWindow();

            switch (WindowName)
            {
                case "Story":
                    var m_LoadObj = (GameObject)Resources.Load(ResourcesPath.PREFAB_STORY_WINDOW);
                    // プレハブを元にインスタンスを生成する
                    NowWindow = Instantiate(m_LoadObj, HomeMenu.transform);
                    // NowWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_STORY_WINDOW, HomeMenu);
                    break;
                case "GrapeMemory":
                    NowWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_GRAPE_MEMORY_WINDOW, HomeMenu);
                    break;
                case "Setting":
                    HomeScene_TouchSencer.SetActive(false);
                    NowWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_SETTING_WINDOW, HomeMenu);
                    NowWindow.GetComponent<SettingWindow>().DeleteSettingWin =
                        () => HomeScene_TouchSencer.SetActive(true);
                    break;
                case "Credit":
                    NowWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_CREDIT_WINDOW, HomeMenu);
                    break;
            }
        }

        /// <summary>
        /// タッチセンサーをドラッグしたことを検知
        /// </summary>
        public void OnDragFrug_TouchSencer()
        {
            DragFlug = true;
        }

        /// <summary>
        /// 表示中のウインドウを閉じる
        /// </summary>
        public void OnCloseWindow()
        {
            // ドラッグをしていなければ
            if (DragFlug == false)
            {
                // ウインドウが開いていれば閉じる
                if (NowWindow != null) Destroy(NowWindow);
            }

            DragFlug = false;
        }

        // 【デバッグ】
        public void OnClickAllClearButton()
        {
            PlayerPrefs.SetInt("ClearStage", 15);
            PlayerPrefs.Save();
        }
        */
    }
}