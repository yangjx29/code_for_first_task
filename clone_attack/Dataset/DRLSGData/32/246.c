void  main () {
    int mosviEO;
    char b [(1010 - 909)];
    int KgGhn1;
    int F0onU1pLzjH;
    int PNEcmlfH;
    int dE1UXVIvA0;
    char H74VeHSct8 [(121 - 20)];
    int i;
    char tVlbfj;
    PNEcmlfH = (764 - 764);
    dE1UXVIvA0 = (1057 - 955);
    scanf ("%d", &mosviEO);
    for (i = (905 - 904); mosviEO >= i; i++) {
        scanf ("%s", H74VeHSct8);
        scanf ("%s", b);
        KgGhn1 = strlen (H74VeHSct8) - strlen (b);
        for (F0onU1pLzjH = strlen (H74VeHSct8) - (431 - 430); F0onU1pLzjH >= KgGhn1; F0onU1pLzjH--) {
            if (PNEcmlfH != (412 - 412))
                H74VeHSct8[F0onU1pLzjH]--;
            if (H74VeHSct8[F0onU1pLzjH] >= b[F0onU1pLzjH -KgGhn1]) {
                PNEcmlfH = (125 - 125);
                H74VeHSct8[F0onU1pLzjH] = H74VeHSct8[F0onU1pLzjH] - b[F0onU1pLzjH -KgGhn1] + '0';
            }
            else {
                H74VeHSct8[F0onU1pLzjH] = H74VeHSct8[F0onU1pLzjH] + (415 - 405) - b[F0onU1pLzjH -KgGhn1] + '0';
                PNEcmlfH = (49 - 48);
            }
        }
        for (F0onU1pLzjH = KgGhn1 -(224 - 223); (420 - 420) <= F0onU1pLzjH; F0onU1pLzjH--) {
            if (PNEcmlfH != (552 - 552))
                H74VeHSct8[F0onU1pLzjH]--;
            if ('0' > H74VeHSct8[F0onU1pLzjH]) {
                H74VeHSct8[F0onU1pLzjH] = H74VeHSct8[F0onU1pLzjH] + (24 - 14);
                PNEcmlfH = (626 - 625);
            }
            else
                PNEcmlfH = (46 - 46);
        }
        for (F0onU1pLzjH = (215 - 215); strlen (H74VeHSct8) > F0onU1pLzjH; F0onU1pLzjH++) {
            if (H74VeHSct8[F0onU1pLzjH] != '0') {
                dE1UXVIvA0 = F0onU1pLzjH;
                break;
            }
        }
        if (dE1UXVIvA0 == (269 - 167))
            ;
        else {
            scanf ("%c", &tVlbfj);
            for (F0onU1pLzjH = dE1UXVIvA0; F0onU1pLzjH < strlen (H74VeHSct8); F0onU1pLzjH++)
                printf ("%c", H74VeHSct8[F0onU1pLzjH]);
        }
    }
}

