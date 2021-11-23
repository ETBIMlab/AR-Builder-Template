using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Windows.Speech;

public class TextureChanger : MonoBehaviour
{
    KeywordRecognizer recognizer = null;
    
    private void Start()
    {
        List<string> keywords = new List<string>();
        string prompt = "change " + gameObject.name + " surface to material ";
        string newPrompt = "";
        for (int i = 1; i < 6; i++)
        {
            newPrompt = prompt + i;
            keywords.Add(newPrompt);
        }
        
        string[] keywordsArr = keywords.ToArray();
        
        recognizer = new KeywordRecognizer(keywordsArr, ConfidenceLevel.Medium);
        recognizer.OnPhraseRecognized += Recognizer_OnPhraseRecognized;
        recognizer.Start();
        

    }
    private void Recognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        string command = args.text.Substring(args.text.Length - 1);
        
        MeshRenderer rend = gameObject.GetComponent<MeshRenderer>();
        Material[] mats = rend.sharedMaterials;
        MasterScript ms = gameObject.GetComponent<MasterScript>();

        switch (command)
        {
            case "1":
                mats[0] = ms.material1;
                break;

            case "2":
                mats[0] = ms.material2;
                break;

            case "3":
                mats[0] = ms.material3;
                break;

            case "4":
                mats[0] = ms.material4;
                break;

            case "5":
                mats[0] = ms.material5;
                break;
        }
        rend.sharedMaterials = mats;
    }
}
