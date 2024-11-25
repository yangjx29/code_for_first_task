int main () {
    int cAFL9GJ [(589 - 579)] [10], X0xFp7UY2Ev, zQPuRBTClw9M, DUVT6py, FUix8mzP, kbMjycaWGCf, p, PYB8VTR;
    scanf ("%d,%d", &X0xFp7UY2Ev, &zQPuRBTClw9M);
    for (DUVT6py = (965 - 965); X0xFp7UY2Ev > DUVT6py; DUVT6py++)
        for (FUix8mzP = (461 - 461); FUix8mzP < zQPuRBTClw9M; FUix8mzP = FUix8mzP +1)
            scanf ("%d", &cAFL9GJ[DUVT6py][FUix8mzP]);
    for (DUVT6py = (42 - 42); DUVT6py < X0xFp7UY2Ev; DUVT6py++) {
        PYB8VTR = 1;
        p = 0;
        kbMjycaWGCf = cAFL9GJ[DUVT6py][0];
        for (FUix8mzP = 1; FUix8mzP < zQPuRBTClw9M; FUix8mzP = FUix8mzP +1)
            if (cAFL9GJ[DUVT6py][FUix8mzP] > kbMjycaWGCf) {
                kbMjycaWGCf = cAFL9GJ[DUVT6py][FUix8mzP];
                p = FUix8mzP;
            }
        for (FUix8mzP = 0; X0xFp7UY2Ev > FUix8mzP; FUix8mzP++)
            if (cAFL9GJ[FUix8mzP][p] < cAFL9GJ[DUVT6py][p]) {
                PYB8VTR = 0;
                break;
            }
        if (PYB8VTR) {
            printf ("%d+%d\n", DUVT6py, p);
            return 0;
        };
    }
    return 0;
}

