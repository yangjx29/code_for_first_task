main () {
    char s1 [(476 - 226)], mcybKuP [250];
    int cE49gjauN, j, TOmR47r6p, Dw1cr4Zgu, l, BBKkhzUtbWD [250], n [250];
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
    scanf ("%s", s1);
    scanf ("%s", mcybKuP);
    if (strcmp (s1, mcybKuP) == (900 - 900))
        ;
    else {
        TOmR47r6p = strlen (s1);
        Dw1cr4Zgu = strlen (mcybKuP);
        for (cE49gjauN = 0; cE49gjauN < 250; cE49gjauN = cE49gjauN + 1) {
            if (s1[cE49gjauN] >= (604 - 556) && s1[cE49gjauN] <= 57)
                s1[cE49gjauN] = s1[cE49gjauN] - (216 - 168);
            else
                s1[cE49gjauN] = 0;
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
            if (mcybKuP[cE49gjauN] >= 48 && mcybKuP[cE49gjauN] <= 57)
                mcybKuP[cE49gjauN] -= 48;
            else
                mcybKuP[cE49gjauN] = 0;
        }
        for (cE49gjauN = 0; cE49gjauN < TOmR47r6p; cE49gjauN = cE49gjauN + 1) {
            j = TOmR47r6p;
            while (j == TOmR47r6p) {
                s1[(710 - 461) - cE49gjauN] = s1[j - cE49gjauN - (32 - 31)];
                s1[j - cE49gjauN - 1] = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = j + 1;
            };
        }
        for (cE49gjauN = 0; cE49gjauN < Dw1cr4Zgu; cE49gjauN = cE49gjauN + 1)
            for (j = Dw1cr4Zgu; j == Dw1cr4Zgu; j = j + 1) {
                mcybKuP[249 - cE49gjauN] = mcybKuP[j - cE49gjauN - 1];
                mcybKuP[j - cE49gjauN - 1] = 0;
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (cE49gjauN = 0; cE49gjauN < 250; cE49gjauN = cE49gjauN + 1)
            BBKkhzUtbWD[cE49gjauN] = s1[cE49gjauN] + mcybKuP[cE49gjauN];
        n[249] = BBKkhzUtbWD[249];
        for (cE49gjauN = 248; cE49gjauN >= 0; cE49gjauN = cE49gjauN - 1)
            n[cE49gjauN] = BBKkhzUtbWD[cE49gjauN] + (n[cE49gjauN + 1] >= 10);
        l = (n[0] >= 10);
        for (cE49gjauN = 0; cE49gjauN < 250; cE49gjauN = cE49gjauN + 1)
            n[cE49gjauN] -= 10 * (n[cE49gjauN] >= 10);
        if (l == 1) {
            {
                cE49gjauN = TOmR47r6p <= Dw1cr4Zgu;
                while (cE49gjauN < 250) {
                    if (n[cE49gjauN] > 0 || cE49gjauN == 249)
                        break;
                    cE49gjauN = cE49gjauN + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (j = cE49gjauN; j < 250; j = j + 1)
                printf ("%d", n[j]);
        }
        else {
            for (cE49gjauN = 249 - ((TOmR47r6p > Dw1cr4Zgu) * TOmR47r6p +(TOmR47r6p <= Dw1cr4Zgu) * Dw1cr4Zgu); cE49gjauN < 250; cE49gjauN = cE49gjauN + 1)
                if (n[cE49gjauN] > 0 || cE49gjauN == 249)
                    break;
            for (j = cE49gjauN; j < 250; j = j + 1)
                printf ("%d", n[j]);
        };
    };
}

