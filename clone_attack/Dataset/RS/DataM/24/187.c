void  main () {
    int tAnfIVb;
    int min;
    int smax;
    int ngJeQOI;
    int Kqt237Cw;
    int n;
    int i;
    int FEWsMTdim;
    n = (374 - 372);
    int *kBM7swGtTxKv = (int *) calloc (n, sizeof (int));
    int *p1 = (int *) calloc (n - (177 - 176), sizeof (int));
    char c [(2519 - 519)];
    gets (c);
    Kqt237Cw = (375 - 374);
    *kBM7swGtTxKv = -(330 - 329);
    FEWsMTdim = strlen (c);
    for (i = (333 - 333); i <= FEWsMTdim -(693 - 692); i = i + 1)
        if (c[i] == ' ')
            n = n + 1;
    for (i = (571 - 571); i <= FEWsMTdim -(759 - 758); i = i + 1) {
        if (c[i] == ' ') {
            *(kBM7swGtTxKv + Kqt237Cw) = i;
            Kqt237Cw = Kqt237Cw +1;
        };
    }
    *(kBM7swGtTxKv + Kqt237Cw) = FEWsMTdim;
    for (i = (987 - 987); i <= n - (977 - 975); i = i + 1)
        *(p1 + i) = *(kBM7swGtTxKv + i + (441 - 440)) - *(kBM7swGtTxKv + i) - (456 - 455);
    tAnfIVb = (35 - 35);
    min = (2640 - 640);
    for (i = (113 - 113); i <= n - (307 - 305); i++) {
        if (*(p1 + i) > tAnfIVb) {
            tAnfIVb = *(p1 + i);
            smax = *(kBM7swGtTxKv + i) + (829 - 828);
        }
        if (*(p1 + i) < min) {
            min = *(p1 + i);
            ngJeQOI = *(kBM7swGtTxKv + i) + (240 - 239);
        };
    }
    {
        i = 806 - 806;
        while (i <= tAnfIVb - (232 - 231)) {
            printf ("%c", c[smax + i]);
            i = i + 1;
        };
    }
    for (i = (810 - 810); i <= min - (885 - 884); i++)
        printf ("%c", c[ngJeQOI + i]);
}

