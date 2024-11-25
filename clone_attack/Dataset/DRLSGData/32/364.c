void  main () {
    int N3wojG6;
    int MpoJ325;
    int qiIJrQMKGL8;
    int WTuIWHjM;
    int T42THxoUwken;
    int WUL56xO7;
    char b [(564 - 464)] [(823 - 723)];
    char eUdL9j [(987 - 887)] [(505 - 405)];
    scanf ("%d", &N3wojG6);
    for (WUL56xO7 = (783 - 783); N3wojG6 > WUL56xO7; WUL56xO7++)
        scanf ("%s%s", eUdL9j[WUL56xO7], b[WUL56xO7]);
    for (WUL56xO7 = (268 - 268); WUL56xO7 < N3wojG6; WUL56xO7++) {
        T42THxoUwken = strlen (eUdL9j[WUL56xO7]);
        WTuIWHjM = strlen (b[WUL56xO7]);
        for (MpoJ325 = WTuIWHjM -(396 - 395), qiIJrQMKGL8 = T42THxoUwken -(255 - 254); MpoJ325 >= (612 - 612); MpoJ325 = MpoJ325 -(647 - 646), qiIJrQMKGL8--) {
            if (eUdL9j[WUL56xO7][qiIJrQMKGL8] >= b[WUL56xO7][MpoJ325])
                eUdL9j[WUL56xO7][qiIJrQMKGL8] = eUdL9j[WUL56xO7][qiIJrQMKGL8] - b[WUL56xO7][MpoJ325] + (896 - 848);
            else {
                if (b[WUL56xO7][MpoJ325] > eUdL9j[WUL56xO7][qiIJrQMKGL8]) {
                    eUdL9j[WUL56xO7][qiIJrQMKGL8] = eUdL9j[WUL56xO7][qiIJrQMKGL8] - b[WUL56xO7][MpoJ325] + (406 - 348);
                    eUdL9j[WUL56xO7][qiIJrQMKGL8 - (148 - 147)] = eUdL9j[WUL56xO7][qiIJrQMKGL8 - (523 - 522)] - (500 - 499);
                }
            }
        }
        for (qiIJrQMKGL8 = (14 - 14); qiIJrQMKGL8 < T42THxoUwken; qiIJrQMKGL8++) {
            if (eUdL9j[WUL56xO7][qiIJrQMKGL8] != (238 - 238)) {
                printf ("%c", eUdL9j[WUL56xO7][qiIJrQMKGL8]);
                MpoJ325 = qiIJrQMKGL8;
                break;
            }
        }
        for (qiIJrQMKGL8 = MpoJ325 +(352 - 351); qiIJrQMKGL8 < T42THxoUwken; qiIJrQMKGL8++)
            printf ("%c", eUdL9j[WUL56xO7][qiIJrQMKGL8]);
        printf ("\n");
    }
}

