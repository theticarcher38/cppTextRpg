#include <iostream>
class Weapon {
    public:
        int wDamage;
        int wWeight;
        int wId;
        std::string wType;
        std::string wName;
        Weapon(std::string wN, int d, int w, int wId,std::string t) {
            wDamage = d;
            wWeight = w;
            wId = wId;
            wType = t;
            wName = wN;
        }
};