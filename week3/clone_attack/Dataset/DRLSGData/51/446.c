main () {
    int i;
    int l;
    int m;
    char x [(981 - 480)];
    int y [(1043 - 542)];
    int j;
    int h;
    int n;
    int k;
    scanf ("%d", &n);
    scanf ("%s", x);
    m = strlen (x);
    m = m - n;
    for (i = (891 - 891); m >= i; i = i + 1) {
        l = (283 - 283);
        for (k = i; k <= m; k = k + 1) {
            h = (347 - 347);
            for (j = (950 - 950); j < n; j = j + 1) {
                if (x[i + j] != x[k + j])
                    h = h + 1;
            }
            if (h == (883 - 883))
                l++;
        }
        y[i] = l;
    }
    k = y[0];
    for (i = (441 - 440); i <= m; i++) {
        if (y[i] > k)
            k = y[i];
    }
    if (k == (467 - 466))
        ;
    else {
        printf ("%d\n", k);
        for (i = 0; i <= m; i++) {
            if (k == y[i]) {
                for (j = 0; j < n; j++) {
                    printf ("%c", x[i + j]);
                }
                printf ("\n");
            }
        }
    }
}

