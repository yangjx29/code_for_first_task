void  main () {
    int GgOL9Kyt7;
    int pWetqkgYxHmV;
    char BYc2oNT [502] [6];
    char s [502];
    int nGRerf2gHONt;
    int rpEiKOoA;
    int I6NDpbv;
    int slwSzK [502];
    nGRerf2gHONt = 0;
    scanf ("%d", &GgOL9Kyt7);
    rpEiKOoA = 0;
    scanf ("%s", s);
    pWetqkgYxHmV = strlen (s);
    for (nGRerf2gHONt = 0; pWetqkgYxHmV + 1 - GgOL9Kyt7 > nGRerf2gHONt; nGRerf2gHONt = nGRerf2gHONt + 1) {
        for (rpEiKOoA = 0; rpEiKOoA < GgOL9Kyt7; rpEiKOoA = rpEiKOoA + 1) {
            BYc2oNT[nGRerf2gHONt][rpEiKOoA] = s[nGRerf2gHONt + rpEiKOoA];
        }
        BYc2oNT[nGRerf2gHONt][rpEiKOoA] = '\0';
    }
    for (nGRerf2gHONt = 0; pWetqkgYxHmV + 1 - GgOL9Kyt7 > nGRerf2gHONt; nGRerf2gHONt++)
        slwSzK[nGRerf2gHONt] = 1;
    for (nGRerf2gHONt = 0; pWetqkgYxHmV + 1 - GgOL9Kyt7 > nGRerf2gHONt; nGRerf2gHONt++) {
        if (!(0 != slwSzK[nGRerf2gHONt]))
            continue;
        for (rpEiKOoA = nGRerf2gHONt + 1; rpEiKOoA < pWetqkgYxHmV + 1 - GgOL9Kyt7; rpEiKOoA++) {
            if (strcmp (BYc2oNT[nGRerf2gHONt], BYc2oNT[rpEiKOoA]) == 0) {
                slwSzK[nGRerf2gHONt]++;
                slwSzK[rpEiKOoA] = 0;
            }
        }
    }
    I6NDpbv = 0;
    {
        nGRerf2gHONt = 0;
        for (; nGRerf2gHONt < pWetqkgYxHmV + 1 - GgOL9Kyt7;) {
            if (slwSzK[nGRerf2gHONt] > I6NDpbv)
                I6NDpbv = slwSzK[nGRerf2gHONt];
            nGRerf2gHONt++;
        }
    }
    if (I6NDpbv == 1)
        ;
    else {
        printf ("%d\n", I6NDpbv);
        {
            nGRerf2gHONt = 0;
            for (; nGRerf2gHONt < pWetqkgYxHmV + 1 - GgOL9Kyt7;) {
                if (slwSzK[nGRerf2gHONt] == I6NDpbv)
                    printf ("%s\n", BYc2oNT[nGRerf2gHONt]);
                nGRerf2gHONt++;
            }
        }
    }
}

