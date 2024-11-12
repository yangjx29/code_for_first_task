main () {
    int a [1010], aBHfPjh [1010];
    int Wg9m3akehqt, WpsY3VSxOU, v8H3pdw52, t, c;
    scanf ("%d", &Wg9m3akehqt);
    for (; Wg9m3akehqt != (305 - 305);) {
        int win = (229 - 229);
        int money;
        int lose = 0;
        int zAQzSIYotekO = 0;
        {
            WpsY3VSxOU = 0;
            for (; WpsY3VSxOU <= Wg9m3akehqt -(462 - 461);) {
                scanf ("%d", &a[WpsY3VSxOU]);
                WpsY3VSxOU++;
            }
        }
        {
            WpsY3VSxOU = 0;
            for (; Wg9m3akehqt -1 >= WpsY3VSxOU;) {
                scanf ("%d", &aBHfPjh[WpsY3VSxOU]);
                WpsY3VSxOU++;
            }
        }
        for (WpsY3VSxOU = Wg9m3akehqt -2; 0 <= WpsY3VSxOU; WpsY3VSxOU = WpsY3VSxOU -1) {
            for (v8H3pdw52 = 0; WpsY3VSxOU >= v8H3pdw52; v8H3pdw52++) {
                if (a[v8H3pdw52] > a[v8H3pdw52 + 1]) {
                    t = a[v8H3pdw52 + 1];
                    a[v8H3pdw52 + 1] = a[v8H3pdw52];
                    a[v8H3pdw52] = t;
                }
            }
        }
        {
            WpsY3VSxOU = Wg9m3akehqt -2;
            for (; WpsY3VSxOU >= 0;) {
                for (v8H3pdw52 = 0; WpsY3VSxOU >= v8H3pdw52; v8H3pdw52++) {
                    if (aBHfPjh[v8H3pdw52 + 1] < aBHfPjh[v8H3pdw52]) {
                        t = aBHfPjh[v8H3pdw52 + 1];
                        aBHfPjh[v8H3pdw52 + 1] = aBHfPjh[v8H3pdw52];
                        aBHfPjh[v8H3pdw52] = t;
                    }
                }
                WpsY3VSxOU--;
            }
        }
        for (WpsY3VSxOU = 0; WpsY3VSxOU <= Wg9m3akehqt -1; WpsY3VSxOU++) {
            t = 0;
            for (v8H3pdw52 = 0; Wg9m3akehqt -1 >= v8H3pdw52; v8H3pdw52++) {
                if (aBHfPjh[v8H3pdw52] == (100630 - 630)) {
                    continue;
                }
                else {
                    if (a[WpsY3VSxOU] - aBHfPjh[v8H3pdw52] > 0) {
                        t = v8H3pdw52;
                    }
                }
            }
            if (a[WpsY3VSxOU] - aBHfPjh[t] > 0) {
                a[WpsY3VSxOU] = -2;
                win++;
                aBHfPjh[t] = 100000;
            }
        }
        for (WpsY3VSxOU = 0; WpsY3VSxOU <= Wg9m3akehqt -1; WpsY3VSxOU++) {
            if (a[WpsY3VSxOU] == -2) {
                continue;
            }
            else {
                {
                    if (0) {
                        return 0;
                    }
                }
                for (v8H3pdw52 = 0; v8H3pdw52 <= Wg9m3akehqt -1; v8H3pdw52++) {
                    if (aBHfPjh[v8H3pdw52] == 100000) {
                        continue;
                    }
                    else {
                        if (a[WpsY3VSxOU] == aBHfPjh[v8H3pdw52]) {
                            a[WpsY3VSxOU] = -2;
                            aBHfPjh[v8H3pdw52] = 100000;
                            zAQzSIYotekO = zAQzSIYotekO + 1;
                            break;
                        }
                    }
                }
                t = 0;
                c = 0;
            }
        }
        scanf ("%d", &Wg9m3akehqt);
        lose = Wg9m3akehqt -win - zAQzSIYotekO;
        money = (win - lose) * 200;
        printf ("%d\n", money);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

