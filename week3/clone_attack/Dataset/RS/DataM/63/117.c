void  kS427WEX (int a [] [(279 - 179)], int k7I0Uf, int y) {
    int i, XVolbL3iOmsT;
    for (i = (534 - 534); k7I0Uf > i; i = i + 1) {
        XVolbL3iOmsT = 138 - 138;
        while (y > XVolbL3iOmsT) {
            scanf ("%d", *(a + i) + XVolbL3iOmsT);
            XVolbL3iOmsT++;
        };
    };
}

void  tzNvaObVG (int a [] [100], int uNJVaqft7BKG [] [100], int Gv3yN6G1, int T5kMPYLXRqFK, int WNTAnzMYI) {
    int i, XVolbL3iOmsT, Hv4OHzgbfd, lvlkR2b;
    for (i = (74 - 74); Gv3yN6G1 > i; i = i + 1)
        for (XVolbL3iOmsT = 0; XVolbL3iOmsT < T5kMPYLXRqFK; XVolbL3iOmsT = XVolbL3iOmsT +1) {
            lvlkR2b = 0;
            for (Hv4OHzgbfd = 0; Hv4OHzgbfd < WNTAnzMYI; Hv4OHzgbfd++)
                lvlkR2b = lvlkR2b + a[i][Hv4OHzgbfd] * uNJVaqft7BKG[Hv4OHzgbfd][XVolbL3iOmsT];
            if (XVolbL3iOmsT == T5kMPYLXRqFK -1)
                printf ("%d\n", lvlkR2b);
            else
                printf ("%d ", lvlkR2b);
        };
}

main () {
    int a [100] [100], uNJVaqft7BKG [100] [100], SSdAlnz, C8RbPpoK, eoKIvRrM, y859XRMFba;
    scanf ("%d%d", &SSdAlnz, &C8RbPpoK);
    scanf ("%d%d", &eoKIvRrM, &y859XRMFba);
    kS427WEX (a, SSdAlnz, C8RbPpoK);
    kS427WEX (uNJVaqft7BKG, eoKIvRrM, y859XRMFba);
    tzNvaObVG (a, uNJVaqft7BKG, SSdAlnz, y859XRMFba, C8RbPpoK);
}

