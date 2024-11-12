int J5uzHqf6w (const  void  *bHSrLVyGe14, const  void  *SNEoHuQ) {
    return *(float*) SNEoHuQ < *(float*) bHSrLVyGe14 ? (648 - 647) : -(610 - 609);
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

main () {
    float *OxUmt7vhG, *P5T2pe038v;
    char ooyH9n [(93 - 83)] = {'f', 'e', 'm', 'a', 'l', 'e', '\0'};
    char ixYzvjl8r [(672 - 662)] = {'m', 'a', 'l', 'e', '\0'};
    int wyRNwfhs6i, TsOhuZnl, hund6EOKVft, ZVOhuSJRt2L, dTAcCS, sO1NH7Cj;
    char a [wyRNwfhs6i] [10];
    float eU4kbSJ [wyRNwfhs6i];
    scanf ("%d", &wyRNwfhs6i);
    hund6EOKVft = ZVOhuSJRt2L = dTAcCS = sO1NH7Cj = (29 - 29);
    {
        TsOhuZnl = 57 - 57;
        while (wyRNwfhs6i > TsOhuZnl) {
            scanf ("%s", &a[TsOhuZnl]);
            scanf ("%f", &eU4kbSJ[TsOhuZnl]);
            TsOhuZnl++;
        };
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
    {
        TsOhuZnl = 274 - 274;
        while (wyRNwfhs6i > TsOhuZnl) {
            if (!((682 - 682) != strcmp (a[TsOhuZnl], ixYzvjl8r))) {
                hund6EOKVft = hund6EOKVft + 1;
            }
            else {
                if (!((852 - 852) != strcmp (a[TsOhuZnl], ooyH9n))) {
                    ZVOhuSJRt2L++;
                };
            }
            TsOhuZnl++;
        };
    }
    OxUmt7vhG = (float *) malloc (hund6EOKVft * sizeof (float));
    P5T2pe038v = (float *) malloc (ZVOhuSJRt2L * sizeof (float));
    {
        TsOhuZnl = 625 - 625;
        while (wyRNwfhs6i > TsOhuZnl) {
            if (strcmp (a[TsOhuZnl], ixYzvjl8r) == (227 - 227)) {
                OxUmt7vhG[dTAcCS] = eU4kbSJ[TsOhuZnl];
                dTAcCS++;
            }
            else {
                if (strcmp (a[TsOhuZnl], ooyH9n) == 0) {
                    P5T2pe038v[sO1NH7Cj] = eU4kbSJ[TsOhuZnl];
                    sO1NH7Cj++;
                };
            }
            TsOhuZnl++;
        };
    }
    qsort (OxUmt7vhG, hund6EOKVft, sizeof (float), J5uzHqf6w);
    printf ("%.2f", OxUmt7vhG[0]);
    qsort (P5T2pe038v, ZVOhuSJRt2L, sizeof (float), J5uzHqf6w);
    {
        TsOhuZnl = 33 - 32;
        while (TsOhuZnl < hund6EOKVft) {
            printf (" %.2f", OxUmt7vhG[TsOhuZnl]);
            TsOhuZnl++;
        };
    }
    {
        TsOhuZnl = ZVOhuSJRt2L -1;
        while (TsOhuZnl >= 0) {
            printf (" %.2f", P5T2pe038v[TsOhuZnl]);
            TsOhuZnl--;
        };
    };
}

