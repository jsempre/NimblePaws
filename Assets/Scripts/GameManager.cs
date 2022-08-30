using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
	public float turnDelay = .1f;
	public float levelStartDelay = 2f;
	public static GameManager instance = null;
	private BoardManager boardManager;                       //Store a reference to our BoardManager which will set up the level.
	public int level = 1;                      //Boolean to check if we're setting up board, prevent Player from moving during setup.
	public int playerEnergy = 100;
	[HideInInspector] public bool playersTurn = true;

	private List<Enemy> enemies;
	private bool enemiesMoving;
	public Text levelText;
	private GameObject levelImage;
	private bool doingSetup;

	//Awake is always called before any Start functions
	void Awake()
	{
		enemies = new List<Enemy>();
		boardManager = GetComponent<BoardManager>();

		if (instance == null)
		{
			instance = this;
			//Call the InitGame function to initialize the first level 
			InitGame();
		}
		else if (instance != this)
			Destroy(gameObject);
		DontDestroyOnLoad(gameObject);
	}

	//this is called only once, and the paramter tell it to be called only after the scene was loaded
	//(otherwise, our Scene Load callback would be called the very first load, and we don't want that)
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	static public void CallbackInitialization()
	{
		//register the callback to be called everytime the scene is loaded
		SceneManager.sceneLoaded += OnSceneLoaded;
	}

	//This is called each time a scene is loaded.
	static private void OnSceneLoaded(Scene arg0, LoadSceneMode arg1)
	{
		instance.level++;
		instance.InitGame();
	}

	//Initializes the game for each level.
	void InitGame()
	{
		doingSetup = true;
		levelImage = GameObject.Find("LevelImage");
		levelText = GameObject.Find("LevelText").GetComponent<Text>();
		levelText.text = $"Day {level}";
		levelImage.SetActive(true);
		Invoke("HideLevelImage", levelStartDelay);

		enemies.Clear();
		boardManager.SetupScene(level);
	}

	private void HideLevelImage()
    {
		levelImage.SetActive(false);
		doingSetup = false;
    }

	void Update()
	{
		//Check that playersTurn or enemiesMoving or doingSetup are not currently true.
		if (playersTurn || enemiesMoving || doingSetup)
			return;

		//Start moving enemies.
		StartCoroutine(MoveEnemies());
	}

	//Call this to add the passed in Enemy to the List of Enemy objects.
	public void AddEnemyToList(Enemy enemy)
	{
		enemies.Add(enemy);
	}

	public void GameOver()
	{
		levelText.text = $"After {level} days, you ran out of energy.";
		levelImage.SetActive(true);
		enabled = false;
	}

	//Coroutine to move enemies in sequence.
	IEnumerator MoveEnemies()
	{
		//While enemiesMoving is true player is unable to move.
		enemiesMoving = true;

		//Wait for turnDelay seconds, defaults to .1 (100 ms).
		yield return new WaitForSeconds(turnDelay);

		//If there are no enemies spawned (IE in first level):
		if (enemies.Count == 0)
		{
			//Wait for turnDelay seconds between moves, replaces delay caused by enemies moving when there are none.
			yield return new WaitForSeconds(turnDelay);
		}

		//Loop through List of Enemy objects.
		for (int i = 0; i < enemies.Count; i++)
		{
			//Call the MoveEnemy function of Enemy at index i in the enemies List.
			enemies[i].MoveEnemy();

			//Wait for Enemy's moveTime before moving next Enemy, 
			yield return new WaitForSeconds(enemies[i].moveTime);
		}
		//Once Enemies are done moving, set playersTurn to true so player can move.
		playersTurn = true;

		//Enemies are done moving, set enemiesMoving to false.
		enemiesMoving = false;
	}
}

