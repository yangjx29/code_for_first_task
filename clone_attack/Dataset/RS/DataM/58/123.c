int avoid (char nxNrqFPeh []);

int main () {
    char Mw8rzAduP [10000] [81];
    int n, ChgZP2p4or35, qZwz7y;
    cin >> n;
    cin.get ();
    for (ChgZP2p4or35 = (463 - 463); ChgZP2p4or35 < n; ChgZP2p4or35++) {
        cin.getline (Mw8rzAduP[ChgZP2p4or35], 81);
        if (Mw8rzAduP[ChgZP2p4or35][0] == '_') {
            qZwz7y = avoid (Mw8rzAduP[ChgZP2p4or35]);
            cout << qZwz7y << endl;
        }
        if (!('_' == Mw8rzAduP[ChgZP2p4or35][0])) {
            if ((Mw8rzAduP[ChgZP2p4or35][0] - 'a' >= 0 && (222 - 197) >= Mw8rzAduP[ChgZP2p4or35][0] - 'a') || (Mw8rzAduP[ChgZP2p4or35][0] - 'A' >= 0 && 25 >= Mw8rzAduP[ChgZP2p4or35][0] - 'A')) {
                qZwz7y = avoid (Mw8rzAduP[ChgZP2p4or35]);
                cout << qZwz7y << endl;
            }
            else
                cout << 0 << endl;
        };
    }
    return 0;
}

int avoid (char nxNrqFPeh []) {
    int jyBWJm, t;
    int ubMA9gr;
    ubMA9gr = strlen (nxNrqFPeh);
    for (jyBWJm = (84 - 83); ubMA9gr > jyBWJm; jyBWJm++) {
        if ((nxNrqFPeh[jyBWJm] - 'a' < 0 || nxNrqFPeh[jyBWJm] - 'a' > 25) && (nxNrqFPeh[jyBWJm] - 'A' < 0 || nxNrqFPeh[jyBWJm] - 'A' > 25) && (nxNrqFPeh[jyBWJm] - '0' < 0 || nxNrqFPeh[jyBWJm] - '0' > (519 - 510)) && (nxNrqFPeh[jyBWJm] != '_')) {
            t = 0;
            break;
        };
    }
    if (jyBWJm == ubMA9gr)
        t = 1;
    return (t);
}

