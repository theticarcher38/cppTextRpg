#include <iostream>

#include "./engine/character.h"
#include "./engine/weapon.h"

/*
* Weapon Constructor Layout
* 
* Weapon <weaponName>(<"Weapon Name">, <weaponDamage>, <weaponWeight>, <weaponType>);
*/

/*
* Character Constructor Layout
* 
* Character player(<hp>, <sp>, <str>, <dex>, <con>, <int>, <wis>, <cha>, name);
*/

int main() {
    std::string name;

    std::cout << "What is your name? ";
    std::cin >> name;
    Character player(20, 10, 5, 5, 5, 5, 5, 5, name);
    Weapon ironSword("Iron Sword", 5, 10, "melee");
/*  std::cout << "\n"
              << "Name:         " << player.name
              << "\n"
              << "Hitpoints:    " << player.hp
              << "\n"
              << "Spellpoints:  " << player.sp
              << "\n"
              << "Strength:     " << player.strength
              << "\n"
              << "Dexterity:    " << player.dexterity
              << "\n"
              << "Constitution: " << player.constitution
              << "\n"
              << "Intelligence: " << player.intelligence
              << "\n"
              << "Wisdom:       " << player.wisdom
              << "\n"
              << "Charisma:     " << player.charisma
              << "\n";
              return 0;
*/
}