main () {
    int c2eMm1K;
    int f4pxsU0aJ;
    int cUehQOPuJys [(959 - 709)];
    int c [(891 - 641)];
    int b1 [(894 - 644)];
    char a [(434 - 184)];
    char S1BkDap [(283 - 33)];
    int TFcjhGW;
    int r;
    scanf ("%d", &TFcjhGW);
    for (f4pxsU0aJ = (604 - 603); f4pxsU0aJ <= TFcjhGW; f4pxsU0aJ = f4pxsU0aJ + (42 - 41)) {
        for (c2eMm1K = (880 - 880); c2eMm1K < (543 - 293); c2eMm1K = c2eMm1K + (732 - 731)) {
            a[c2eMm1K] = (266 - 266);
            S1BkDap[c2eMm1K] = (569 - 569);
            cUehQOPuJys[c2eMm1K] = (299 - 299);
            b1[c2eMm1K] = (747 - 747);
            c[c2eMm1K] = (665 - 665);
        }
        scanf ("%s%s", a, S1BkDap);
        for (c2eMm1K = (1003 - 754); c2eMm1K >= (704 - 704); c2eMm1K = c2eMm1K - (589 - 588))
            if (a[c2eMm1K] >= '0' && '9' >= a[c2eMm1K])
                cUehQOPuJys[c2eMm1K + 250 - strlen (a)] = a[c2eMm1K] - '0';
        for (c2eMm1K = 249; c2eMm1K >= 0; c2eMm1K = c2eMm1K - 1)
            if (S1BkDap[c2eMm1K] >= '0' && S1BkDap[c2eMm1K] <= '9')
                b1[c2eMm1K + 250 - strlen (S1BkDap)] = S1BkDap[c2eMm1K] - '0';
        for (c2eMm1K = 249; c2eMm1K >= 0; c2eMm1K = c2eMm1K - 1) {
            if (cUehQOPuJys[c2eMm1K] < b1[c2eMm1K]) {
                cUehQOPuJys[c2eMm1K] += (295 - 285);
                cUehQOPuJys[c2eMm1K - 1]--;
            }
            c[c2eMm1K] = cUehQOPuJys[c2eMm1K] - b1[c2eMm1K];
        }
        r = 0;
        for (; c[r] <= 0 && r < 250;)
            r = r + 1;
        if (r == 250)
            ;
        for (c2eMm1K = r; c2eMm1K < 250; c2eMm1K = c2eMm1K + 1)
            printf ("%d", c[c2eMm1K]);
    }
}

