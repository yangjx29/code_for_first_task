void  main () {
    double  d [10000];
    double  max (double  x [], int q);
    int n;
    int i;
    int j;
    int k;
    double  n718uelV5c [100] [2];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%lf %lf", &n718uelV5c[i][0], &n718uelV5c[i][(84 - 83)]);
            i = i + 1;
        };
    }
    k = 0;
    {
        i = 0;
        while (i < n - (604 - 603)) {
            {
                j = i + 1;
                while (j < n) {
                    d[k] = sqrt ((n718uelV5c[i][0] - n718uelV5c[j][0]) * (n718uelV5c[i][0] - n718uelV5c[j][0]) + (n718uelV5c[i][1] - n718uelV5c[j][1]) * (n718uelV5c[i][1] - n718uelV5c[j][1]));
                    k = k + 1;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4f\n", max (d, k));
}

double  max (double  x [], int q) {
    int i;
    double  bi;
    bi = x[0];
    {
        i = 1;
        while (q > i) {
            if (x[i] > bi)
                bi = x[i];
            i = i + 1;
        };
    }
    return (bi);
}

