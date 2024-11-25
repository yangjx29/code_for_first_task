int main () {
    unsigned  YoeCfmJ2 [(423 - 172)], hVCDWLsto [251];
    char oUleNTkHi [(422 - 172)];
    char lFiZHq5 [(1137 - 887)];
    int uvIH6C;
    int OPnAKHhki;
    uvIH6C = strlen (oUleNTkHi);
    OPnAKHhki = strlen (lFiZHq5);
    int hfiwlBD6IA2x = 250;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.getline (oUleNTkHi, 250);
    cin.getline (lFiZHq5, 250);
    memset (YoeCfmJ2, (896 - 896), sizeof (YoeCfmJ2));
    {
        int cw5abiT = (521 - 521);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cw5abiT < uvIH6C) {
            YoeCfmJ2[cw5abiT] = oUleNTkHi[uvIH6C - cw5abiT - (965 - 964)] - '0';
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
            cw5abiT = cw5abiT + 1;
        };
    }
    memset (hVCDWLsto, (306 - 306), sizeof (hVCDWLsto));
    {
        int j = (140 - 140);
        while (j < OPnAKHhki) {
            hVCDWLsto[j] = lFiZHq5[OPnAKHhki -j - 1] - '0';
            j = j + 1;
        };
    }
    {
        int cw5abiT = 0;
        while (250 > cw5abiT) {
            YoeCfmJ2[cw5abiT] += hVCDWLsto[cw5abiT];
            if (YoeCfmJ2[cw5abiT] > 9) {
                YoeCfmJ2[cw5abiT] -= 10;
                YoeCfmJ2[cw5abiT + 1]++;
            }
            cw5abiT++;
        };
    }
    while (YoeCfmJ2[hfiwlBD6IA2x] == 0)
        hfiwlBD6IA2x = hfiwlBD6IA2x - 1;
    if (hfiwlBD6IA2x < 0)
        cout << "0";
    else {
        for (; hfiwlBD6IA2x >= 0; hfiwlBD6IA2x--)
            cout << YoeCfmJ2[hfiwlBD6IA2x];
    }
    return 0;
}

