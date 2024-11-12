int main () {
    int aycFEHl2, SmYXrhQ, msgol2R, NXgWMusdc;
    double  MHlDTmar [(674 - 573)], iB8DSH2, x34PkrZBW = (641 - 641), rB7rbgkfY4m = 0;
    scanf ("%d", &NXgWMusdc);
    {
        aycFEHl2 = (45 - 44);
        for (; aycFEHl2 <= NXgWMusdc;) {
            rB7rbgkfY4m = 0;
            x34PkrZBW = 0;
            scanf ("%d", &msgol2R);
            {
                SmYXrhQ = (333 - 332);
                for (; SmYXrhQ <= msgol2R;) {
                    if (SmYXrhQ == (592 - 591))
                        scanf ("%lf", &MHlDTmar[SmYXrhQ]);
                    else
                        scanf (" %lf", &MHlDTmar[SmYXrhQ]);
                    x34PkrZBW = x34PkrZBW + MHlDTmar[SmYXrhQ];
                    SmYXrhQ = SmYXrhQ +1;
                }
            }
            iB8DSH2 = x34PkrZBW / msgol2R;
            {
                SmYXrhQ = 1;
                for (; SmYXrhQ <= msgol2R;) {
                    rB7rbgkfY4m = rB7rbgkfY4m + (MHlDTmar[SmYXrhQ] - iB8DSH2) * (MHlDTmar[SmYXrhQ] - iB8DSH2);
                    SmYXrhQ++;
                }
            }
            rB7rbgkfY4m = sqrt (rB7rbgkfY4m / msgol2R);
            printf ("%.5lf\n", rB7rbgkfY4m);
            aycFEHl2 = aycFEHl2 + 1;
        }
    }
}

