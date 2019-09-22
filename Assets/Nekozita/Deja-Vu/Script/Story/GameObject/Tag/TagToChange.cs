using UnityEngine;
using System.Collections;

public class TagToChange : MonoBehaviour
{

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