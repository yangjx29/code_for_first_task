main () {
    char Skp65Yx [101];
    int CV9CMAP [(662 - 561)] = {(262 - 262)}, kqE4F350nxtM, VUlD3w9P [(794 - 694)], obYNmF0KzZ9U, qe4pXIr, tail, lPhixpv = 0;
    scanf ("%s", Skp65Yx);
    kqE4F350nxtM = strlen (Skp65Yx);
    {
        int gU34z8Hlr = 0;
        while (gU34z8Hlr < 100) {
            VUlD3w9P[gU34z8Hlr] = -1;
            gU34z8Hlr = gU34z8Hlr + 1;
        };
    }
    {
        int gU34z8Hlr = 0;
        while (kqE4F350nxtM > gU34z8Hlr) {
            CV9CMAP[gU34z8Hlr] = (int) Skp65Yx[gU34z8Hlr] - 48;
            gU34z8Hlr = gU34z8Hlr + 1;
        };
    }
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
    {
        int gU34z8Hlr = 0;
        while (gU34z8Hlr < kqE4F350nxtM) {
            VUlD3w9P[gU34z8Hlr] = CV9CMAP[gU34z8Hlr] / (215 - 202);
            CV9CMAP[gU34z8Hlr + 1] = CV9CMAP[gU34z8Hlr + 1] + (CV9CMAP[gU34z8Hlr] % 13) * 10;
            gU34z8Hlr = gU34z8Hlr + 1;
        };
    }
    {
        tail = 99;
        while (!(-1 != VUlD3w9P[tail])) {
            tail = tail - 1;
        };
    }
    {
        qe4pXIr = 0;
        while (VUlD3w9P[qe4pXIr] == 0) {
            qe4pXIr = qe4pXIr + 1;
        };
    }
    {
        int gU34z8Hlr = qe4pXIr;
        while (gU34z8Hlr <= tail) {
            lPhixpv = 1;
            printf ("%1d", VUlD3w9P[gU34z8Hlr]);
            gU34z8Hlr++;
        };
    }
    if (!lPhixpv)
        ;
    printf ("%d\n", CV9CMAP[kqE4F350nxtM] / 10);
}

