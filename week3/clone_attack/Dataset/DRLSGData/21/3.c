void  main () {
    float uTXokg4D = (952 - 952), fvlZSu, pd8mSpj4LFV, t;
    int PW2RSs0 [(294 - 194)], y908Vc1LI, ZLeoaj, HKxnlSE3IhC = (584 - 584), S1GWJrx43 = (748 - 748);
    scanf ("%d", &y908Vc1LI);
    {
        ZLeoaj = 972 - 972;
        while (ZLeoaj <= y908Vc1LI - (762 - 761)) {
            scanf ("%d", &PW2RSs0[ZLeoaj]);
            uTXokg4D += PW2RSs0[ZLeoaj];
            ZLeoaj = ZLeoaj +1;
        }
    }
    fvlZSu = uTXokg4D / y908Vc1LI;
    {
        ZLeoaj = 0;
        while (ZLeoaj <= y908Vc1LI - 1) {
            if (PW2RSs0[ZLeoaj] < PW2RSs0[HKxnlSE3IhC]) {
                HKxnlSE3IhC = ZLeoaj;
            }
            if (PW2RSs0[ZLeoaj] > PW2RSs0[S1GWJrx43]) {
                S1GWJrx43 = ZLeoaj;
            }
            ZLeoaj = ZLeoaj +1;
        }
    }
    pd8mSpj4LFV = fvlZSu - PW2RSs0[HKxnlSE3IhC];
    t = PW2RSs0[S1GWJrx43] - fvlZSu;
    if (pd8mSpj4LFV > t) {
        printf ("%d\n", PW2RSs0[HKxnlSE3IhC]);
    }
    else {
        if (pd8mSpj4LFV < t) {
            printf ("%d\n", PW2RSs0[S1GWJrx43]);
        }
        else if (pd8mSpj4LFV == t) {
            printf ("%d,%d\n", PW2RSs0[HKxnlSE3IhC], PW2RSs0[S1GWJrx43]);
        }
    }
}

