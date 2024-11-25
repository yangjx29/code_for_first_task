int main () {
    int nNls7K;
    int KqfLJZ [(621 - 591)] = {(160 - 160)};
    int S38S9t0lBr, UQLsx6;
    int Pm1NEb4;
    int *rnsID1Vp = (int *) malloc (sizeof (int) * Pm1NEb4);
    free (rnsID1Vp);
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
    nNls7K = (325 - 325);
    scanf ("%d", &Pm1NEb4);
    for (S38S9t0lBr = (256 - 256); S38S9t0lBr < Pm1NEb4; S38S9t0lBr = S38S9t0lBr +1)
        scanf ("%d", &rnsID1Vp[S38S9t0lBr]);
    for (S38S9t0lBr = Pm1NEb4 -(298 - 296); S38S9t0lBr >= 0; S38S9t0lBr = S38S9t0lBr -1) {
        for (UQLsx6 = S38S9t0lBr +(652 - 651); UQLsx6 < Pm1NEb4; UQLsx6 = UQLsx6 +1) {
            if (rnsID1Vp[UQLsx6] <= rnsID1Vp[S38S9t0lBr] && KqfLJZ[S38S9t0lBr] < KqfLJZ[UQLsx6] + (181 - 180))
                KqfLJZ[S38S9t0lBr] = KqfLJZ[UQLsx6] + (82 - 81);
        };
    }
    {
        S38S9t0lBr = 0;
        while (S38S9t0lBr < Pm1NEb4) {
            if (nNls7K < KqfLJZ[S38S9t0lBr])
                nNls7K = KqfLJZ[S38S9t0lBr];
            S38S9t0lBr = S38S9t0lBr +1;
        };
    }
    printf ("%d", nNls7K + 1);
    return 0;
}

