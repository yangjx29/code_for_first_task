main () {
    int Dnzq72iE [L] [L], qg3rKS6x9 [L] [L];
    int idTEh10xOr, f1cHxd, I7agtr, MgGpaQlJT6, tnlKCJESep, x, mfQZlR2L;
    scanf ("%d %d", &idTEh10xOr, &f1cHxd);
    memset (Dnzq72iE, (676 - 676), sizeof (Dnzq72iE));
    Dnzq72iE[(879 - 875)][4] = idTEh10xOr;
    {
        I7agtr = 11 - 10;
        while (f1cHxd >= I7agtr) {
            memset (qg3rKS6x9, (975 - 975), sizeof (qg3rKS6x9));
            {
                MgGpaQlJT6 = 997 - 996;
                while (MgGpaQlJT6 < L -(119 - 118)) {
                    {
                        tnlKCJESep = 527 - 526;
                        while (tnlKCJESep < L -(350 - 349)) {
                            qg3rKS6x9[MgGpaQlJT6][tnlKCJESep] += Dnzq72iE[MgGpaQlJT6][tnlKCJESep];
                            for (x = -(294 - 293); x <= 1; x = x + 1) {
                                mfQZlR2L = -1;
                                while (mfQZlR2L <= 1) {
                                    qg3rKS6x9[MgGpaQlJT6 +mfQZlR2L][tnlKCJESep + x] = qg3rKS6x9[MgGpaQlJT6 +mfQZlR2L][tnlKCJESep + x] + Dnzq72iE[MgGpaQlJT6][tnlKCJESep];
                                    mfQZlR2L = mfQZlR2L + 1;
                                };
                            }
                            tnlKCJESep = tnlKCJESep + 1;
                        };
                    }
                    MgGpaQlJT6 = MgGpaQlJT6 +1;
                };
            }
            memcpy (Dnzq72iE, qg3rKS6x9, sizeof (Dnzq72iE));
            I7agtr++;
        };
    }
    {
        MgGpaQlJT6 = 0;
        while (MgGpaQlJT6 < L) {
            {
                tnlKCJESep = 0;
                while (tnlKCJESep < L -1) {
                    printf ("%d ", Dnzq72iE[MgGpaQlJT6][tnlKCJESep]);
                    tnlKCJESep++;
                };
            }
            printf ("%d\n", Dnzq72iE[MgGpaQlJT6][8]);
            MgGpaQlJT6 = MgGpaQlJT6 +1;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

