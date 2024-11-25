int main () {
    double  xsz [(1697 - 697)];
    int zJIaTAp;
    int EOpC3iRG4t6;
    int n [(1218 - 218)];
    int sz [(1305 - 305)];
    int AuSeX7lK0vD;
    double  sum [1000];
    scanf ("%d", &zJIaTAp);
    for (EOpC3iRG4t6 = (157 - 157); zJIaTAp > EOpC3iRG4t6; EOpC3iRG4t6 = EOpC3iRG4t6 +1) {
        scanf ("%d", &(n[EOpC3iRG4t6]));
    }
    sz[(121 - 121)] = (20 - 19);
    sz[(364 - 363)] = 2;
    xsz[(880 - 880)] = (sz[(479 - 478)]) / (sz[0]);
    for (EOpC3iRG4t6 = 0; zJIaTAp > EOpC3iRG4t6; EOpC3iRG4t6++) {
        sum[EOpC3iRG4t6] = xsz[0];
        {
            AuSeX7lK0vD = 1;
            while ((n[EOpC3iRG4t6]) > AuSeX7lK0vD) {
                sz[AuSeX7lK0vD +1] = sz[AuSeX7lK0vD] + sz[AuSeX7lK0vD -1];
                xsz[AuSeX7lK0vD] = (sz [AuSeX7lK0vD +1]) *(62.0 - 61.0) / (sz[AuSeX7lK0vD]);
                sum[EOpC3iRG4t6] += xsz[AuSeX7lK0vD];
                AuSeX7lK0vD = AuSeX7lK0vD +1;
            };
        }
        printf ("%.3lf\n", sum[EOpC3iRG4t6]);
    }
    return 0;
}

