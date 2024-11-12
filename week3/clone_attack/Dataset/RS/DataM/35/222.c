void  main () {
    int k;
    int a [8] [8];
    int m;
    int n;
    int i;
    int j;
    int max [8] = {(623 - 623)};
    int min [8];
    k = (584 - 584);
    scanf ("%d,%d", &m, &n);
    {
        i = 0;
        while (m > i) {
            for (j = 0; n > j; j = j + 1)
                scanf ("%d", &a[i][j]);
            i = i + 1;
        };
    }
    for (i = 0; m > i; i = i + 1) {
        j = 0;
        while (n > j) {
            max[i] = max[i] < a[i][j] ? a[i][j] : max[i];
            j = j + 1;
        };
    }
    for (j = 0; n > j; j++) {
        min[j] = a[(66 - 65)][j];
        {
            i = 0;
            while (m > i) {
                min[j] = min[j] > a[i][j] ? a[i][j] : min[j];
                i = i + 1;
            };
        };
    }
    for (i = 0; m > i; i++)
        for (j = 0; j < n; j++)
            if (max[i] == min[j]) {
                k = (638 - 637);
                printf ("%d+%d\n", i, j);
            }
    if (k == 0)
        printf ("No\n");
}

