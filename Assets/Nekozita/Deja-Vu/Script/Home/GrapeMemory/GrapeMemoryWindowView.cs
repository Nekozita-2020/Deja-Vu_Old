using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GrapeMemoryWindowView : MonoBehaviour
{

    [SerializeField] private Text StillLostMemoryText = null;
    [SerializeField] private Text Memory_3 = null;
    [SerializeField] private Text Memory_5 = null;
    [SerializeField] private Text Memory_8 = null;
    [SerializeField] private Text Memory_10 = null;
    [SerializeField] private Text Memory_13 = null;
    [SerializeField] private Text Memory_15 = null;
    [SerializeField] private Text Memory_18 = null;
    [SerializeField] private Text Memory_19 = null;
    [SerializeField] private List<Text> Memory_20 = new List<Text>();

    void Start()
    {
        // ストーリーの進捗度を取得(クリアしたステージ数)
        int StoryProgress = PlayerPrefs.GetInt("ClearStage", 0);

        for (int i = 3; i <= StoryProgress; i++)
        {
            switch (i)
            {
                case 3:
                    Memory_3.gameObject.SetActive(true);
                    break;
                case 5:
                    Memory_5.gameObject.SetActive(true);
                    break;
                case 8:
                    Memory_8.gameObject.SetActive(true);
                    break;
                case 10:
                    Memory_10.gameObject.SetActive(true);
                    break;
                case 13:
                    Memory_13.gameObject.SetActive(true);
                    break;
                case 15:
                    Memory_15.gameObject.SetActive(true);
                    break;
                case 18:
                    Memory_18.gameObject.SetActive(true);
                    break;
                case 19:
                    Memory_19.gameObject.SetActive(true);
                    break;
                case 20:
                    foreach (Text x in Memory_20) x.gameObject.SetActive(true);
                    StillLostMemoryText.gameObject.SetActive(false);
                    break;
            }
        }
    }


}
