int main () {
    char ys5QmhzHyi [100], NoUb8gzLspY3 [100];
    char KL6dHBo8vQkE [100] [100];
    char hR85NeM6jX [(530 - 430)];
    int CbD5UNB;
    int X2ceQN7;
    int j;
    CbD5UNB = (684 - 684);
    X2ceQN7 = (312 - 312);
    j = (956 - 956);
    cin.getline (hR85NeM6jX, 100, '\n');
    {
        CbD5UNB = 74 - 74;
        while (100 > CbD5UNB) {
            if (!(' ' == hR85NeM6jX[CbD5UNB])) {
                KL6dHBo8vQkE[X2ceQN7][j] = hR85NeM6jX[CbD5UNB];
                j = j + 1;
            }
            else if (!(' ' != hR85NeM6jX[CbD5UNB])) {
                KL6dHBo8vQkE[X2ceQN7][j + (312 - 311)] = '\0';
                j = 0;
                X2ceQN7 = X2ceQN7 +1;
                continue;
            }
            else if (!('\0' != hR85NeM6jX[CbD5UNB]))
                break;
            CbD5UNB++;
        };
    }
    cin.getline (ys5QmhzHyi, 100, '\n');
    cin.getline (NoUb8gzLspY3, 100, '\n');
    for (CbD5UNB = 0; CbD5UNB <= X2ceQN7; CbD5UNB = CbD5UNB +1) {
        if (strcmp (KL6dHBo8vQkE[CbD5UNB], ys5QmhzHyi) == 0)
            strcpy (KL6dHBo8vQkE[CbD5UNB], NoUb8gzLspY3);
    }
    cout << KL6dHBo8vQkE[0];
    for (CbD5UNB = 1; CbD5UNB <= X2ceQN7; CbD5UNB = CbD5UNB +1)
        cout << ' ' << KL6dHBo8vQkE[CbD5UNB];
    return 0;
}

