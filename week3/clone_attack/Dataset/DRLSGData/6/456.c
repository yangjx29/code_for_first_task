int main () {
    int BtiUWuXPYON5;
    int NAonlhBY;
    int OSIM9Y;
    int X9nlZBY;
    int aEiB6vJh [110] [110];
    BtiUWuXPYON5 = 0;
    cin >> NAonlhBY;
    for (int uT5sOQ = 0;
    NAonlhBY > uT5sOQ; uT5sOQ = uT5sOQ + 1) {
        cin >> OSIM9Y >> X9nlZBY;
        for (int S0pHxsNy3 = 0;
        OSIM9Y > S0pHxsNy3; S0pHxsNy3 = S0pHxsNy3 +1)
            for (int TfVZAju = 0;
            X9nlZBY > TfVZAju; TfVZAju = TfVZAju +1)
                cin >> *(*(aEiB6vJh + S0pHxsNy3) + TfVZAju);
        BtiUWuXPYON5 = 0;
        if (!(1 != OSIM9Y)) {
            for (int S0pHxsNy3 = 0;
            X9nlZBY > S0pHxsNy3; S0pHxsNy3 = S0pHxsNy3 +1)
                BtiUWuXPYON5 += *(*(aEiB6vJh)+S0pHxsNy3);
            cout << BtiUWuXPYON5 << endl;
            continue;
        }
        if (!(1 != X9nlZBY)) {
            {
                int S0pHxsNy3 = 0;
                for (; OSIM9Y > S0pHxsNy3;) {
                    BtiUWuXPYON5 += *(*(aEiB6vJh)+S0pHxsNy3);
                    S0pHxsNy3 = S0pHxsNy3 +1;
                }
            }
            cout << BtiUWuXPYON5 << endl;
            continue;
        }
        for (int S0pHxsNy3 = 0;
        S0pHxsNy3 < X9nlZBY; S0pHxsNy3 = S0pHxsNy3 +1)
            BtiUWuXPYON5 = BtiUWuXPYON5 +*(*(aEiB6vJh)+S0pHxsNy3) + *(*(aEiB6vJh + OSIM9Y -1) + S0pHxsNy3);
        {
            int S0pHxsNy3 = 0;
            while (S0pHxsNy3 < OSIM9Y) {
                BtiUWuXPYON5 = BtiUWuXPYON5 +*(*(aEiB6vJh + S0pHxsNy3)) + *(*(aEiB6vJh + S0pHxsNy3) + X9nlZBY -1);
                S0pHxsNy3 = S0pHxsNy3 +1;
            }
        }
        cout << BtiUWuXPYON5 -*(*(aEiB6vJh)) - *(*(aEiB6vJh)+X9nlZBY-1) - *(*(aEiB6vJh + OSIM9Y -1)) - *(*(aEiB6vJh + OSIM9Y -1) + X9nlZBY -1) << endl;
    }
    return 0;
}

