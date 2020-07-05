using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Nekozita
{
    public class GameOverUIManager : GameManagerBase
    {

        public void OnSceneRestart()
        {
            OnSceneChange((SceneLavel)SceneManager.GetActiveScene().buildIndex);
        }

    }
}