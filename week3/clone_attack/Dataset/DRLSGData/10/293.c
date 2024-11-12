main () {
    int MWjkdGD;
    int ZUZOYL;
    int MHNnh3yW [ZUZOYL];
    int g5wOPsqEZ;
    int nkgWZU7r [ZUZOYL];
    int w4idzMlOWUSe;
    w4idzMlOWUSe = 0;
    scanf ("%d", &ZUZOYL);
    for (MWjkdGD = 0; MWjkdGD < ZUZOYL; MWjkdGD = MWjkdGD +1)
        scanf ("%d", &MHNnh3yW[MWjkdGD]);
    for (MWjkdGD = 0; MWjkdGD < ZUZOYL; MWjkdGD = MWjkdGD +1)
        nkgWZU7r[MWjkdGD] = 1;
    nkgWZU7r[ZUZOYL -1] = 1;
    for (MWjkdGD = ZUZOYL -2; MWjkdGD >= 0; MWjkdGD = MWjkdGD -1) {
        for (g5wOPsqEZ = MWjkdGD +1; g5wOPsqEZ < ZUZOYL; g5wOPsqEZ = g5wOPsqEZ + 1) {
            if (MHNnh3yW[g5wOPsqEZ] <= MHNnh3yW[MWjkdGD] && nkgWZU7r[g5wOPsqEZ] + 1 >= nkgWZU7r[MWjkdGD])
                nkgWZU7r[MWjkdGD] = nkgWZU7r[g5wOPsqEZ] + 1;
        }
    }
    for (MWjkdGD = 0; MWjkdGD < ZUZOYL; MWjkdGD = MWjkdGD +1) {
        if (nkgWZU7r[MWjkdGD] > w4idzMlOWUSe)
            w4idzMlOWUSe = nkgWZU7r[MWjkdGD];
    }
    printf ("%d", w4idzMlOWUSe);
}

