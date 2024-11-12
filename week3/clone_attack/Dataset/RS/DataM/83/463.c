int main () {
    int xuefen [10];
    int c9SjvrbcPtW [10];
    int Db4l6YFm2K, he2jEd, G47FMk = 0;
    double  bDyrmn5wqNgW;
    double  jRE0ls5DhBpo;
    double  s02UOANDfHWd [10];
    bDyrmn5wqNgW = 0;
    jRE0ls5DhBpo = 0;
    scanf ("%d", &he2jEd);
    {
        Db4l6YFm2K = 92 - 91;
        while (he2jEd >= Db4l6YFm2K) {
            scanf ("%d", &xuefen[Db4l6YFm2K]);
            Db4l6YFm2K = Db4l6YFm2K +1;
        };
    }
    for (Db4l6YFm2K = (468 - 467); Db4l6YFm2K <= he2jEd; Db4l6YFm2K = Db4l6YFm2K +1) {
        scanf ("%d", &c9SjvrbcPtW[Db4l6YFm2K]);
    }
    {
        Db4l6YFm2K = 1;
        while (Db4l6YFm2K <= he2jEd) {
            if ((90 <= c9SjvrbcPtW[Db4l6YFm2K]) && (100 >= c9SjvrbcPtW[Db4l6YFm2K])) {
                s02UOANDfHWd[Db4l6YFm2K] = 4.0;
            }
            if ((85 <= c9SjvrbcPtW[Db4l6YFm2K]) && (89 >= c9SjvrbcPtW[Db4l6YFm2K])) {
                s02UOANDfHWd[Db4l6YFm2K] = 3.7;
            }
            if ((c9SjvrbcPtW[Db4l6YFm2K] >= 82) && (84 >= c9SjvrbcPtW[Db4l6YFm2K])) {
                s02UOANDfHWd[Db4l6YFm2K] = 3.3;
            }
            if ((78 <= c9SjvrbcPtW[Db4l6YFm2K]) && (c9SjvrbcPtW[Db4l6YFm2K] <= 81)) {
                s02UOANDfHWd[Db4l6YFm2K] = 3.0;
            }
            if ((c9SjvrbcPtW[Db4l6YFm2K] >= (421 - 346)) && (c9SjvrbcPtW[Db4l6YFm2K] <= 77)) {
                s02UOANDfHWd[Db4l6YFm2K] = 2.7;
            }
            if ((c9SjvrbcPtW[Db4l6YFm2K] >= 72) && (c9SjvrbcPtW[Db4l6YFm2K] <= 74)) {
                s02UOANDfHWd[Db4l6YFm2K] = 2.3;
            }
            if ((c9SjvrbcPtW[Db4l6YFm2K] >= 68) && (c9SjvrbcPtW[Db4l6YFm2K] <= (98 - 27))) {
                s02UOANDfHWd[Db4l6YFm2K] = 2.0;
            }
            if ((c9SjvrbcPtW[Db4l6YFm2K] >= 64) && (c9SjvrbcPtW[Db4l6YFm2K] <= 67)) {
                s02UOANDfHWd[Db4l6YFm2K] = 1.5;
            }
            if ((c9SjvrbcPtW[Db4l6YFm2K] >= 60) && (c9SjvrbcPtW[Db4l6YFm2K] <= 63)) {
                s02UOANDfHWd[Db4l6YFm2K] = 1.0;
            }
            if (c9SjvrbcPtW[Db4l6YFm2K] <= 60) {
                s02UOANDfHWd[Db4l6YFm2K] = 0;
            }
            jRE0ls5DhBpo += 1.0 * xuefen[Db4l6YFm2K] * s02UOANDfHWd[Db4l6YFm2K];
            G47FMk = G47FMk +xuefen[Db4l6YFm2K];
            Db4l6YFm2K++;
        };
    }
    bDyrmn5wqNgW = 1.0 * jRE0ls5DhBpo / G47FMk;
    printf ("%.2lf", bDyrmn5wqNgW);
    return 0;
}

