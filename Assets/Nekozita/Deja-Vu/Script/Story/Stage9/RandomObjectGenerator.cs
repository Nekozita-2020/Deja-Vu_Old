using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomObjectGenerator : MonoBehaviour
{
    [SerializeField] private List<GameObject> ObjectList = null;

    private void Start()
    {
		OnRandomObjectGenerate();
	}

    private void OnRandomObjectGenerate()
	{
        int ListNum = Random.Range(0, ObjectList.Count);
        Instantiate(ObjectList[ListNum], this.transform);
	}

}
