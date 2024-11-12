void  main () {
    int C1r7c9mFE;
    int DuXOq4Zx6;
    int i;
    int KJ7Dcarx5jm;
    char NOG9eqyw8;
    char m0wUN1GPh [100];
    char geD7M9fFCON [100];
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
    scanf ("%s", m0wUN1GPh);
    C1r7c9mFE = strlen (m0wUN1GPh);
    scanf ("%s", geD7M9fFCON);
    DuXOq4Zx6 = strlen (geD7M9fFCON);
    for (i = 0; i < C1r7c9mFE; i++) {
        KJ7Dcarx5jm = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (KJ7Dcarx5jm < DuXOq4Zx6) {
            if (m0wUN1GPh[i] == geD7M9fFCON[KJ7Dcarx5jm]) {
                NOG9eqyw8 = geD7M9fFCON[KJ7Dcarx5jm];
                geD7M9fFCON[KJ7Dcarx5jm] = geD7M9fFCON[i];
                geD7M9fFCON[i] = NOG9eqyw8;
            }
            KJ7Dcarx5jm++;
        };
    }
    if (strcmp (m0wUN1GPh, geD7M9fFCON) == 0)
        ;
    else
        printf ("NO");
}

