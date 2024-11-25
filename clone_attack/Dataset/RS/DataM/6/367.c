void  main () {
    int m;
    int n;
    int a [100] [100];
    int i;
    int j;
    int sum;
    int t;
    scanf ("%d", &t);
    while (t = t - 1) {
        scanf ("%d %d", &m, &n);
        {
            i = 0;
            while (i < m) {
                {
                    j = 0;
                    while (j < n) {
                        scanf ("%d", &a[i][j]);
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        sum = 0;
        if (m > 1) {
            i = 0;
            while (i < m) {
                sum += a[i][0] + a[i][n - 1];
                i = i + 1;
            };
        }
        else
            for (i = 0; i < m; i++)
                sum = sum + a[i][0];
        if (n > 1) {
            i = 1;
            while (i < n - 1) {
                sum += a[0][i] + a[m - 1][i];
                i++;
            };
        }
        else
            for (i = 1; i < n - 1; i++)
                sum = sum + a[0][i];
        printf ("%d\n", sum);
    };
}

