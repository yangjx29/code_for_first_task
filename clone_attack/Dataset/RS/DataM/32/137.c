int main () {
    int a8ARrTkP;
    int len2;
    int n;
    int K7Wyl4EJF;
    int j;
    char str1 [110];
    char AuXi2SyzjC [110];
    int yPih3CabY5 [(982 - 872)];
    int KL5vJmz4CZ [110];
    int k4vx3i5S [110];
    cin >> n;
    for (; n--;) {
        j = 0;
        cin >> str1 >> AuXi2SyzjC;
        a8ARrTkP = strlen (str1);
        len2 = strlen (AuXi2SyzjC);
        memset (yPih3CabY5, (727 - 727), sizeof (yPih3CabY5));
        for (K7Wyl4EJF = a8ARrTkP - 1; 0 <= K7Wyl4EJF; K7Wyl4EJF--)
            yPih3CabY5[j++] = str1[K7Wyl4EJF] - '0';
        j = 0;
        memset (KL5vJmz4CZ, (759 - 759), sizeof (KL5vJmz4CZ));
        {
            K7Wyl4EJF = len2 - 1;
            while (K7Wyl4EJF >= 0) {
                KL5vJmz4CZ[j++] = AuXi2SyzjC[K7Wyl4EJF] - '0';
                K7Wyl4EJF = K7Wyl4EJF -1;
            };
        }
        memset (k4vx3i5S, 0, sizeof (k4vx3i5S));
        {
            K7Wyl4EJF = 0;
            while (a8ARrTkP > K7Wyl4EJF) {
                k4vx3i5S[K7Wyl4EJF] = k4vx3i5S[K7Wyl4EJF] + (yPih3CabY5[K7Wyl4EJF] - KL5vJmz4CZ[K7Wyl4EJF]);
                if (0 > k4vx3i5S[K7Wyl4EJF]) {
                    k4vx3i5S[K7Wyl4EJF +1]--;
                    k4vx3i5S[K7Wyl4EJF] += 10;
                }
                K7Wyl4EJF++;
            };
        }
        K7Wyl4EJF = a8ARrTkP - 1;
        while (!k4vx3i5S[K7Wyl4EJF]) {
            K7Wyl4EJF = K7Wyl4EJF -1;
            if (K7Wyl4EJF == -1)
                break;
        }
        if (K7Wyl4EJF == -1) {
            cout << 0 << endl;
            continue;
        }
        while (K7Wyl4EJF >= 0) {
            cout << k4vx3i5S[K7Wyl4EJF];
            K7Wyl4EJF--;
        }
        cout << endl;
    }
    return 0;
}

