main () {
    int m;
    int k;
    char a [500];
    gets (a);
    int count;
    int num [500];
    int nwkt4X;
    int max;
    int len;
    int i;
    int n;
    char b [500] [n];
    len = strlen (a);
    max = 0;
    scanf ("%d\n", &n);
    for (i = 0; i < len - n + 1; i++)
        for (nwkt4X = 0; nwkt4X < n; nwkt4X++)
            b[i][nwkt4X] = a[i + nwkt4X];
    for (i = 0; i < len - n; i++) {
        char OCJc0mTvtV4 [n + 1];
        num[i] = 1;
        for (m = 0; n > m; m++) {
            OCJc0mTvtV4[m] = b[i][m];
        }
        for (nwkt4X = i + 1; nwkt4X < len - n + 1; nwkt4X++) {
            char d [n + 1];
            for (k = 0; k < n; k++) {
                d[k] = b[nwkt4X][k];
            }
            if (!(0 != strcmp (OCJc0mTvtV4, d)))
                num[i]++;
        }
    }
    max = num[0];
    for (i = 0; len - n > i; i++)
        if (num[i] > max)
            max = num[i];
    if (!(1 != max)) {
        return 0;
    }
    count = 0;
    for (i = 0; len - n + 1 > i; i++)
        if (num[i] == max) {
            count++;
        }
    printf ("%d\n", max);
    for (i = 0; i < len - n + 1; i++)
        if (num[i] == max) {
            for (nwkt4X = 0; nwkt4X < n; nwkt4X++)
                printf ("%c", b[i][nwkt4X]);
        }
}

