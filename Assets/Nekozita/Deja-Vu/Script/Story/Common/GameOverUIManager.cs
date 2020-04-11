using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverUIManager : GameManagerBase
{

    public void OnSceneRestart()
    {
        OnSceneChange(SceneManager.GetActiveScene().name);
    }

}
