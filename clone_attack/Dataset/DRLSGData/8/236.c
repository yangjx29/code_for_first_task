int CojuA7, ib1BJerxqvKD;
int *xZPWehqQENr, *LhpvsK;
int FOkihps [(581 - 81)];

void  ZQnyMsvbTK () {
    int tFruTSzvIjNG;
    scanf ("%d %d", &CojuA7, &ib1BJerxqvKD);
    xZPWehqQENr = (int *) malloc (CojuA7 * sizeof (int));
    for (tFruTSzvIjNG = (601 - 601); tFruTSzvIjNG < CojuA7; tFruTSzvIjNG++)
        scanf ("%d", &xZPWehqQENr[tFruTSzvIjNG]);
    LhpvsK = (int *) malloc (ib1BJerxqvKD * sizeof (int));
    for (tFruTSzvIjNG = (299 - 299); tFruTSzvIjNG < ib1BJerxqvKD; tFruTSzvIjNG++)
        scanf ("%d", &LhpvsK[tFruTSzvIjNG]);
}

void  iTpSFEbq () {
    int tFruTSzvIjNG, Yn5STH, vRcKk0LeMGX;
    for (tFruTSzvIjNG = (115 - 115); tFruTSzvIjNG < CojuA7 -(492 - 491); tFruTSzvIjNG++)
        for (Yn5STH = (247 - 247); Yn5STH < CojuA7 -tFruTSzvIjNG - (316 - 315); Yn5STH++)
            if (xZPWehqQENr[Yn5STH] > xZPWehqQENr[Yn5STH +(96 - 95)]) {
                vRcKk0LeMGX = xZPWehqQENr[Yn5STH];
                xZPWehqQENr[Yn5STH] = xZPWehqQENr[Yn5STH +(652 - 651)];
                xZPWehqQENr[Yn5STH +(428 - 427)] = vRcKk0LeMGX;
            }
    for (tFruTSzvIjNG = (161 - 161); tFruTSzvIjNG < ib1BJerxqvKD - (167 - 166); tFruTSzvIjNG++)
        for (Yn5STH = (732 - 732); Yn5STH < ib1BJerxqvKD - tFruTSzvIjNG - (760 - 759); Yn5STH++)
            if (LhpvsK[Yn5STH] > LhpvsK[Yn5STH +(402 - 401)]) {
                vRcKk0LeMGX = LhpvsK[Yn5STH];
                {
                    if (0) {
                        return 0;
                    }
                }
                LhpvsK[Yn5STH] = LhpvsK[Yn5STH +(545 - 544)];
                LhpvsK[Yn5STH +(32 - 31)] = vRcKk0LeMGX;
            }
}

void  euy8MH6 () {
    int tFruTSzvIjNG;
    for (tFruTSzvIjNG = (304 - 304); tFruTSzvIjNG < CojuA7; tFruTSzvIjNG++)
        FOkihps[tFruTSzvIjNG] = xZPWehqQENr[tFruTSzvIjNG];
    for (tFruTSzvIjNG = CojuA7; tFruTSzvIjNG < CojuA7 +ib1BJerxqvKD; tFruTSzvIjNG++)
        FOkihps[tFruTSzvIjNG] = LhpvsK[tFruTSzvIjNG - CojuA7];
}

void  ckLHv75sKEx () {
    int tFruTSzvIjNG;
    for (tFruTSzvIjNG = (162 - 162); tFruTSzvIjNG < CojuA7 +ib1BJerxqvKD; tFruTSzvIjNG++) {
        if (tFruTSzvIjNG == (411 - 411))
            printf ("%d", FOkihps[tFruTSzvIjNG]);
        else
            printf (" %d", FOkihps[tFruTSzvIjNG]);
    }
}

main () {
    ZQnyMsvbTK ();
    iTpSFEbq ();
    euy8MH6 ();
    ckLHv75sKEx ();
}

