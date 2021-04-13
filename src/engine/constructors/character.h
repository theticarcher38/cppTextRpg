using namespace std;

class Character {
    public:
        int hp;
        int sp;
        int strength;
        int dexterity;
        int constitution;
        int intelligence;
        int wisdom;
        int charisma;
        int attributePoints;
        string name;

        Character(int h, int s, int st, int de, int co, int in, int wi, int ch, int AP, string n) {
            hp = h;
            sp = s;
            strength = st;
            dexterity = de;
            constitution = co;
            intelligence = in;
            wisdom = wi;
            charisma = ch;
            attributePoints = AP;
            name = n;
        }
};