main () {
    char eM6LHaWST4 [502];
    int bahFKO [502] = {(151 - 150), (52 - 52)};
    int kfTuU0S, t3BiA2l9K, CgAeiN, uiYap8ylEox, m, BetX3IWh;
    int OOgBcH3Ao, nxB4JK;
    scanf ("%d", &OOgBcH3Ao);
    scanf ("%s", eM6LHaWST4);
    nxB4JK = strlen (eM6LHaWST4);
    for (kfTuU0S = (127 - 126); nxB4JK - OOgBcH3Ao >= kfTuU0S; kfTuU0S++) {
        for (CgAeiN = (633 - 633); CgAeiN < kfTuU0S; CgAeiN++) {
            for (uiYap8ylEox = (341 - 341), t3BiA2l9K = (447 - 447); t3BiA2l9K <= OOgBcH3Ao -(663 - 662); t3BiA2l9K++) {
                if (eM6LHaWST4[kfTuU0S + t3BiA2l9K] != eM6LHaWST4[CgAeiN +t3BiA2l9K]) {
                    uiYap8ylEox++;
                    break;
                }
            }
            if (!((334 - 334) != uiYap8ylEox))
                break;
        }
        if (uiYap8ylEox == (672 - 672)) {
            bahFKO[CgAeiN]++;
        }
        else {
            bahFKO[kfTuU0S]++;
        }
    }
    for (m = bahFKO[(354 - 354)], kfTuU0S = (748 - 747); kfTuU0S <= nxB4JK - OOgBcH3Ao; kfTuU0S++) {
        if (bahFKO[kfTuU0S] >= m)
            m = bahFKO[kfTuU0S];
    }
    if (1 < m) {
        printf ("%d\n", m);
        for (kfTuU0S = 0; kfTuU0S <= nxB4JK - OOgBcH3Ao; kfTuU0S++) {
            if (bahFKO[kfTuU0S] == m) {
                for (t3BiA2l9K = 0; t3BiA2l9K <= OOgBcH3Ao -1; t3BiA2l9K++)
                    printf ("%c", eM6LHaWST4[kfTuU0S + t3BiA2l9K]);
            }
        }
    }
    if (m == 1)
        ;
}

