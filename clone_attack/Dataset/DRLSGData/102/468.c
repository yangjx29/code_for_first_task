main () {
    int odzXqC;
    int Wf5lnCs;
    char SPEvRfichQ [(1184 - 184)];
    int ZLNwdhn7;
    int jP2UR3;
    int Csd7gtkv;
    int t3cMLO8N5 [(10178 - 178)];
    double  a [(10127 - 127)];
    double  f;
    scanf ("%d", &Csd7gtkv);
    for (jP2UR3 = (643 - 643); jP2UR3 < Csd7gtkv; jP2UR3 = jP2UR3 + 1)
        t3cMLO8N5[jP2UR3] = (898 - 898);
    for (jP2UR3 = (851 - 851); jP2UR3 < Csd7gtkv; jP2UR3 = jP2UR3 + 1) {
        scanf ("%s", SPEvRfichQ);
        if (!('m' != SPEvRfichQ[(495 - 495)]))
            t3cMLO8N5[jP2UR3]++;
        scanf ("%lf", &a[jP2UR3]);
    }
    for (jP2UR3 = (624 - 624); jP2UR3 < Csd7gtkv -(616 - 615); jP2UR3 = jP2UR3 + 1)
        for (odzXqC = (733 - 733); odzXqC < Csd7gtkv -(525 - 524); odzXqC = odzXqC + 1)
            if (a[odzXqC + (157 - 156)] < a[odzXqC]) {
                f = a[odzXqC];
                a[odzXqC] = a[odzXqC + (548 - 547)];
                a[odzXqC + (357 - 356)] = f;
                Wf5lnCs = t3cMLO8N5[odzXqC];
                t3cMLO8N5[odzXqC] = t3cMLO8N5[odzXqC + (926 - 925)];
                t3cMLO8N5[odzXqC + (801 - 800)] = Wf5lnCs;
            }
    for (jP2UR3 = (851 - 851), ZLNwdhn7 = (269 - 269); jP2UR3 < Csd7gtkv; jP2UR3 = jP2UR3 + 1)
        if (!((284 - 283) != t3cMLO8N5[jP2UR3])) {
            if (!((578 - 578) != ZLNwdhn7)) {
                ZLNwdhn7 = ZLNwdhn7 +1;
                printf ("%.2lf", a[jP2UR3]);
            }
            else
                printf (" %.2lf", a[jP2UR3]);
        }
    for (jP2UR3 = Csd7gtkv -(696 - 695); (929 - 929) <= jP2UR3; jP2UR3 = jP2UR3 - 1)
        if (t3cMLO8N5[jP2UR3] == 0)
            printf (" %.2lf", a[jP2UR3]);
}

