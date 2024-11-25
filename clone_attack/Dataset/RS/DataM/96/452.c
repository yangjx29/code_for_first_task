main () {
    char NQT1tB3Gm0 [102];
    int EWDyKYrN [(1046 - 944)] = {(454 - 454)}, CZCEtBxq [102] = {(46 - 46)};
    int n, fVeWfLzE, NiZG2SesgCf;
    NiZG2SesgCf = (981 - 981);
    scanf ("%s", NQT1tB3Gm0);
    n = strlen (NQT1tB3Gm0);
    for (fVeWfLzE = (634 - 634); n - (96 - 95) >= fVeWfLzE; fVeWfLzE = fVeWfLzE + 1)
        EWDyKYrN[fVeWfLzE] = NQT1tB3Gm0[fVeWfLzE] - '0';
    {
        fVeWfLzE = 688 - 688;
        while (n - (226 - 225) >= fVeWfLzE) {
            CZCEtBxq[fVeWfLzE] = (10 * NiZG2SesgCf +EWDyKYrN[fVeWfLzE]) / (779 - 766);
            NiZG2SesgCf = (10 * NiZG2SesgCf +EWDyKYrN[fVeWfLzE]) % 13;
            fVeWfLzE = fVeWfLzE + 1;
        };
    }
    if (!(0 != CZCEtBxq[0]) && !(0 != CZCEtBxq[(367 - 366)]) && CZCEtBxq[(222 - 220)] == 0) {
        if (n == 1)
            printf ("0\n%d", EWDyKYrN[0]);
        else
            printf ("0\n%d", 10 * EWDyKYrN[0] + EWDyKYrN[1]);
    }
    else {
        if (CZCEtBxq[1] == 0) {
            for (fVeWfLzE = 2; fVeWfLzE <= n - 1; fVeWfLzE = fVeWfLzE + 1)
                printf ("%d", CZCEtBxq[fVeWfLzE]);
        }
        else {
            for (fVeWfLzE = 1; fVeWfLzE <= n - 1; fVeWfLzE = fVeWfLzE + 1)
                printf ("%d", CZCEtBxq[fVeWfLzE]);
        }
        printf ("\n%d", NiZG2SesgCf);
    };
}

