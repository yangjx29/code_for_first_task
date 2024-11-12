void  main () {
    double  a [100] [2], b [100] [100], ACIzXVWsSnt = 0.0;
    int n, RrdS1C7z, j;
    scanf ("%d", &n);
    for (RrdS1C7z = 0; n > RrdS1C7z; RrdS1C7z = RrdS1C7z +1)
        scanf ("%lf %lf", &a[RrdS1C7z][0], &a[RrdS1C7z][1]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        RrdS1C7z = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RrdS1C7z < (n - 1)) {
            {
                j = RrdS1C7z +1;
                while (n > j) {
                    b[RrdS1C7z][j] = sqrt ((a[j][0] - a[RrdS1C7z][0]) * (a[j][0] - a[RrdS1C7z][0]) + (a[j][1] - a[RrdS1C7z][1]) * (a[j][1] - a[RrdS1C7z][1]));
                    j = j + 1;
                };
            }
            RrdS1C7z++;
        };
    }
    for (RrdS1C7z = 0; RrdS1C7z < n; RrdS1C7z++)
        for (j = RrdS1C7z +1; n > j; j++) {
            if (b[RrdS1C7z][j] > ACIzXVWsSnt)
                ACIzXVWsSnt = b[RrdS1C7z][j];
        }
    printf ("%.4f\n", ACIzXVWsSnt);
}

