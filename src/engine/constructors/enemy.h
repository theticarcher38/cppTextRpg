class Enemy {
    public:
        int hp;
        int sp;
        int armor;
        int damage;
        std::string name;
        Enemy(int h, int s, int a, int d, std::string n) {
            hp = h;
            sp = s;
            armor = a;
            damage = d;
            name = n;
        }
};