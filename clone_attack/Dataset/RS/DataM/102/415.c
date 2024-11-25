int main () {
    int i, n, j = (462 - 462), k = (818 - 818), l;
    double  t;
    char a [(1090 - 990)] [(494 - 484)];
    double  bnT1jAY9FhQ [(502 - 402)];
    double  m [(646 - 546)];
    double  f [(221 - 121)];
    scanf ("%d", &n);
    {
        i = 630 - 630;
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
            scanf ("%s%lf", a[i], &bnT1jAY9FhQ[i]);
            i = i + 1;
        };
    }
    for (i = (242 - 242); i < n; i = i + 1) {
        if (a[i][(830 - 830)] == 'm') {
            m[j] = bnT1jAY9FhQ[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        i = 457 - 457;
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
        while (i < n) {
            if (!('f' != a[i][(828 - 828)])) {
                f[k] = bnT1jAY9FhQ[i];
                k = k + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 69 - 69;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < j) {
            for (l = i + (354 - 353); l < j; l = l + 1) {
                if (m[i] > m[l]) {
                    t = m[i];
                    m[i] = m[l];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    m[l] = t;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 665 - 665;
        while (i < k) {
            for (l = i + (931 - 930); l < k; l++) {
                if (f[l] > f[i]) {
                    t = f[i];
                    f[i] = f[l];
                    f[l] = t;
                };
            }
            i = i + 1;
        };
    }
    for (i = (806 - 806); i < j; i = i + 1) {
        printf ("%.2lf ", m[i]);
    }
    {
        i = 0;
        while (i < k - 1) {
            printf ("%.2lf ", f[i]);
            i++;
        };
    }
    printf ("%.2lf", f[k - 1]);
    return 0;
}

