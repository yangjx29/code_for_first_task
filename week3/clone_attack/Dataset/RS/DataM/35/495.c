int andian (int a [8] [8], int j, int k, int h, int l) {
    int b = 1, p;
    for (p = 0; h > p; p = p + 1) {
        if (a[p][k] < a[j][k])
            b = b * 0;
    }
    for (p = 0; l > p; p++) {
        if (a[j][p] > a[j][k])
            b = b * 0;
    }
    return (b);
}

void  main () {
    int a, b, c [8] [8] = {0}, j, k, r = 0;
    scanf ("%d,%d", &a, &b);
    {
        j = 0;
        while (a > j) {
            for (k = 0; b > k; k++) {
                scanf ("%d", &c[j][k]);
            }
            j = j + 1;
        };
    }
    for (j = 0; j < a; j = j + 1) {
        k = 0;
        while (b > k) {
            if ((andian (c, j, k, a, b) == 1)) {
                r = r + 1;
                printf ("%d+%d\n", j, k);
            }
            k = k + 1;
        };
    }
    if (r == 0)
        ;
}

