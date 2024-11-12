void  main () {
    int jiang [(1838 - 838)];
    int jfqt4gsPlyVZ, EjUBcLN5tT, gVIQrnRYm, xue, fVTLsJk;
    char Rk8yxPsu75Q [1000];
    int v0BOHDN [1000];
    char LfNCBs9M [(1041 - 41)];
    char I9J1345Nu [(1575 - 575)] [100];
    int cteWiZX8 [1000];
    int NifbGUx [1000];
    xue = (732 - 732);
    scanf ("%d", &jfqt4gsPlyVZ);
    for (EjUBcLN5tT = (170 - 170); EjUBcLN5tT < jfqt4gsPlyVZ; EjUBcLN5tT = EjUBcLN5tT +1) {
        scanf ("%s%d %d %c %c %d", I9J1345Nu[EjUBcLN5tT], &NifbGUx[EjUBcLN5tT], &v0BOHDN[EjUBcLN5tT], &Rk8yxPsu75Q[EjUBcLN5tT], &LfNCBs9M[EjUBcLN5tT], &cteWiZX8[EjUBcLN5tT]);
        jiang[EjUBcLN5tT] = (702 - 702);
        if ((472 - 392) < NifbGUx[EjUBcLN5tT] && 1 <= cteWiZX8[EjUBcLN5tT])
            jiang[EjUBcLN5tT] = 8000;
        if ((1072 - 987) < NifbGUx[EjUBcLN5tT] && v0BOHDN[EjUBcLN5tT] > 80)
            jiang[EjUBcLN5tT] = jiang[EjUBcLN5tT] + 4000;
        if (90 < NifbGUx[EjUBcLN5tT])
            jiang[EjUBcLN5tT] = jiang[EjUBcLN5tT] + 2000;
        if (85 < NifbGUx[EjUBcLN5tT] && !('Y' != LfNCBs9M[EjUBcLN5tT]))
            jiang[EjUBcLN5tT] = jiang[EjUBcLN5tT] + 1000;
        if (v0BOHDN[EjUBcLN5tT] > 80 && !('Y' != Rk8yxPsu75Q[EjUBcLN5tT]))
            jiang[EjUBcLN5tT] = jiang[EjUBcLN5tT] + 850;
    }
    fVTLsJk = 0;
    gVIQrnRYm = jiang[0];
    for (EjUBcLN5tT = 0; EjUBcLN5tT < jfqt4gsPlyVZ; EjUBcLN5tT = EjUBcLN5tT +1) {
        if (jiang[EjUBcLN5tT] > gVIQrnRYm) {
            gVIQrnRYm = jiang[EjUBcLN5tT];
            xue = EjUBcLN5tT;
        }
    }
    printf ("%s\n", I9J1345Nu[xue]);
    for (EjUBcLN5tT = 0; EjUBcLN5tT < jfqt4gsPlyVZ; EjUBcLN5tT = EjUBcLN5tT +1) {
        fVTLsJk = fVTLsJk + jiang[EjUBcLN5tT];
    }
    printf ("%d\n", jiang[xue]);
    printf ("%d\n", fVTLsJk);
}

