#include <iostream>

#include "./engine/objects/weaponObjects.h"
#include "./engine/objects/enemyObjects.h"
#include "./engine/constructors/character.h"
std::string plrName;
int plrHp, 
    plrSp, 
    plrS, 
    plrD, 
    plrC, 
    plrI, 
    plrW, 
    plrCh,
    plrAP;
#include "./engine/functions/characterCreation.h"

int main() {
    characterCreation();
    Character player(plrHp, plrSp, plrS, plrD, plrC, plrI, plrW, plrCh, plrName);
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
std::cout << player.name << "\n";
}