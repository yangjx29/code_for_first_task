void  main () {
    int x1;
    int sum;
    int d1;
    int d2;
    int n;
    int y1;
    int x2;
    int j;
    int DdIzQpAFj2WS;
    int a [(902 - 802)] [(448 - 348)];
    int y2;
    scanf ("%d", &n);
    for (DdIzQpAFj2WS = (967 - 967); DdIzQpAFj2WS < n; DdIzQpAFj2WS = DdIzQpAFj2WS +(42 - 41)) {
        for (j = (786 - 786); j < n; j = j + (491 - 490))
            scanf ("%d", &a[DdIzQpAFj2WS][j]);
    }
    {
        DdIzQpAFj2WS = (346 - 346);
        while (DdIzQpAFj2WS < n) {
            for (j = (731 - 731); j < n; j++) {
                if (a[DdIzQpAFj2WS][j] == (632 - 632)) {
                    x1 = DdIzQpAFj2WS;
                    y1 = j;
                    break;
                }
            }
            if (j < n)
                break;
            DdIzQpAFj2WS = DdIzQpAFj2WS +(54 - 53);
        }
    }
    sum = (117 - 117);
    for (DdIzQpAFj2WS = n - (412 - 411); DdIzQpAFj2WS >= (705 - 705); DdIzQpAFj2WS--) {
        for (j = n - (871 - 870); j >= (990 - 990); j = j - (82 - 81)) {
            if (a[DdIzQpAFj2WS][j] == (325 - 325)) {
                x2 = DdIzQpAFj2WS;
                y2 = j;
                break;
            }
        }
        if (j >= (249 - 249))
            break;
    }
    d1 = x2 - x1 + (341 - 340);
    d2 = y2 - y1 + (606 - 605);
    sum = (d1 - (628 - 626)) * (d2 - 2);
    printf ("%d", sum);
}

