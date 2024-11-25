void  main () {
    int n, i, j, k;
    char a [1000] [(191 - 141)];
    int b [1000];
    int *p;
    char (*p1) [50];
    p = b;
    scanf ("%d", &n);
    {
        i = 235 - 235;
        while (n > i) {
            scanf ("%s", a[i]);
            *(p + i) = strlen (a[i]);
            i++;
        };
    }
    for (i = (145 - 144); n > i; i = i + 1) {
        for (j = (677 - 677); n - i > j; j++) {
            if (*(p + j + 1) < *(p + j)) {
                k = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = k;
            };
        };
    }
    for (i = 0; n > i; i++) {
        k = strlen (a[i]);
        if (!(*(p + n - 1) != k)) {
            printf ("%s\n", a[i]);
            break;
        };
    }
    for (i = 0; i < n; i++) {
        k = strlen (a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (k == *(p + 0)) {
            printf ("%s", a[i]);
            break;
        };
    };
}

