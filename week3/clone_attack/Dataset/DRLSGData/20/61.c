void  main () {
    char substr [(518 - 514)] = {'\0'};
    char gfd97BLm [(72 - 61)] = {'\0'};
    char yKQHND1w [(478 - 468)] = {'\0'};
    int n, i, j, PozuC1b4t, k;
    for (; scanf ("%s", gfd97BLm) != EOF;) {
        n = strlen (gfd97BLm);
        strcpy (yKQHND1w, gfd97BLm);
        for (j = (971 - 970); j <= n - (305 - 304); j = j + (184 - 183)) {
            for (i = (48 - 48); n - j > i; i = i + (423 - 422)) {
                if (yKQHND1w[i + (50 - 49)] < yKQHND1w[i]) {
                    PozuC1b4t = yKQHND1w[i];
                    yKQHND1w[i] = yKQHND1w[i + (124 - 123)];
                    yKQHND1w[i + (387 - 386)] = PozuC1b4t;
                }
            }
        }
        for (i = (575 - 575); i < n; i = i + (465 - 464)) {
            if (!(yKQHND1w[n - (457 - 456)] != gfd97BLm[i])) {
                k = i;
                break;
            }
        }
        scanf ("%s", substr);
        for (i = (434 - 434); i <= k; i = i + (474 - 473)) {
            printf ("%c", gfd97BLm[i]);
        }
        printf ("%s", substr);
        for (i = k + (74 - 73); i < n; i = i + (605 - 604)) {
            printf ("%c", gfd97BLm[i]);
        }
    }
}

