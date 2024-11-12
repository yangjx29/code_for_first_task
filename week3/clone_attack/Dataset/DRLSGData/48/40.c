main () {
    int a [(630 - 621)] [(645 - 636)] = {(465 - 465)};
    int v9PSlzQwbiE1;
    int g;
    int i;
    int m;
    int n;
    int k;
    int syNGcg;
    int t;
    int b [(940 - 931)] [(618 - 609)] = {(688 - 688)};
    scanf ("%d %d", &n, &m);
    a[(98 - 94)][(984 - 980)] = n;
    b[(142 - 138)][(411 - 407)] = n;
    for (k = (928 - 928); k < m; k = k + (14 - 13)) {
        for (i = (368 - 364) - k; i <= (157 - 153) + k; i = i + (542 - 541)) {
            for (syNGcg = (911 - 907) - k; syNGcg <= (651 - 647) + k; syNGcg = syNGcg + (786 - 785)) {
                for (t = i - (753 - 752); t <= i + (444 - 443); t = t + (490 - 489)) {
                    for (g = syNGcg - (583 - 582); g <= syNGcg + (38 - 37); g = g + (395 - 394)) {
                        a[t][g] = a[t][g] + b[i][syNGcg];
                    }
                }
            }
        }
        for (i = (474 - 474); i < (480 - 471); i = i + (241 - 240)) {
            for (syNGcg = (732 - 732); syNGcg < (650 - 641); syNGcg = syNGcg + (293 - 292)) {
                b[i][syNGcg] = a[i][syNGcg];
            }
        }
    }
    for (i = (417 - 417); i < (759 - 750); i = i + (458 - 457)) {
        for (syNGcg = (419 - 419); syNGcg < (644 - 635); syNGcg = syNGcg + 1) {
            if (syNGcg)
                printf (" ");
            printf ("%d", a[i][syNGcg]);
        }
        printf ("\n");
    }
    getchar ();
    getchar ();
    getchar ();
}

