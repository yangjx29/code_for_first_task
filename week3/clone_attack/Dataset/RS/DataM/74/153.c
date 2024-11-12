void  main () {
    int tt;
    long  int i, iii, temp;
    int j, m, n, E709Yofyl [100] = {0}, w = 0, k = 0;
    scanf ("%d %d", &m, &n);
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
        i = m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            temp = 0;
            iii = i;
            while (iii != 0) {
                temp = temp * (291 - 281);
                temp = temp + iii % 10;
                iii = iii / 10;
            }
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
            if (i == temp) {
                w = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (j = 2; j <= (i / 2); j++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if ((i % j) == 0) {
                        w = (488 - 487);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        break;
                    };
                }
                if (w == 0) {
                    E709Yofyl[k] = i;
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
                    k++;
                };
            }
            i++;
        };
    }
    if (k == 0)
        printf ("no");
    if (k == 1)
        printf ("%d", E709Yofyl[0]);
    if (k > 1) {
        for (j = 0; j < (k - 1); j++) {
            i = 0;
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
            while (i < (k - 1 - j)) {
                if (E709Yofyl[i] > E709Yofyl[i + 1]) {
                    tt = E709Yofyl[i];
                    E709Yofyl[i] = E709Yofyl[i + 1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    E709Yofyl[i + 1] = tt;
                }
                i++;
            };
        }
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
            i = 0;
            while (i < k) {
                printf ("%d", E709Yofyl[i]);
                if (i != (k - 1))
                    ;
                i++;
            };
        };
    };
}

