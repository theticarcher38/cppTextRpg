using namespace std;

class Enemy {
    public:
        int hp;
        int sp;
        int armor;
        int damage;
        string name;
        Enemy(int h, int s, int a, int d, string n) {
            hp = h;
            sp = s;
            armor = a;
            damage = d;
            name = n;
        }
};