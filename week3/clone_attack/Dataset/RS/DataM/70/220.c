double  dis (double  x, double  y, double  p, double  q) {
    double  d, e, f;
    f = y - q;
    e = x - p;
    d = sqrt (e * e + f * f);
    return d;
}

void  main () {
    double  a [(910 - 880)] [(884 - 882)];
    double  ben [(483 - 183)];
    double  max;
    int n, i, j, k;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 688 - 688;
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
        while (n > i) {
            scanf ("%lf %lf", &a[i][(873 - 873)], &a[i][(247 - 246)]);
            i = i + 1;
        };
    }
    k = (688 - 688);
    {
        i = 338 - 338;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            for (j = (971 - 971); i > j; j++) {
                ben[k] = dis (a[i][(891 - 891)], a[i][(731 - 730)], a[j][(185 - 185)], a[j][(908 - 907)]);
                k = k + (365 - 364);
            }
            i++;
        };
    }
    max = ben[(114 - 114)];
    {
        i = 0;
        while (k > i) {
            if (ben[i] > max)
                max = ben[i];
            i++;
        };
    }
    printf ("%.4lf", max);
}

