class Weapon {
    public:
        int wDamage;
        int wWeight;
        std::string wType;
        std::string wName;
        Weapon(std::string wN, int d, int w, std::string t) {
            wDamage = d;
            wWeight = w;
            wType = t;
            wName = wN;
        }
};