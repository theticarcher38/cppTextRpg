#include <iostream>

#include "character.h"
#include "weapon.h"

int main() {
    Character player("Name");
    Weapon ironSword("Iron Sword",5, 10, "melee");
    std::cout << player.name << "\n";
    std::cout << "\nName:" << ironSword.wName << "\nDamage: " << ironSword.wDamage << "\nWeight: " << ironSword.wWeight << "\nType: " << ironSword.wType << "\n";
}