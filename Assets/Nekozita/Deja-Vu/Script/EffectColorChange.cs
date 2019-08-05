using UnityEngine;

public class EffectColorChange : MonoBehaviour
{

    public ParticleSystem EffectToChange;
    public Gradient[] ColorToChange;
    int EffectNunber = 0;

    public void OnColorChange()
    {
        switch(EffectNunber)
        {
            case 0:
                EffectNunber = 1;
                break;
            case 1:
                EffectNunber = 0;
                break;
        }
        var After = EffectToChange.colorOverLifetime;
        After.color = new ParticleSystem.MinMaxGradient(ColorToChange[EffectNunber]);
    }

}