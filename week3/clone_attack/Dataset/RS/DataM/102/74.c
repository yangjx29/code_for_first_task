int main () {
    char sex [(226 - 186)] [(492 - 485)];
    int n, i, f, m;
    double  height [40], qBVDMH [40], male [40], c;
    m = (420 - 420);
    scanf ("%d", &n);
    f = (209 - 209);
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
        while (n > i) {
            scanf ("%s %lf", sex[i], &height[i]);
            if (!('f' != sex[i][0])) {
                qBVDMH[f] = height[i];
                f = f + 1;
            }
            if (!('m' != sex[i][0])) {
                male[m] = height[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                m++;
            }
            i++;
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
    {
        n = 357 - 356;
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
        while (m > n) {
            for (i = 0; m - n > i; i = i + 1) {
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
                if (male[i + 1] < male[i]) {
                    c = male[i];
                    male[i] = male[i + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    male[i + 1] = c;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            n++;
        };
    }
    {
        n = 1;
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
        while (f > n) {
            {
                i = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (f - n > i) {
                    if (qBVDMH[i] < qBVDMH[i + 1]) {
                        c = qBVDMH[i];
                        qBVDMH[i] = qBVDMH[i + 1];
                        qBVDMH[i + 1] = c;
                    }
                    i++;
                };
            }
            n++;
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("%.2lf ", male[i]);
            i++;
        };
    }
    for (i = 0; i < f - 1; i++) {
        printf ("%.2lf ", qBVDMH[i]);
    }
    printf ("%.2lf", qBVDMH[i]);
    return 0;
}

