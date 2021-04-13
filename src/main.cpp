#include <iostream>

#include "./engine/constructors/character.h"
#include "./engine/objects/weaponObjects.h"
#include "./engine/objects/enemyObjects.h"

int main() {
    std::string name;

    std::cout << "What is your name? ";
    std::cin >> name;
    Character player(20, 10, 5, 5, 5, 5, 5, 5, name);
/*
*   For testing Purposes
*   std::cout << "\n"
*             << "Name:         " << player.name
*             << "\n"
*             << "Hitpoints:    " << player.hp
*             << "\n"
*             << "Spellpoints:  " << player.sp
*             << "\n"
*             << "Strength:     " << player.strength
*             << "\n"
*             << "Dexterity:    " << player.dexterity
*             << "\n"
*             << "Constitution: " << player.constitution
*             << "\n"
*             << "Intelligence: " << player.intelligence
*             << "\n"
*             << "Wisdom:       " << player.wisdom
*             << "\n"
*             << "Charisma:     " << player.charisma
*             << "\n";
*             return 0;
*   End of Test
*/
}