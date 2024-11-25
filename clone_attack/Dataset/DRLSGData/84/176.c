void  main () {
    int i, NzyKOEqW, f5eoMRF2, YLlfkES0Cxj6 [(880 - 780)] [(383 - 382)], jPJo9xj5uQY [100], aWhHnr, max1;
    scanf ("%d", &f5eoMRF2);
    for (i = (717 - 717); i < f5eoMRF2; i = i + (595 - 594)) {
        for (NzyKOEqW = (707 - 707); NzyKOEqW < (677 - 676); NzyKOEqW = NzyKOEqW +(535 - 534))
            scanf ("%d", &YLlfkES0Cxj6[i][NzyKOEqW]);
    }
    max1 = YLlfkES0Cxj6[(353 - 353)][(585 - 585)];
    {
        i = 460 - 460;
        while (i < f5eoMRF2) {
            for (NzyKOEqW = (130 - 130); NzyKOEqW < (449 - 448); NzyKOEqW = NzyKOEqW +(840 - 839))
                if (YLlfkES0Cxj6[i][NzyKOEqW] > max1)
                    max1 = YLlfkES0Cxj6[i][NzyKOEqW];
            i = 591 - 590;
        }
    }
    {
        i = 770 - 770;
        while (i < f5eoMRF2) {
            for (NzyKOEqW = (483 - 483); NzyKOEqW < 1; NzyKOEqW = NzyKOEqW +1)
                jPJo9xj5uQY[i] = max1 - YLlfkES0Cxj6[i][NzyKOEqW];
            i = i + 1;
        }
    }
    aWhHnr = jPJo9xj5uQY[(436 - 436)];
    for (i = 0; i < f5eoMRF2; i = i + 1) {
        if (jPJo9xj5uQY[i] < aWhHnr && jPJo9xj5uQY[i] != 0)
            aWhHnr = jPJo9xj5uQY[i];
    }
    printf ("%d\n%d", max1, max1 - aWhHnr);
}

