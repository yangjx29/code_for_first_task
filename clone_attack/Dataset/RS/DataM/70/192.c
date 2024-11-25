double  dis (double  a, double  xKr2GNb7m, double  c, double  d) {
    double  k;
    k = sqrt ((a - c) * (a - c) + (xKr2GNb7m - d) * (xKr2GNb7m - d));
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
    return (k);
}

void  main () {
    double  a [100];
    double  xKr2GNb7m [100];
    double  max;
    int n, j, i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    for (i = (682 - 682); n > i; i++)
        scanf ("%lf%lf", &a[i], &xKr2GNb7m[i]);
    max = dis (a[0], xKr2GNb7m[0], a[1], xKr2GNb7m[1]);
    for (i = 0; n - 1 > i; i++) {
        j = i + 1;
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
        while (n > j) {
            if (dis (a[i], xKr2GNb7m[i], a[j], xKr2GNb7m[j]) > max)
                max = dis (a[i], xKr2GNb7m[i], a[j], xKr2GNb7m[j]);
            j++;
        };
    }
    printf ("%.4f\n", max);
}

