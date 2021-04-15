using namespace std;

int attribInput;
int plrCInput;

void attributePoints() {
    cout << "\nHow many points would you like to allocate? ";
    cin >> attribInput;

    plrAP = plrAP - attribInput;

    cout << "\nYou have " << plrAP << " points left to allocate \n";
}

void characterCreation() {
    cout << "What would you like to name your character? ";
    cin >> plrName;

    plrAP = 30;
    while(plrAP > 0) {
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
                attributePoints();
                plrS = attribInput;
                break;
            case 2:
            // dexterity
                attributePoints();
                plrD = attribInput;
                break;
            case 3:
            // constitution
                attributePoints();
                plrC = attribInput;
                break;
            case 4:
            // intelligence
                attributePoints();
                plrI = attribInput;
                break;
            case 5:
            // wisdom
                attributePoints();
                plrW = attribInput;
                break;
            case 6:
            // charisma
                attributePoints();
                plrCh = attribInput;
                break;
        }
    }
    cout << "Strength:     " << plrS << endl
         << "Dexterity:    " << plrD << endl
         << "Constitution: " << plrC << endl
         << "Intelligence: " << plrI << endl
         << "Wisdom:       " << plrW << endl
         << "Charisma:     " << plrCh << endl;
}