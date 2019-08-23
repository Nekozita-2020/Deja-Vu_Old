using UnityEngine;

public class EffectColorChange : MonoBehaviour
{

    public ParticleSystem TargetEffect;
    public Gradient[] ChangeToColor;
    int EffectNunber = 0;



    public void OnColorChange()
    {
		/*
        switch(EffectNunber)
        {
            case 0:
                EffectNunber = 1;
                break;
            case 1:
                EffectNunber = 0;
                break;
        }
        */

		EffectNunber++;

		if (ChangeToColor.Length <= EffectNunber) EffectNunber = 0;

		var After = TargetEffect.colorOverLifetime;
        After.color = new ParticleSystem.MinMaxGradient(ChangeToColor[EffectNunber]);
	}

}