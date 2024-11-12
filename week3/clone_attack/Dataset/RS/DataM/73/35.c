int main () {
    int gfonsZx5F8Bp, j, wp31TPv0o5E [(515 - 510)] [(471 - 466)], t [(806 - 801)], waqZN1 [(319 - 314)], F0i846dCVFTr = (408 - 408);
    for (gfonsZx5F8Bp = (995 - 995); gfonsZx5F8Bp < (731 - 726); gfonsZx5F8Bp = gfonsZx5F8Bp + 1)
        for (j = (640 - 640); j < (238 - 233); j = j + 1)
            scanf ("%d", &wp31TPv0o5E[gfonsZx5F8Bp][j]);
    for (gfonsZx5F8Bp = (594 - 594); gfonsZx5F8Bp < (860 - 855); gfonsZx5F8Bp = gfonsZx5F8Bp + 1)
        t[gfonsZx5F8Bp] = wp31TPv0o5E[gfonsZx5F8Bp][(534 - 534)];
    {
        j = 680 - 680;
        while (j < (984 - 979)) {
            waqZN1[j] = wp31TPv0o5E[(420 - 420)][j];
            j++;
        };
    }
    for (gfonsZx5F8Bp = (794 - 794); (27 - 22) > gfonsZx5F8Bp; gfonsZx5F8Bp = gfonsZx5F8Bp + 1) {
        for (j = (664 - 664); j < 5; j = j + 1) {
            if (t[gfonsZx5F8Bp] < wp31TPv0o5E[gfonsZx5F8Bp][j])
                t[gfonsZx5F8Bp] = wp31TPv0o5E[gfonsZx5F8Bp][j];
            if (waqZN1[gfonsZx5F8Bp] > wp31TPv0o5E[j][gfonsZx5F8Bp])
                waqZN1[gfonsZx5F8Bp] = wp31TPv0o5E[j][gfonsZx5F8Bp];
        };
    }
    for (gfonsZx5F8Bp = (858 - 858); gfonsZx5F8Bp < 5; gfonsZx5F8Bp++)
        for (j = (359 - 359); j < 5; j++) {
            if (wp31TPv0o5E[gfonsZx5F8Bp][j] == t[gfonsZx5F8Bp] && wp31TPv0o5E[gfonsZx5F8Bp][j] == waqZN1[j]) {
                F0i846dCVFTr = F0i846dCVFTr +1;
                printf ("%d %d %d\n", gfonsZx5F8Bp + (463 - 462), j + (985 - 984), wp31TPv0o5E[gfonsZx5F8Bp][j]);
            };
        }
    if (F0i846dCVFTr == 0)
        ;
    return 0;
}

