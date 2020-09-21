#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    //changes the color of the console
    system("COLOR 5");

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
        int health;
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

    player.health = 30;
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

    int playerHealth;
    player.health = playerHealth;

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
    if (player.attributePoints < playerStrength) {
        cout << "You do not have that many points to spend. \n";
        cout << "How many points do you wish to place into Strength? > ";
        cin >> playerStrength;
    }
    cout << "You placed " << playerStrength << " points into strength \n";
    player.attributePoints = player.attributePoints - playerStrength;
    cout << "You have " << player.attributePoints << " Attribute Points left \n\n";

    //Dexterity Choice
    cout << "How many points do you wish to place into Dexterity? > ";
    cin >> playerDexterity;
    if (player.attributePoints < playerDexterity) {
    cout << "You do not have that many points to spend. \n";
    cout << "How many points do you wish to place into Dexterity? > ";
    cin >> playerDexterity;
    }
    cout << "You placed " << playerDexterity << " points into Dexterity \n";
    player.attributePoints = player.attributePoints - playerDexterity;
    cout << "You have " << player.attributePoints << " Attribute Points left \n\n";

    //Constitution Choice

    cout << "How many points do you wish to place into Constitution? > ";
    cin >> playerConstitution;
    if (player.attributePoints < playerConstitution) {
    cout << "You do not have that many points to spend. \n";
    cout << "How many points do you wish to place into Constitution? > ";
    cin >> playerConstitution;
    }
    cout << "You placed " << playerConstitution << " points into Constitution \n";
    player.attributePoints = player.attributePoints - playerConstitution;
    cout << "You have " << player.attributePoints << " Attribute Points left \n\n";

    //Intelligence Choice

    cout << "How many points do you wish to place into Intelligence? > ";
    cin >> playerIntelligence;
    if (player.attributePoints < playerIntelligence) {
    cout << "You do not have that many points to spend. \n";
    cout << "How many points do you wish to place into Intelligence? > ";
    cin >> playerIntelligence;
    }
    cout << "You placed " << playerIntelligence << " points into Intelligence \n";
    player.attributePoints = player.attributePoints - playerIntelligence;
    cout << "You have " << player.attributePoints << " Attribute Points left \n\n";

    //Wisdom Choice

    cout << "How many points do you wish to place into Wisdom? > ";
    cin >> playerWisdom;
    if (player.attributePoints < playerWisdom) {
    cout << "You do not have that many points to spend. \n";
    cout << "How many points do you wish to place into Wisdom? > ";
    cin >> playerWisdom;
    }
    cout << "You placed " << playerWisdom << " points into Wisdom \n";
    player.attributePoints = player.attributePoints - playerWisdom;
    cout << "You have " << player.attributePoints << " Attribute Points left \n\n";

    //Charisma Choice

    cout << "How many points do you wish to place into Charisma? > ";
    cin >> playerCharisma;
    if (player.attributePoints < playerCharisma) {
    cout << "You do not have that many points to spend. \n";
    cout << "How many points do you wish to place into Charisma? > ";
    cin >> playerCharisma;
    }
    cout << "You placed " << playerCharisma << " points into Charisma \n";
    player.attributePoints = player.attributePoints - playerCharisma;
    cout << "You have " << player.attributePoints << " Attribute Points left \n\n";

    cout << "Please enter a command > ";
    cin >> command;

    if (command == "!stats") {
        cout << "Health: " << playerHealth << "\n";
        cout << "Strength: " << playerStrength << "\n";
        cout << "Dexterity: " << playerDexterity << "\n";
        cout << "Constitution: " << playerConstitution << "\n";
        cout << "Intelligence: " << playerIntelligence << "\n";
        cout << "Wisdom: " << playerWisdom << "\n";
        cout << "Charisma: " << playerCharisma << "\n";
    }

}
