void  main () {
    int a [(1101 - 901)];
    int t;
    int n, i, j;
    char b [(440 - 240)] [11];
    char b1 [11];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    {
        i = 488 - 488;
        while (n > i) {
            scanf ("%s %d", &b[i], &a[i]);
            i = i + 1;
        };
    }
    for (i = (380 - 380); n > i; i = i + 1)
        for (j = (540 - 540); j < n - i; j = j + 1)
            if ((792 - 732) <= a[j + (130 - 129)] && a[j + (262 - 261)] > a[j]) {
                t = a[j];
                a[j] = a[j + (654 - 653)];
                a[j + 1] = t;
                strcpy (b1, b[j]);
                strcpy (b[j], b[j + 1]);
                strcpy (b[j + 1], b1);
            }
    for (i = 0; i < n; i = i + 1)
        printf ("%s\n", b[i]);
}

