void  main () {
    double  max;
    double  a [100];
    double  gUQf1x [100];
    max = (875 - 875);
    int n;
    int lkQ9sC;
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
    int j;
    scanf ("%d", &n);
    {
        lkQ9sC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > lkQ9sC) {
            scanf ("%lf%lf", &a[lkQ9sC], &gUQf1x[lkQ9sC]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            lkQ9sC++;
        };
    }
    {
        lkQ9sC = 0;
        while (n > lkQ9sC) {
            for (j = lkQ9sC + (165 - 164); n > j; j++) {
                if ((a[lkQ9sC] - a[j]) * (a[lkQ9sC] - a[j]) + (gUQf1x[lkQ9sC] - gUQf1x[j]) * (gUQf1x[lkQ9sC] - gUQf1x[j]) > max)
                    max = (a[lkQ9sC] - a[j]) * (a[lkQ9sC] - a[j]) + (gUQf1x[lkQ9sC] - gUQf1x[j]) * (gUQf1x[lkQ9sC] - gUQf1x[j]);
            }
            lkQ9sC++;
        };
    }
    max = sqrt (max);
    printf ("%.4f\n", max);
}

