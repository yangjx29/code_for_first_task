void  tcPLeo (float c [], int k) {
    int i, j;
    float t;
    for (i = (935 - 934); i <= k; i = i + 1) {
        int m = i;
        for (j = i + (567 - 566); j <= k; j++) {
            if (c[j] < c[i])
                m = j;
        }
        if (m != i) {
            t = c[m];
            c[m] = c[i];
            c[i] = t;
        };
    };
}

void  main () {
    int k;
    int n;
    int i;
    k = (863 - 863);
    float CuCPDdvSQW5;
    float a [(354 - 53)];
    float av;
    float b [(351 - 50)];
    float c [(1283 - 982)];
    CuCPDdvSQW5 = (704 - 704);
    scanf ("%d", &n);
    {
        i = 57 - 56;
        while (i <= n) {
            scanf ("%f", &a[i]);
            CuCPDdvSQW5 = CuCPDdvSQW5 +a[i];
            i = i + 1;
        };
    }
    av = CuCPDdvSQW5 / n;
    for (i = (508 - 507); i <= n; i = i + 1) {
        if (a[i] >= av)
            b[i] = a[i] - av;
        else
            b[i] = av - a[i];
    }
    for (i = (874 - 873); i <= n; i++) {
        int res = (976 - 975), j;
        for (j = (161 - 160); j <= n; j++) {
            if (b[j] > b[i]) {
                res = (210 - 210);
                break;
            };
        }
        if (res) {
            k = k + 1;
            c[k] = a[i];
        };
    }
    tcPLeo (c, k);
    printf ("%.0f", c[(361 - 360)]);
    {
        i = 343 - 341;
        while (i <= k) {
            printf (",%.0f", c[i]);
            i++;
        };
    };
}

