using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Nekozita.PathHandler;

namespace Nekozita
{
    public static class UIManager
    {
        public static void OnInstantiateWindow(string _LoadWindowName, Transform _Parent = null, WindowDataPack _Data = null)
        {
            GameObject m_Window = OnLoadWindow(_LoadWindowName);

            if (m_Window != null)
            {
                var m_Win = UnityEngine.Object.Instantiate(m_Window, _Parent);

                // Windowに引き継ぐデータがある場合、引き継ぎを行う
                if (_Data != null)
                    m_Win.GetComponent<WindowBase>().OnInheritData(_Data);
            }
            else
                Debug.Log("Missing Load!!  Because " + "<color=#0000ffff>"
                    + _LoadWindowName + "</color>" + " is Nothing in WindowFolder.");
        }

        /// <summary>
        /// 指定したWindowをロードし、Windowに渡すデータを引き継いだ上でGameObject型で返す
        /// </summary>
        /// <param name="_LoadWindow"></param>
        /// <param name="_Data"></param>
        /// <returns></returns>
        public static GameObject OnLoadWindow(string _LoadWindowName)
        {
            // 指定したWindowをロード(Windowが存在しない場合はnull)
            GameObject m_Window = (GameObject)Resources.Load(ResourcesPathHandler.WINDOW_FOLDER + _LoadWindowName);

            return m_Window;
        }
    }
}