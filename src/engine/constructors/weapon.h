using namespace std;

class Weapon {
    public:
        int wDamage;
        int wWeight;
        int wId;
        string wType;
        string wName;
        Weapon(std::string wN, int d, int w, int wId, string t) {
            wDamage = d;
            wWeight = w;
            wId = wId;
            wType = t;
            wName = wN;
        }
};