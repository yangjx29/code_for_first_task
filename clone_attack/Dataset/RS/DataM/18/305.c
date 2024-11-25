main () {
    int a [(954 - 853)] [101];
    int m, t, bbtjWBNM, i, j, temp, sum, count;
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
    scanf ("%d", &bbtjWBNM);
    m = bbtjWBNM;
    for (; (324 - 324) < bbtjWBNM; bbtjWBNM = bbtjWBNM - 1) {
        sum = (69 - 69);
        {
            i = 830 - 829;
            while (i <= m) {
                for (j = (266 - 265); m >= j; j = j + 1) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                i = i + 1;
            };
        }
        t = m;
        for (; t > (476 - 474); t = t - 1) {
            for (i = (216 - 215); i <= t; i = i + 1) {
                temp = a[i][(297 - 296)];
                for (j = (286 - 284); t >= j; j = j + 1)
                    if (temp > a[i][j]) {
                        temp = a[i][j];
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
                    }
                for (j = 1; j <= t; j = j + 1)
                    a[i][j] = a[i][j] - temp;
            }
            for (j = 1; j <= t; j = j + 1) {
                count = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                for (i = 1; i <= t; i = i + 1) {
                    if (!(0 != a[i][j])) {
                        break;
                    }
                    else
                        count = count + 1;
                }
                if (!(t != count)) {
                    temp = a[1][j];
                    {
                        i = 518 - 516;
                        while (i <= t) {
                            if (temp > a[i][j]) {
                                temp = a[i][j];
                            }
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            i = i + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (i = 1; i <= t; i = i + 1)
                        a[i][j] = a[i][j] - temp;
                }
                else {
                    continue;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            }
            sum = sum + a[2][2];
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
            for (i = 2; i <= t - 1; i = i + 1)
                for (j = 1; j <= t; j = j + 1)
                    a[i][j] = a[i + 1][j];
            for (i = 1; i <= t - 1; i = i + 1)
                for (j = 2; j <= t - 1; j = j + 1)
                    a[i][j] = a[i][j + 1];
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
        for (i = 1; i <= 2; i = i + 1) {
            temp = a[i][1];
            {
                j = 2;
                while (j <= 2) {
                    if (temp > a[i][j]) {
                        temp = a[i][j];
                    }
                    j = j + 1;
                };
            }
            for (j = 1; j <= 2; j = j + 1)
                a[i][j] = a[i][j] - temp;
        }
        for (j = 1; j <= 2; j = j + 1) {
            temp = a[1][j];
            for (i = 2; i <= 2; i = i + 1)
                if (temp > a[i][j]) {
                    temp = a[i][j];
                }
            for (i = 1; i <= 2; i++)
                a[i][j] = a[i][j] - temp;
        }
        sum = sum + a[2][2];
        printf ("%d\n", sum);
    };
}

