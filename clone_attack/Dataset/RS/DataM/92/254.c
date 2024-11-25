int roThSg (const  void  *wJzEi7Yq, const  void  *NSRperIlEvx) {
    return *(int*) NSRperIlEvx -*(int*) wJzEi7Yq;
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
}

main () {
    int EsFQJCN3iZ, AlNsJMDVjC8, mZlbfRdsOcr;
    int RoYQrGRn7j;
    int tm;
    int soH7PGU4yS;
    int sVIqXDxi;
    int xyh4sD [1000], ZI6s8Tcbiy [1000];
    for (;;) {
        scanf ("%d", &EsFQJCN3iZ);
        if (EsFQJCN3iZ == (29 - 29))
            break;
        sVIqXDxi = EsFQJCN3iZ -1;
        for (AlNsJMDVjC8 = 0; EsFQJCN3iZ > AlNsJMDVjC8; AlNsJMDVjC8 = AlNsJMDVjC8 +1)
            scanf ("%d", xyh4sD + AlNsJMDVjC8);
        for (AlNsJMDVjC8 = 0; AlNsJMDVjC8 < EsFQJCN3iZ; AlNsJMDVjC8 = AlNsJMDVjC8 +1)
            scanf ("%d", ZI6s8Tcbiy +AlNsJMDVjC8);
        qsort (xyh4sD, EsFQJCN3iZ, sizeof (int), roThSg);
        qsort (ZI6s8Tcbiy, EsFQJCN3iZ, sizeof (int), roThSg);
        mZlbfRdsOcr = 0;
        RoYQrGRn7j = 0;
        tm = EsFQJCN3iZ -1;
        soH7PGU4yS = 0;
        for (; RoYQrGRn7j <= tm;) {
            if (xyh4sD[tm] > ZI6s8Tcbiy[sVIqXDxi]) {
                mZlbfRdsOcr = mZlbfRdsOcr + 1;
                tm = tm - 1;
                sVIqXDxi = sVIqXDxi - 1;
            }
            else {
                if (xyh4sD[RoYQrGRn7j] > ZI6s8Tcbiy[soH7PGU4yS]) {
                    soH7PGU4yS = soH7PGU4yS + 1;
                    mZlbfRdsOcr = mZlbfRdsOcr + 1;
                    RoYQrGRn7j = RoYQrGRn7j +1;
                }
                else if (xyh4sD[tm] < ZI6s8Tcbiy[soH7PGU4yS]) {
                    tm--, soH7PGU4yS = soH7PGU4yS + 1;
                    mZlbfRdsOcr = mZlbfRdsOcr - 1;
                }
                else
                    break;
            };
        }
        printf ("%d\n", 200 * mZlbfRdsOcr);
    };
}

