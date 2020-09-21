#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    string command;

    //Melee Weapon Constructor
    struct meleeWeapon
    {
    string name;
    int damage;
    int durability;
    int cost;
    bool owned;
    bool equipped;
    } ironSword, steelSword;
    
    //Melee Weapons Info
    ironSword.cost = 10;
    ironSword.damage = 5;
    ironSword.durability = 20;
    ironSword.owned = false;
    ironSword.equipped = false;

    steelSword.cost = 30;
    steelSword.damage = 13;
    steelSword.durability = 40;
    steelSword.owned = false;
    steelSword.equipped = false;

    //Player constructor
    struct player
    {
        string name;
        int headHealth;
        int torsoHealth;
        int leftArmHealth;
        int rightArmHealth;
        int leftLegHealth;
        int rightLegHealth;
        int level;
        int attributePoints;
        int cash;
        int stamina;
        int strength;
        int dexterity;
        int constitution;
        int intelligence;
        int wisdom;
        int charisma;

    } player;

    player.headHealth = 10 + player.constitution;
    player.torsoHealth = 30 + player.constitution;
    player.leftArmHealth = 20 + player.constitution;
    player.rightArmHealth = 20 + player.constitution;
    player.leftLegHealth = 20 + player.constitution;
    player.rightLegHealth = 20 + player.constitution;
    player.level = 1;
    player.attributePoints = 30;
    player.strength = 0;
    player.dexterity = 0;
    player.constitution = 0;
    player.intelligence = 0;
    player.wisdom = 0;
    player.charisma = 0;
    player.cash = 30;
    player.stamina = 30 + player.constitution;

    string playerName;
    player.name = playerName;

    int playerStrength;
    player.strength = playerStrength;
    int playerDexterity;
    player.dexterity = playerDexterity;
    int playerConstitution;
    player.constitution = playerConstitution;
    int playerIntelligence;
    player.intelligence = playerIntelligence;
    int playerWisdom;
    player.wisdom = playerWisdom;
    int playerCharisma;
    player.charisma = playerCharisma;

    //Enemy Constructor
    struct enemy 
    {

    } enemy;


    cout << "What is your name? > ";
    cin >> playerName;

    cout << "You get 30 attribute points to spend at the start. These must be split across Strength, Dexterity, Constitution, Intelligence, Wisdom, and Charisma. \n";

    //Strength Choice
    cout << "How many points do you wish to place into Strength? > ";
    cin >> playerStrength;
    player.attributePoints = player.attributePoints - playerStrength;
    if (player.attributePoints < playerStrength) {
        cout << "You do not have that many points to spend. \n";
        cout << "How many points do you wish to place into Strength? > ";
        cin >> playerStrength;
    }
    cout << "You placed " << playerStrength << " points into strength \n";
    cout << "You have " << player.attributePoints << " Attribute Points left \n";

    //Dexterity Choice
    cout << "How many points do you wish to place into Dexterity? > ";
    cin >> playerDexterity;
    player.attributePoints = player.attributePoints - playerDexterity;
    if (player.attributePoints < playerDexterity) {
    cout << "You do not have that many points to spend. \n";
    cout << "How many points do you wish to place into Dexterity? > ";
    cin >> playerDexterity;
    }
    cout << "You placed " << playerDexterity << " points into Dexterity";
    cout << "You have " << player.attributePoints << " Attribute Points left \n";

    //Constitution Choice


    //Intelligence Choice


    //Wisdom Choice


    //Charisma Choice


    cout << "Please enter a command > ";
    cin >> command;

    if (command == "show stats") {
        cout << "Head Health: " << player.headHealth << "\n";
    }

}