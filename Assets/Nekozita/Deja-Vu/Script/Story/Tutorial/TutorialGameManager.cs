using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialGameManager : StageGameManagerBase
{

    [SerializeField] private GameObject Deja_Vu_Tutorial = null;

    public override void OnPause()
    {
        base.OnPause();

        // チュートリアルを表示/非表示
        if (Deja_Vu_Tutorial.activeInHierarchy) Deja_Vu_Tutorial.SetActive(false);
        else Deja_Vu_Tutorial.SetActive(true);
    }

}