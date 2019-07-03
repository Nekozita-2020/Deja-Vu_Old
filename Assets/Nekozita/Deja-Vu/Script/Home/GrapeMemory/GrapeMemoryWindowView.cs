using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class GrapeMemoryWindowView : WindowViewBase
{

    [SerializeField] public Text StillLostMemoryText = null;
    [SerializeField] public List<Text> MemoryList = new List<Text>();
    [SerializeField] public List<Text> Memory_20 = new List<Text>();

}
