using System.Collections;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Windows.Speech;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;

//This is the root script that defines behavior at the root level
//It is to be used by a GameObject at the root of the contruction simulator
//Parker
public class Root : MonoBehaviour
{
    // Environment, shifting, and scaling
    private GameObject player;
    private Vector3 playerPosition;
    private GameObject environmentSetter;
    private GameObject environmentContainer;
    public int shiftAmount;
    
    // Height Calibration
    private float heightOffset;
    private GameObject heightText;

    bool isShiftedUp;
    private bool floorVisible;

    int scaleModeState;
    int currentScale;
    List<scaleState> scaleLevels;

    // Audio
    private AudioSource audioSource;
    public AudioClip spaceSetAudio;
    private EnvironmentSetterAudio setterAudio;

    // User-Created Views
    private GameObject[] viewTargets;
    private GameObject currentViewTarget;

    // Speech Recognition
    KeywordRecognizer keywordRecognizer = null;
    KeywordRecognizer viewKeywordRecognizer = null;
    KeywordRecognizer visKeywordRecognizer = null;

    // Associates strings (voice commands) with function calls allowing different sets of parameters
    Dictionary<string, System.Action> keywords = new Dictionary<string, System.Action>();
    Dictionary<string, System.Action<string>> viewKeywords = new Dictionary<string, System.Action<string>>();
    Dictionary<string, System.Action<bool, GameObject>> visKeywords = new Dictionary<string, System.Action<bool, GameObject>>();

    // Start is called before the first frame update
    void Start()
    {

        audioSource = GetComponent<AudioSource>();

        player = GameObject.Find("Main Camera");
        playerPosition = new Vector3();
        environmentContainer = GameObject.Find("EnvironmentContainer");
        environmentSetter = GameObject.Find("EnvironmentSetter");
        setterAudio = environmentSetter.GetComponent<EnvironmentSetterAudio>();

        initializeHeightCalibration();

        generateVoiceCommands();

        isShiftedUp = false; //player starts on the ground
        floorVisible = false; //turns the floor visible
        scaleModeState = 1;
        currentScale = 0;

        scaleLevels = new List<scaleState>();
        scaleLevels.Add(new scaleState(new Vector3(1.0f, 1.0f, 1.0f), 1f));
        scaleLevels.Add(new scaleState(new Vector3(2.0f, 2.0f, 2.0f), 2f));
        scaleLevels.Add(new scaleState(new Vector3(3.0f, 3.0f, 3.0f), 3f));
        scaleLevels.Add(new scaleState(new Vector3(4.0f, 4.0f, 4.0f), 4f));
        scaleLevels.Add(new scaleState(new Vector3(5.0f, 5.0f, 5.0f), 5f));
        scaleLevels.Add(new scaleState(new Vector3(6.0f, 6.0f, 6.0f), 6f));
        scaleLevels.Add(new scaleState(new Vector3(7.0f, 7.0f, 7.0f), 7f));
        scaleLevels.Add(new scaleState(new Vector3(8.0f, 8.0f, 8.0f), 8f));
        scaleLevels.Add(new scaleState(new Vector3(9.0f, 9.0f, 9.0f), 9f));
        scaleLevels.Add(new scaleState(new Vector3(10.0f, 10.0f, 10.0f), 10f));//index 9
        scaleLevels.Add(new scaleState(new Vector3(.5f, .5f, .5f), .5f));
        scaleLevels.Add(new scaleState(new Vector3(2.25f, 2.25f, 2.25f), 2.25f));
        scaleLevels.Add(new scaleState(new Vector3(2.5f, 2.5f, 2.5f), 2.5f));
        scaleLevels.Add(new scaleState(new Vector3(2.75f, 2.75f, 2.75f), 2.75f));

        this.setVisibility(false, environmentContainer);

        keywords.Add("Set Space", () => { setSpace(); audioSource.PlayOneShot(spaceSetAudio, 1F); });//set the space for the simulator

        keywords.Add("Scale half", () => { scale(0); setterAudio.changeView(); });
        keywords.Add("Scale one", () => { scale(1); setterAudio.changeView(); });
        keywords.Add("Scale two", () => { scale(2); setterAudio.changeView(); });
        keywords.Add("Scale three", () => { scale(3); setterAudio.changeView(); });
        keywords.Add("Scale four", () => { scale(4); setterAudio.changeView(); });

        keywords.Add("Scale five", () => { scale(5); setterAudio.changeView(); });
        keywords.Add("Scale six", () => { scale(6); setterAudio.changeView(); });
        keywords.Add("Scale seven", () => { this.scale(7); setterAudio.changeView(); });
        keywords.Add("Scale eight", () => { this.scale(8); setterAudio.changeView(); });
        keywords.Add("Scale nine", () => { this.scale(9); setterAudio.changeView(); });
        keywords.Add("Scale quarter", () => { this.scale(10); setterAudio.changeView(); });//1/2 scale of default
        keywords.Add("Scale one and a quarter", () => { this.scale(11); setterAudio.changeView(); });
        keywords.Add("Scale one and a half", () => { this.scale(12); setterAudio.changeView(); });
        keywords.Add("Scale one and three quarters", () => { this.scale(13); setterAudio.changeView(); });

        keywords.Add("Height adjust up", incrementHeight);
        keywords.Add("Height adjust down", decrementHeight);

        keywordRecognizer = new KeywordRecognizer(keywords.Keys.ToArray());
        keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
        keywordRecognizer.Start();
    }

    // Update is called once per frame
    void Update()
    {
        playerPosition = player.transform.position;
    }

    /*public void toggleButton()//toggle the switch button for child view
    {
       
        scaleToggle.GetComponent<Interactable>().TriggerOnClick(); 
        Debug.Log("Toggle View");
        
    }

    //swap the text for the switch
    public void swapChildText(bool toggle)
    {
        if (toggle)
        {
            scaleToggle.GetComponentInChildren<TextMesh>().text = "Child \nView";
        }
        else
        {
            scaleToggle.GetComponentInChildren<TextMesh>().text = "Normal \nView";
        }
    
    }

    public void toggleLevel()
    {
        levelToggle.GetComponent<Interactable>().TriggerOnClick();
        Debug.Log("Toggle Level");
    }

    public void swapLevelText(bool toggle)
    {
        if (toggle)
        {
            levelToggle.GetComponentInChildren<TextMesh>().text = "Move \nUp";
        }
        else
        {
            levelToggle.GetComponentInChildren<TextMesh>().text = "Move \nDown";
        }
    }*/

    public void setSpace()
    {
        changeView("Origin");

        this.setVisibility(true, environmentContainer);

        Debug.Log("SETTING ENV: " + environmentContainer.transform.position.ToString());
    }

    public void shiftLevel()
    {
        Vector3 newPosition = new Vector3();

        if (isShiftedUp)
        {
            Debug.Log("shifted up");
            newPosition.x = environmentContainer.transform.position.x;//environmentSetter.transform.position.x + heightOffset.x; // + environmentContainer.transform.position.x + (float)shiftAmount;
            newPosition.y = environmentContainer.transform.position.y + (float)shiftAmount * scaleLevels[currentScale].shift;
            newPosition.z = environmentContainer.transform.position.z;//environmentSetter.transform.position.z + heightOffset.z;// + environmentContainer.transform.position.z + (float)shiftAmount;
            isShiftedUp = false;
        }
        else
        {
            Debug.Log("shifted down");
            newPosition.x = environmentContainer.transform.position.x;//environmentSetter.transform.position.x + heightOffset.x; //+ environmentContainer.transform.position.x - (float)shiftAmount;
            newPosition.y = environmentContainer.transform.position.y - (float)shiftAmount * scaleLevels[currentScale].shift;
            newPosition.z = environmentContainer.transform.position.z;//environmentSetter.transform.position.z + heightOffset.z;// + environmentContainer.transform.position.z - (float)shiftAmount;
            isShiftedUp = true;
        }

        environmentContainer.transform.position = newPosition;
        Debug.Log("\n \n________________________________\nSHIFTING ENV: " + environmentContainer.transform.position.ToString());
    }

    public void nextScale()
    {
        Vector3 newPosition = new Vector3();

        //newPosition.x = heightOffset.x * scaleLevels[scaleModeState].shift;
        //newPosition.y = heightOffset.y * scaleLevels[scaleModeState].shift;
        //newPosition.z = heightOffset.z * scaleLevels[scaleModeState].shift;
        //scale the level and move the level to the environmentSetter
        newPosition.x = environmentSetter.transform.position.x - playerPosition.x * scaleLevels[scaleModeState].shift;
        newPosition.y = environmentSetter.transform.position.y - playerPosition.y * scaleLevels[scaleModeState].shift;
        newPosition.z = environmentSetter.transform.position.z - playerPosition.z * scaleLevels[scaleModeState].shift;

        //environmentContainer.transform.position = newPosition;
        environmentContainer.transform.localScale = scaleLevels[scaleModeState].scale;
        environmentContainer.transform.position = newPosition;

        Debug.Log("\n \n________________________________\nSETTING scale: " + environmentContainer.transform.localScale.ToString() + "\n MODE: " + scaleModeState);

        scaleModeState++;
        if (scaleModeState > 13) scaleModeState = 0;
    }

    public void scale(int scalar)
    {
        Vector3 newPosition = new Vector3();
        Vector3 playerPosition = player.transform.position;
        float currentScalar = scaleLevels[currentScale].shift;
        float newScalar = scaleLevels[scalar].shift;

        if (currentScalar == newScalar)
            return;

        Debug.Log("\nSETTING scale: " + environmentContainer.transform.localScale.ToString() + "\n SIZE: " + scalar);
        currentScale = scalar;

        // Preserves player position in scaled level
        newPosition.x = environmentContainer.transform.position.x * newScalar / currentScalar;
        newPosition.y = environmentContainer.transform.position.y * newScalar / currentScalar;
        newPosition.z = environmentContainer.transform.position.z * newScalar / currentScalar;
        environmentContainer.transform.position = newPosition;

        environmentContainer.transform.localScale = scaleLevels[scalar].scale;

        // Snap player back to last view target
        changeView(currentViewTarget.name);

    }


    public void setVisibility(bool visible, GameObject target)
    {
        foreach (Renderer r in target.GetComponentsInChildren(typeof(Renderer)))
        {
            r.enabled = visible;
        }
    }

    public void toggleFloor()
    {
        Debug.Log("Changing floor");
        this.setVisibility(floorVisible, GameObject.Find("Floor"));
        floorVisible = !floorVisible;
    }

    private void changeView(string name)
    {
        GameObject targetObject = null;
        Vector3 newPosition = environmentContainer.transform.position;

        // Should be much faster than GameObject.Find in larger scenes
        foreach (GameObject viewTarget in viewTargets)
        {
            if (viewTarget.name == name)
                targetObject = viewTarget;
        }

        if (targetObject == null)
        {
            Debug.Log("Oops! Object not found.");
            return;
        }

        Vector3 targetPosition = targetObject.transform.position;

        newPosition.x += playerPosition.x - targetPosition.x;
        newPosition.y += playerPosition.y - targetPosition.y - heightOffset * scaleLevels[currentScale].shift;
        newPosition.z += playerPosition.z - targetPosition.z;

        environmentContainer.transform.position = newPosition;
        currentViewTarget = targetObject;

    }

    // Procedural generation of voice commands based on which objects have ViewTarget or CanToggleVisibility scripts attached
    private void generateVoiceCommands()
    {
        // Views
        ViewTarget[] tempViewTargets = Object.FindObjectsOfType<ViewTarget>();
        viewTargets = new GameObject[tempViewTargets.Length];
        currentViewTarget = GameObject.Find("Origin");

        for (int i = 0; i < viewTargets.Length; i++)
        {
            viewTargets[i] = tempViewTargets[i].gameObject;
            viewKeywords.Add("Go to " + viewTargets[i].name, changeView);
        }

        viewKeywordRecognizer = new KeywordRecognizer(viewKeywords.Keys.ToArray());
        viewKeywordRecognizer.OnPhraseRecognized += ViewKeywordRecognizer_OnPhraseRecognized;
        viewKeywordRecognizer.Start();

        // Visibility Toggling
        CanToggleVisibility[] tempVisTargets = Object.FindObjectsOfType<CanToggleVisibility>();
        GameObject[] visTargets = new GameObject[tempVisTargets.Length];

        for (int i = 0; i < visTargets.Length; i++)
        {
            visTargets[i] = tempVisTargets[i].gameObject;
            visKeywords.Add("Show " + visTargets[i].name, setVisibility);
            visKeywords.Add("Hide " + visTargets[i].name, setVisibility);
        }

        visKeywordRecognizer = new KeywordRecognizer(visKeywords.Keys.ToArray());
        visKeywordRecognizer.OnPhraseRecognized += VisKeywordRecognizer_OnPhraseRecognized;
        visKeywordRecognizer.Start();

    }

    private void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action keywordAction;
        if (keywords.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke();
        }
    }

    private void ViewKeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action<string> keywordStringAction;
        string objectName = "";
        string[] phrase;

        if (viewKeywords.TryGetValue(args.text, out keywordStringAction))
        {
            phrase = args.text.Split(' ');
            for (int i = 2; i < phrase.Length; i++)
            {
                objectName += phrase[i];
                if (i < phrase.Length - 1)
                    objectName += " ";
            }

            keywordStringAction(objectName);
        }

        setterAudio.shiftLevel();
    }

    private void VisKeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action<bool, GameObject> action;
        string objectName = "";
        string[] phrase;

        if (visKeywords.TryGetValue(args.text, out action))
        {
            phrase = args.text.Split(' ');
            for (int i = 1; i < phrase.Length; i++)
            {
                objectName += phrase[i];
                if (i < phrase.Length - 1)
                    objectName += " ";
            }

            if (phrase[0].Equals("Show"))
                action(true, GameObject.Find(objectName));

            else if (phrase[0].Equals("Hide"))
                action(false, GameObject.Find(objectName));
        }

        setterAudio.shiftLevel();
    }

    public void initializeHeightCalibration()
    {
        heightOffset = 2.0f;
        heightText = GameObject.Find("HeightText");

        GameObject upButton = GameObject.Find("UpButton");
        upButton.GetComponent<Interactable>().OnClick.AddListener(() => incrementHeight());

        GameObject downButton = GameObject.Find("DownButton");
        downButton.GetComponent<Interactable>().OnClick.AddListener(() => decrementHeight());
    }

    private void adjustHeight(float increment)
    {
        // Update offset
        heightOffset += increment;
        heightText.GetComponent<TextMeshProUGUI>().text = string.Format("{0:0.0}", heightOffset);

        // Instantly adjust position
        Vector3 currentPosition = environmentContainer.transform.position;
        currentPosition.y -= increment;
        environmentContainer.transform.position = currentPosition;
    }

    private void incrementHeight()
    {
        adjustHeight(0.1f);
    }

    private void decrementHeight()
    {
        adjustHeight(-0.1f);
    }

}

public class scaleState 
{
    public scaleState(Vector3 newScale, float newShift)
    {
        scale = newScale;
        shift = newShift;
    }
    public Vector3 scale { get; set; }
    public float shift { get; set; }
}
