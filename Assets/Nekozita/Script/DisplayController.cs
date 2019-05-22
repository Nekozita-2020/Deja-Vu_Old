using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayController : MonoBehaviour
{

    //ゲームモード群
    public GameObject StoryDescription;
    public GameObject EndlessDescription;
    public GameObject SettingDescription;
    public GameObject CreditDescription;

    //モード説明を非表示
    void Start()
    {
        DescriptionHide();
    }

    //モード説明を非表示
    public void DescriptionHide()
    {
        StoryDescription.SetActive(false);
        EndlessDescription.SetActive(false);
        SettingDescription.SetActive(false);
        CreditDescription.SetActive(false);
    }

    //各説明欄を表示
    public void DescriptionDisplay(string DescriptionName)
    {
        //新たに説明欄を表示する前に、一度全ての説明欄を非表示
        DescriptionHide();

        switch (DescriptionName)
        {
            case "Story":
                StoryDescription.SetActive(true);
                break;
            case "Endless":
                EndlessDescription.SetActive(true);
                break;
            case "Setting":
                SettingDescription.SetActive(true);
                break;
            case "Credit":
                CreditDescription.SetActive(true);
                break;
            default:
                break;
        }
    }

}
