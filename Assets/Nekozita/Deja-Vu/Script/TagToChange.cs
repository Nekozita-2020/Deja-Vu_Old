using UnityEngine;
using System.Collections;

public class TagToChange : MonoBehaviour
{

    void Start()
    {

    }

    public void OnTagChange()
    {
        switch (this.tag)
        {
            case "Positive":
                this.tag = "Negative";
                break;
            case "Negative":
                this.tag = "Positive";
                break;
        }
    }

}