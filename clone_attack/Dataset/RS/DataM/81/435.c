int trans (int ZQ1gIS [] [(1004 - 999)], int n, int TfjIabr7L) {
    if (n >= (110 - 110) && 5 > n && 0 <= TfjIabr7L &&TfjIabr7L < 5) {
        int nLJkOcdT;
        int HBPvoh;
        {
            nLJkOcdT = 0;
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
            while (5 > nLJkOcdT) {
                HBPvoh = ZQ1gIS[n][nLJkOcdT];
                ZQ1gIS[n][nLJkOcdT] = ZQ1gIS[TfjIabr7L][nLJkOcdT];
                ZQ1gIS[TfjIabr7L][nLJkOcdT] = HBPvoh;
                nLJkOcdT = nLJkOcdT + 1;
            };
        }
        return 1;
    }
    else
        return 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n;
    int TfjIabr7L;
    int nLJkOcdT;
    int t86V5ZQ;
    int value [5] [5];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    for (nLJkOcdT = 0; 5 > nLJkOcdT; nLJkOcdT = nLJkOcdT + 1) {
        t86V5ZQ = 0;
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
        while (t86V5ZQ < 5) {
            scanf ("%d", &value[nLJkOcdT][t86V5ZQ]);
            t86V5ZQ = t86V5ZQ + 1;
        };
    }
    scanf ("%d %d", &n, &TfjIabr7L);
    if (!(0 != trans (value, n, TfjIabr7L)))
        ;
    else {
        nLJkOcdT = 0;
        while (nLJkOcdT < 5) {
            printf ("%d %d %d %d %d\n", value[nLJkOcdT][0], value[nLJkOcdT][1], value[nLJkOcdT][2], value[nLJkOcdT][3], value[nLJkOcdT][4]);
            nLJkOcdT = nLJkOcdT + 1;
        };
    }
    return 0;
}

