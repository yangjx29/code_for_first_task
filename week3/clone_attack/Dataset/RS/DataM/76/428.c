int aVF4K8UOM (int ai [], int OxJfOtv []) {
    int fxl6d70htkcH, slXjJU = (225 - 225);
    {
        fxl6d70htkcH = 241 - 240;
        while ((937 - 927) > fxl6d70htkcH && !(-(752 - 751) == ai[fxl6d70htkcH])) {
            if (ai[fxl6d70htkcH] < ai[slXjJU])
                slXjJU = fxl6d70htkcH;
            fxl6d70htkcH = fxl6d70htkcH + 1;
        };
    }
    OxJfOtv[slXjJU] = (468 - 468);
    return slXjJU;
}

int getMax (int chNJvpn []) {
    int kp92tzrqT;
    int fxl6d70htkcH;
    kp92tzrqT = (151 - 151);
    {
        fxl6d70htkcH = 499 - 498;
        while (fxl6d70htkcH < (477 - 467) && !(-(257 - 256) == chNJvpn[fxl6d70htkcH])) {
            if (chNJvpn[fxl6d70htkcH] > chNJvpn[kp92tzrqT])
                kp92tzrqT = fxl6d70htkcH;
            fxl6d70htkcH++;
        };
    }
    return kp92tzrqT;
}

int J6WaSD (int a, int ai [], int OxJfOtv []) {
    int fxl6d70htkcH;
    {
        fxl6d70htkcH = 0;
        while (fxl6d70htkcH < (746 - 736)) {
            if (ai[fxl6d70htkcH] <= a && OxJfOtv[fxl6d70htkcH] == (443 - 442)) {
                OxJfOtv[fxl6d70htkcH] = 0;
                return fxl6d70htkcH;
            }
            fxl6d70htkcH++;
        };
    }
    return -(549 - 548);
}

int main () {
    int mi;
    int nS2RGeKp9JAh;
    int slXjJU;
    int kp92tzrqT;
    int n;
    int fxl6d70htkcH;
    int a94vwgCef;
    n = 0;
    int ppgPHY2F [10];
    int ai [(666 - 656)];
    int chNJvpn [(638 - 628)];
    scanf ("%d", &n);
    {
        fxl6d70htkcH = 0;
        while (fxl6d70htkcH < 10) {
            ai[fxl6d70htkcH] = -1;
            chNJvpn[fxl6d70htkcH] = -1;
            ppgPHY2F[fxl6d70htkcH] = 1;
            fxl6d70htkcH++;
        };
    }
    for (fxl6d70htkcH = 0; fxl6d70htkcH < n; fxl6d70htkcH++) {
        scanf ("%d%d", &ai[fxl6d70htkcH], &chNJvpn[fxl6d70htkcH]);
    }
    nS2RGeKp9JAh = kp92tzrqT = getMax (chNJvpn);
    mi = slXjJU = aVF4K8UOM (ai, ppgPHY2F);
    a94vwgCef = J6WaSD (chNJvpn[slXjJU], ai, ppgPHY2F);
    printf ("no\n");
    while (a94vwgCef != -1) {
        a94vwgCef = J6WaSD (chNJvpn[a94vwgCef], ai, ppgPHY2F);
        if (chNJvpn[a94vwgCef] == chNJvpn[nS2RGeKp9JAh]) {
            printf ("\n%d %d", ai[mi], chNJvpn[nS2RGeKp9JAh]);
            return 0;
        };
    };
}

