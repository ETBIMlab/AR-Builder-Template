using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.Windows.Speech;

//by Albert De La Cruz
public class EnvironmentSetterAudio : MonoBehaviour
{

    private AudioSource envSource;
    public AudioClip changeSpaceAudio;
    public AudioClip changeLevelAudio;
    public AudioClip changeSizeAudio;
    public float volume = 1F;

    // Start is called before the first frame update
    void Start()
    {
        envSource = GameObject.Find("EnvironmentSetter").GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void setSpace()
    {
        envSource.PlayOneShot(changeSpaceAudio, volume);
    }

    public void shiftLevel()
    {
        envSource.PlayOneShot(changeLevelAudio, volume);
    }

    public void changeView()
    {
        envSource.PlayOneShot(changeSizeAudio, volume);
    }


}
