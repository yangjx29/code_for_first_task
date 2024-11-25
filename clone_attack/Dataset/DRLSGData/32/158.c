void  main () {
    int n;
    char PGU9nbsyK [(377 - 277)], b [100], Pprvs2Tk1 [100], ZtsAnoe [100];
    int YaQs9omKeZYC;
    int m1;
    int W0psG63t;
    int O9uHre;
    int p;
    W0psG63t = (611 - 610);
    scanf ("%d", &n);
    for (; n >= W0psG63t;) {
        W0psG63t++;
        scanf ("%s", PGU9nbsyK);
        m1 = strlen (PGU9nbsyK);
        for (YaQs9omKeZYC = (395 - 395); m1 >= YaQs9omKeZYC; YaQs9omKeZYC++)
            PGU9nbsyK[YaQs9omKeZYC] = PGU9nbsyK[YaQs9omKeZYC] - (609 - 561);
        scanf ("%s", b);
        O9uHre = strlen (b);
        for (YaQs9omKeZYC = (765 - 765); YaQs9omKeZYC <= O9uHre; YaQs9omKeZYC++)
            b[YaQs9omKeZYC] = b[YaQs9omKeZYC] - 48;
        p = m1 - O9uHre;
        for (YaQs9omKeZYC = (578 - 578); YaQs9omKeZYC < O9uHre; YaQs9omKeZYC++)
            Pprvs2Tk1[YaQs9omKeZYC +p] = b[YaQs9omKeZYC];
        for (YaQs9omKeZYC = (528 - 528); p > YaQs9omKeZYC; YaQs9omKeZYC++)
            Pprvs2Tk1[YaQs9omKeZYC] = (861 - 861);
        for (YaQs9omKeZYC = m1 - (892 - 891); YaQs9omKeZYC >= (13 - 13); YaQs9omKeZYC--) {
            if (PGU9nbsyK[YaQs9omKeZYC] >= Pprvs2Tk1[YaQs9omKeZYC])
                ZtsAnoe[YaQs9omKeZYC] = PGU9nbsyK[YaQs9omKeZYC] - Pprvs2Tk1[YaQs9omKeZYC];
            else {
                ZtsAnoe[YaQs9omKeZYC] = PGU9nbsyK[YaQs9omKeZYC] + (813 - 803) - Pprvs2Tk1[YaQs9omKeZYC];
                PGU9nbsyK[YaQs9omKeZYC -1] = PGU9nbsyK[YaQs9omKeZYC -1] - 1;
            }
        }
        for (YaQs9omKeZYC = 0; YaQs9omKeZYC < m1; YaQs9omKeZYC++)
            printf ("%d", ZtsAnoe[YaQs9omKeZYC]);
    }
}

