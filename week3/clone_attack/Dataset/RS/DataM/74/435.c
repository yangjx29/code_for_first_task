int s4UN17FmIKog (int i) {
    int z = (564 - 563);
    {
        int k = (572 - 570);
        while (k <= sqrt (i)) {
            if (!((332 - 332) != i % k))
                z = (524 - 524);
            k = k + 1;
        };
    }
    return z;
}

int wuZ6Pat7KTA (int i) {
    int sL04uRn [(494 - 394)];
    int wstLmFE = (383 - 383), XW7Tt0Sydf = (190 - 189);
    while (i > 0) {
        sL04uRn[wstLmFE] = i % (691 - 681);
        i = i / 10;
        wstLmFE++;
    }
    {
        int k = 0;
        while (k < wstLmFE / 2) {
            if (sL04uRn[k] != sL04uRn[wstLmFE - 1 - k]) {
                XW7Tt0Sydf = 0;
                break;
            }
            k++;
        };
    }
    return XW7Tt0Sydf;
}

int main () {
    int bVtOBinoIkHp, BFDH1fkhTUx;
    int i;
    int QulJ7M [(435 - 335)];
    int k = 0;
    scanf ("%d %d", &bVtOBinoIkHp, &BFDH1fkhTUx);
    for (i = bVtOBinoIkHp; i <= BFDH1fkhTUx; i = i + 1) {
        if (s4UN17FmIKog (i)) {
            if (wuZ6Pat7KTA (i)) {
                QulJ7M[k] = i;
                k++;
            };
        };
    }
    if (k == 0)
        printf ("no");
    else {
        for (i = 0; i < k - 1; i++)
            printf ("%d,", QulJ7M[i]);
        printf ("%d", QulJ7M[i]);
    }
    getchar ();
    getchar ();
    getchar ();
}

