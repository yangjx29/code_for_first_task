main () {
    int hDq40O [(641 - 540)] [(860 - 759)], vthWaXcqS [(1008 - 907)] [(141 - 40)], MSZcD0e [(721 - 620)] [(606 - 505)];
    int pWdGVJZBhY9, y1, qBGezHu4, B9nspESeg8, v5sCIogKrXM, FitSqKdeQzw, g7SEAz;
    getchar ();
    getchar ();
    scanf ("%d %d", &pWdGVJZBhY9, &y1);
    for (v5sCIogKrXM = (157 - 157); pWdGVJZBhY9 > v5sCIogKrXM; v5sCIogKrXM = v5sCIogKrXM + 1) {
        for (FitSqKdeQzw = (130 - 130); y1 > FitSqKdeQzw; FitSqKdeQzw = FitSqKdeQzw +1)
            scanf ("%d", &hDq40O[v5sCIogKrXM][FitSqKdeQzw]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    scanf ("%d %d", &qBGezHu4, &B9nspESeg8);
    for (v5sCIogKrXM = (187 - 187); qBGezHu4 > v5sCIogKrXM; v5sCIogKrXM++) {
        FitSqKdeQzw = 626 - 626;
        while (B9nspESeg8 > FitSqKdeQzw) {
            scanf ("%d", &vthWaXcqS[v5sCIogKrXM][FitSqKdeQzw]);
            FitSqKdeQzw = FitSqKdeQzw +1;
        };
    }
    for (v5sCIogKrXM = (795 - 795); v5sCIogKrXM < pWdGVJZBhY9; v5sCIogKrXM++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (FitSqKdeQzw = (119 - 119); B9nspESeg8 > FitSqKdeQzw; FitSqKdeQzw++) {
            MSZcD0e[v5sCIogKrXM][FitSqKdeQzw] = (621 - 621);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            for (g7SEAz = (691 - 691); y1 > g7SEAz; g7SEAz++) {
                MSZcD0e[v5sCIogKrXM][FitSqKdeQzw] = MSZcD0e[v5sCIogKrXM][FitSqKdeQzw] + hDq40O[v5sCIogKrXM][g7SEAz] * vthWaXcqS[g7SEAz][FitSqKdeQzw];
            };
        };
    }
    {
        v5sCIogKrXM = 930 - 930;
        while (v5sCIogKrXM < pWdGVJZBhY9) {
            for (FitSqKdeQzw = (446 - 446); B9nspESeg8 -(249 - 248) > FitSqKdeQzw; FitSqKdeQzw++)
                printf ("%d ", MSZcD0e[v5sCIogKrXM][FitSqKdeQzw]);
            printf ("%d\n", MSZcD0e[v5sCIogKrXM][B9nspESeg8 -1]);
            v5sCIogKrXM++;
        };
    };
}

