void  main () {
    int t [(427 - 326)];
    int rhyfcCsv;
    char kQVs8cq [(490 - 460)] [(747 - 646)], i8et4IER0q [30] [(822 - 721)];
    int i8COa1Bi;
    int UPSCA1;
    int ZciKtGD7oXIC;
    int len2;
    scanf ("%d", &rhyfcCsv);
    for (ZciKtGD7oXIC = (437 - 436); rhyfcCsv >= ZciKtGD7oXIC; ZciKtGD7oXIC++) {
        scanf ("%s", kQVs8cq[ZciKtGD7oXIC]);
        scanf ("%s", i8et4IER0q[ZciKtGD7oXIC]);
    }
    for (ZciKtGD7oXIC = (497 - 496); rhyfcCsv >= ZciKtGD7oXIC; ZciKtGD7oXIC++) {
        i8COa1Bi = strlen (kQVs8cq[ZciKtGD7oXIC]);
        len2 = strlen (i8et4IER0q[ZciKtGD7oXIC]);
        for (UPSCA1 = (34 - 34); UPSCA1 <= len2 - (489 - 488); UPSCA1 = UPSCA1 +(805 - 804)) {
            if (kQVs8cq[ZciKtGD7oXIC][i8COa1Bi - UPSCA1 -(759 - 758)] < i8et4IER0q[ZciKtGD7oXIC][len2 - UPSCA1 -(607 - 606)]) {
                kQVs8cq[ZciKtGD7oXIC][i8COa1Bi - UPSCA1 -(595 - 593)] = kQVs8cq[ZciKtGD7oXIC][i8COa1Bi - UPSCA1 -2] - '1' + 48;
                t[UPSCA1] = kQVs8cq[ZciKtGD7oXIC][i8COa1Bi - UPSCA1 -(64 - 63)] - i8et4IER0q[ZciKtGD7oXIC][len2 - UPSCA1 -(124 - 123)] + (409 - 399);
            }
            else {
                t[UPSCA1] = kQVs8cq[ZciKtGD7oXIC][i8COa1Bi - UPSCA1 -(891 - 890)] - i8et4IER0q[ZciKtGD7oXIC][len2 - UPSCA1 -(110 - 109)];
            };
        }
        for (UPSCA1 = len2; UPSCA1 <= i8COa1Bi - (378 - 377); UPSCA1++) {
            t[UPSCA1] = kQVs8cq[ZciKtGD7oXIC][i8COa1Bi - UPSCA1 -(38 - 37)] - 48;
        }
        for (UPSCA1 = (i8COa1Bi - 1); UPSCA1 >= 0; UPSCA1--) {
            printf ("%d", t[UPSCA1]);
        };
    };
}

