using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Player : MovingObject
{
    public int wallDamage = 1;
    public int pointsPerFood = 10;
    public float restartLevelDelay = 1f;
    public Text energyText;

    private Animator animator;
    private int energy;

    // Start is called before the first frame update
    protected override void Start()
    {
        animator = GetComponent<Animator>();
        energy = GameManager.instance.playerEnergy;
        energyText.text = $"Energy: {energy}";
        base.Start();
    }

    private void OnDisable()
    {
        GameManager.instance.playerEnergy = energy;
    }

    // Update is called once per frame
    void Update()
    {
        if (!GameManager.instance.playersTurn)
            return;

        var horizontal = (int)Input.GetAxisRaw("Horizontal");
        var vertical = (int)Input.GetAxisRaw("Vertical");

        if (horizontal != 0)
            vertical = 0;
        if (horizontal != 0 || vertical != 0)
            AttemptMove<Transform>(horizontal, vertical);
    }

    protected override void AttemptMove<T>(int xDir, int yDir)
    {
        energy--;
        energyText.text = $"Energy: {energy}";
        base.AttemptMove<T>(xDir, yDir);
        RaycastHit2D hit;
        Move(xDir, yDir, out hit);
        CheckIfGameOver();
        GameManager.instance.playersTurn = false;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Exit")
        {
            Invoke("Restart", restartLevelDelay);
            enabled = false;
        }
        else if (collision.tag == "Food")
        {
            energy += pointsPerFood;
            energyText.text = $"+ {pointsPerFood} Energy: {energy}";
            collision.gameObject.SetActive(false);
        }
    }

    protected override void OnCantMove<T>(T component)
    {
        Wall hitWall = component as Wall;
        hitWall.DamageWall(wallDamage);
        //animator.SetTrigger("playerChop");
    }

    private void Restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex, LoadSceneMode.Single);
        //Application.LoadLevel(Application.loadedLevel);
    }

    public void LoseEnergy(int amount)
    {
        //animator.SetTrigger("playerHit");
        energy -= amount;
        energyText.text = $"-{amount} Energy: {energy}";
        CheckIfGameOver();
    }

    private void CheckIfGameOver()
    {
        if (energy <= 0)
            GameManager.instance.GameOver();
    }
}
