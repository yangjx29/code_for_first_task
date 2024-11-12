void  main () {
    char oi6O4s1dRc7 [500];
    char H5NZgYHlLErX [500] [6];
    int oFSaZO, BAlEUL7S0WD, U350PuihTB1 [500] = {0}, SXZ0aPGFg, qFuW8GLod, efmgVvz, nw0eLHx;
    scanf ("%d", &oFSaZO);
    scanf ("%s", oi6O4s1dRc7);
    BAlEUL7S0WD = strlen (oi6O4s1dRc7);
    {
        SXZ0aPGFg = 0;
        for (; BAlEUL7S0WD -oFSaZO + 1 > SXZ0aPGFg;) {
            {
                qFuW8GLod = 0;
                for (; oFSaZO > qFuW8GLod;) {
                    H5NZgYHlLErX[SXZ0aPGFg][qFuW8GLod] = oi6O4s1dRc7[SXZ0aPGFg +qFuW8GLod];
                    qFuW8GLod++;
                }
            }
            H5NZgYHlLErX[SXZ0aPGFg][qFuW8GLod] = '\0';
            SXZ0aPGFg++;
        }
    }
    {
        SXZ0aPGFg = 0;
        for (; BAlEUL7S0WD -oFSaZO > SXZ0aPGFg;) {
            {
                qFuW8GLod = SXZ0aPGFg +1;
                for (; BAlEUL7S0WD -oFSaZO + 1 > qFuW8GLod;) {
                    if (!(0 != strcmp (H5NZgYHlLErX[SXZ0aPGFg], H5NZgYHlLErX[qFuW8GLod])) && H5NZgYHlLErX[SXZ0aPGFg][0] != 0) {
                        U350PuihTB1[SXZ0aPGFg]++;
                        H5NZgYHlLErX[qFuW8GLod][0] = 0;
                    }
                    qFuW8GLod++;
                }
            }
            SXZ0aPGFg++;
        }
    }
    nw0eLHx = U350PuihTB1[0];
    {
        SXZ0aPGFg = 1;
        for (; BAlEUL7S0WD -oFSaZO + 1 > SXZ0aPGFg;) {
            if (nw0eLHx < U350PuihTB1[SXZ0aPGFg])
                nw0eLHx = U350PuihTB1[SXZ0aPGFg];
            SXZ0aPGFg++;
        }
    }
    if (!(0 != nw0eLHx))
        ;
    else {
        printf ("%d\n", nw0eLHx + 1);
        for (SXZ0aPGFg = 0; SXZ0aPGFg < BAlEUL7S0WD -oFSaZO + 1; SXZ0aPGFg++)
            if (U350PuihTB1[SXZ0aPGFg] == nw0eLHx)
                printf ("%s\n", H5NZgYHlLErX[SXZ0aPGFg]);
    }
}

