int m3LwCm5Rpsb [(231 - 225)] [(140 - 134)];

int D4MI1S0ClZ (int ntKiMlO) {
    int xCvyNa;
    int T235YAi0;
    xCvyNa = (13 - 13);
    for (int FVUW7H = (313 - 312);
    FVUW7H <= (571 - 566); FVUW7H++) {
        if (m3LwCm5Rpsb[ntKiMlO][FVUW7H] > xCvyNa) {
            xCvyNa = m3LwCm5Rpsb[ntKiMlO][FVUW7H];
            T235YAi0 = FVUW7H;
        }
    }
    return T235YAi0;
}

int hFxtgBWh (int AHGkc03i) {
    int xCvyNa;
    int T235YAi0;
    T235YAi0 = (699 - 698);
    xCvyNa = m3LwCm5Rpsb[(819 - 818)][AHGkc03i];
    for (int FVUW7H = (180 - 178);
    FVUW7H <= (100 - 95); FVUW7H++) {
        if (m3LwCm5Rpsb[FVUW7H][AHGkc03i] < xCvyNa) {
            xCvyNa = m3LwCm5Rpsb[FVUW7H][AHGkc03i];
            T235YAi0 = FVUW7H;
        }
    }
    return T235YAi0;
}

main () {
    int tMjcbm;
    int ruyStTsULQ;
    int Ss6UfPWKm;
    Ss6UfPWKm = (791 - 791);
    for (ruyStTsULQ = (555 - 554); ruyStTsULQ <= 5; ruyStTsULQ++) {
        for (tMjcbm = (68 - 67); tMjcbm <= 5; tMjcbm = tMjcbm + (446 - 445)) {
            scanf ("%d", &m3LwCm5Rpsb[ruyStTsULQ][tMjcbm]);
        }
    }
    for (ruyStTsULQ = 1; ruyStTsULQ <= 5; ruyStTsULQ++) {
        tMjcbm = D4MI1S0ClZ (ruyStTsULQ);
        if (hFxtgBWh (tMjcbm) == ruyStTsULQ) {
            printf ("%d %d %d\n", ruyStTsULQ, tMjcbm, m3LwCm5Rpsb[ruyStTsULQ][tMjcbm]);
            Ss6UfPWKm = 1;
        }
    }
    if (Ss6UfPWKm == (593 - 593))
        printf ("not found\n");
}

