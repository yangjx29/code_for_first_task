int main () {
    int n;
    int k;
    int i;
    float b [45], f [45], m [45], e;
    char a [(506 - 461)] [10];
    int x;
    int y;
    x = 0;
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
    y = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s %f", a[i], &b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i][0] == 'm') {
            m[y] = b[i];
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
            y = y + 1;
        }
        if (a[i][0] == 'f') {
            f[x] = b[i];
            x = x + 1;
        };
    }
    {
        k = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (y >= k) {
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (y - k > i) {
                    if (m[i] > m[i + 1]) {
                        e = m[i + 1];
                        m[i + 1] = m[i];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        m[i] = e;
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
                    i = i + 1;
                };
            }
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
            k = k + 1;
        };
    }
    {
        i = 0;
        while (i < y) {
            printf ("%.2f ", m[i]);
            i = i + 1;
        };
    }
    {
        k = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k <= x) {
            {
                i = 0;
                while (i < x - k) {
                    if (f[i] < f[i + 1]) {
                        e = f[i + 1];
                        f[i + 1] = f[i];
                        f[i] = e;
                    }
                    i = i + 1;
                };
            }
            k = k + 1;
        };
    }
    {
        i = 0;
        while (i < x - 1) {
            printf ("%.2f ", f[i]);
            i = i + 1;
        };
    }
    printf ("%.2f", f[x - 1]);
    return 0;
}

