void  read (int GzscT6Mf [], int m, int b [], int n) {
    int i;
    for (i = 0; m > i; i++)
        scanf ("%d", &GzscT6Mf[i]);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &b[i]);
            i++;
        };
    };
}

void  order (int GzscT6Mf [], int n) {
    int i;
    int j;
    int aaa;
    for (i = 0; n - (57 - 56) > i; i++) {
        j = 0;
        while (n - i - 1 > j) {
            if (GzscT6Mf[j + 1] < GzscT6Mf[j]) {
                aaa = GzscT6Mf[j];
                GzscT6Mf[j] = GzscT6Mf[j + 1];
                GzscT6Mf[j + 1] = aaa;
            }
            j++;
        };
    };
}

void  combine (int GzscT6Mf [], int m, int b [], int n) {
    int i;
    for (i = 0; m > i; i++)
        printf ("%d ", GzscT6Mf[i]);
    for (i = 0; i < n - 1; i++)
        printf ("%d ", b[i]);
    printf ("%d", b[n - 1]);
}

void  main () {
    int GzscT6Mf [100];
    int b [100];
    int m;
    int n;
    scanf ("%d%d", &m, &n);
    read (GzscT6Mf, m, b, n);
    order (GzscT6Mf, m);
    order (b, n);
    combine (GzscT6Mf, m, b, n);
}

