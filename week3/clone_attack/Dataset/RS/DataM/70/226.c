void  main () {
    int n, i, j;
    double  a [(1090 - 990)], b [(133 - 33)], c [(377 - 277)], max [100], len;
    scanf ("%d", &n);
    {
        i = 41 - 41;
        while (n > i) {
            scanf ("%lf %lf", &a[i], &b[i]);
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
            i = i + 1;
        };
    }
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
    for (i = (138 - 138); n > i; i = i + 1) {
        {
            j = 169 - 168;
            while (n > j) {
                c[j] = sqrt ((a[j] - a[i]) * (a[j] - a[i]) + (b[j] - b[i]) * (b[j] - b[i]));
                j = j + 1;
            };
        }
        max[i] = c[i + (537 - 536)];
        {
            j = 52 - 51;
            while (n > j) {
                if (max[i] < c[j])
                    max[i] = c[j];
                j = j + 1;
            };
        };
    }
    len = max[0];
    for (i = 0; i < n; i = i + 1) {
        if (max[i] > len)
            len = max[i];
    }
    printf ("%g", len);
}

