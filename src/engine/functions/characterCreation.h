using namespace std;

void characterCreation() {

    int plrCInput;
    cout << "What would you like to name your character? ";
    cin >> plrName;

    plrAP = 30;

    cout << "You have 30 points to spend in 6 different stats:" << "\n";
    cout << "[1] Strength    " << "\n"
         << "[2] Dexterity   " << "\n"
         << "[3] Constitution" << "\n"
         << "[4] Intelligence" << "\n"
         << "[5] Wisdom      " << "\n"
         << "[6] Charisma    " << "\n";
    cin >> plrCInput;
    switch (plrCInput) {
        case 1:
        // strength
            break;
        case 2:
        // dexterity
            break;
        case 3:
        // constitution
            break;
        case 4:
        // intelligence
            break;
        case 5:
        // wisdom
            break;
        case 6:
        // charisma
            break;
    }
}