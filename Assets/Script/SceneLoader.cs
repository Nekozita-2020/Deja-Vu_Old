using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{

    // 指定したシーンをロード
    public void OnSceneLoad(string SceneName)
    {
        SceneManager.LoadScene(SceneName);
    }
}