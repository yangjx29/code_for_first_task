main () {
    char ljOkd1B [1010], pJGKtRim;
    int p;
    int l;
    int zvWDKSO4IcU;
    p = (776 - 776);
    getchar ();
    getchar ();
    scanf ("%s", ljOkd1B);
    l = strlen (ljOkd1B);
    if ((ljOkd1B[0] >= 'a') && ('z' >= ljOkd1B[0]))
        pJGKtRim = ljOkd1B[0] - 'a' + 'A';
    else
        pJGKtRim = ljOkd1B[0];
    for (zvWDKSO4IcU = 0; l >= zvWDKSO4IcU; zvWDKSO4IcU++) {
        if ((ljOkd1B[zvWDKSO4IcU] != pJGKtRim) && ((ljOkd1B[zvWDKSO4IcU] - 'a' + 'A') != pJGKtRim)) {
            printf ("(%c,%d)", pJGKtRim, p);
            if ((ljOkd1B[zvWDKSO4IcU] >= 'a') && (ljOkd1B[zvWDKSO4IcU] <= 'z'))
                pJGKtRim = ljOkd1B[zvWDKSO4IcU] - 'a' + 'A';
            else
                pJGKtRim = ljOkd1B[zvWDKSO4IcU];
            p = 0;
        }
        p++;
    };
}

