main () {
    int i, n, j = 0, k = 0, p, m, c;
    float h, a [40], b [40], t;
    char s [10];
    getchar ();
    getchar ();
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
            scanf ("%s %f", s, &h);
            if (s[0] == 'm') {
                a[j] = h;
                j = j + 1;
            }
            if (s[0] == 'f') {
                b[k] = h;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k++;
            }
            i = i + 1;
        };
    }
    {
        p = 0;
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
        while (p < j) {
            {
                m = 0;
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
                while (j - p - 1 > m) {
                    if (a[m + 1] < a[m]) {
                        t = a[m + 1];
                        a[m + 1] = a[m];
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
                        a[m] = t;
                    }
                    m++;
                };
            }
            p = p + 1;
        };
    }
    {
        c = 0;
        while (c < j) {
            printf ("%.2f ", a[c]);
            c++;
        };
    }
    for (p = 0; p < k; p++) {
        m = 0;
        while (m < k - p - 1) {
            if (b[m] < b[m + 1]) {
                t = b[m + 1];
                b[m + 1] = b[m];
                b[m] = t;
            }
            m++;
        };
    }
    {
        c = 0;
        while (c < k - 1) {
            printf ("%.2f ", b[c]);
            c++;
        };
    }
    printf ("%.2f\n", b[k - 1]);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

