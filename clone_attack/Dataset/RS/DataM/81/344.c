void  main () {
    int lxOX3mlNgF2E [5] [5], Zdhpy6P = (625 - 625), HQCiOBdL5 = (498 - 498), nKIXavwVgH, IW8QMwB6j2, fLwc4oBdXuI [5];
    for (Zdhpy6P = 0; 5 > Zdhpy6P; Zdhpy6P = Zdhpy6P +1) {
        HQCiOBdL5 = 0;
        while (HQCiOBdL5 < 5) {
            scanf ("%d", &lxOX3mlNgF2E[Zdhpy6P][HQCiOBdL5]);
            HQCiOBdL5 = HQCiOBdL5 +1;
        };
    }
    scanf ("%d%d", &nKIXavwVgH, &IW8QMwB6j2);
    if ((4 < nKIXavwVgH) || (4 < IW8QMwB6j2) || (0 > nKIXavwVgH) || (0 > IW8QMwB6j2)) {
    }
    if ((0 <= nKIXavwVgH) && (4 >= nKIXavwVgH) && (IW8QMwB6j2 >= 0) && (IW8QMwB6j2 <= 4)) {
        for (Zdhpy6P = 0; Zdhpy6P < 5; Zdhpy6P++) {
            fLwc4oBdXuI[Zdhpy6P] = lxOX3mlNgF2E[nKIXavwVgH][Zdhpy6P];
            lxOX3mlNgF2E[nKIXavwVgH][Zdhpy6P] = lxOX3mlNgF2E[IW8QMwB6j2][Zdhpy6P];
            lxOX3mlNgF2E[IW8QMwB6j2][Zdhpy6P] = fLwc4oBdXuI[Zdhpy6P];
        }
        {
            Zdhpy6P = 0;
            while (Zdhpy6P < 5) {
                {
                    HQCiOBdL5 = 0;
                    while (HQCiOBdL5 < 4) {
                        printf ("%d ", lxOX3mlNgF2E[Zdhpy6P][HQCiOBdL5]);
                        HQCiOBdL5 = HQCiOBdL5 +1;
                    };
                }
                printf ("%d", lxOX3mlNgF2E[Zdhpy6P][4]);
                Zdhpy6P = Zdhpy6P +1;
            };
        };
    };
}

