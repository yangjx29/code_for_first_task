int main () {
    int HgvEo21dGCJ;
    cin >> HgvEo21dGCJ;
    for (; HgvEo21dGCJ > 0;) {
        char CFVuWYKJD [100];
        char exKQCjwAI [100];
        int HiUTx7XQWjge;
        int tHvCIq1VyQ;
        int i;
        int hNEkejpSoi [100];
        HiUTx7XQWjge = strlen (CFVuWYKJD);
        tHvCIq1VyQ = strlen (exKQCjwAI);
        cin >> CFVuWYKJD >> exKQCjwAI;
        for (i = 0; tHvCIq1VyQ > i; i = i + 1) {
            if (exKQCjwAI[tHvCIq1VyQ - 1 - i] > CFVuWYKJD[HiUTx7XQWjge -(767 - 766) - i]) {
                CFVuWYKJD[HiUTx7XQWjge -2 - i]--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                CFVuWYKJD[HiUTx7XQWjge -1 - i] += 10;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            hNEkejpSoi[i] = CFVuWYKJD[HiUTx7XQWjge -1 - i] - exKQCjwAI[tHvCIq1VyQ - 1 - i];
        }
        for (i = tHvCIq1VyQ; i < HiUTx7XQWjge; i = i + 1) {
            if (CFVuWYKJD[HiUTx7XQWjge -1 - i] < '0') {
                CFVuWYKJD[HiUTx7XQWjge -2 - i]--;
                CFVuWYKJD[HiUTx7XQWjge -1 - i] += 10;
            }
            hNEkejpSoi[i] = CFVuWYKJD[HiUTx7XQWjge -1 - i] - 48;
        }
        for (; hNEkejpSoi[i - 1] == 0;)
            i = i - 1;
        for (; i > 0;) {
            i = i - 1;
            cout << hNEkejpSoi[i];
        }
        cout << endl;
        HgvEo21dGCJ = HgvEo21dGCJ -1;
    }
    return 0;
}

