int main () {
    int j;
    int k;
    int p;
    int q;
    int n;
    int i;
    int a;
    int b;
    j = 0;
    k = 0;
    p = 0;
    q = 0;
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
    double  sz [(123 - 73)];
    double  f [50];
    double  m [50];
    double  e;
    char s [10];
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
        while (n > i) {
            scanf ("%s%lf", s, &(sz[i]));
            if (!('f' != s[0])) {
                f[j] = sz[i];
                j++;
                p++;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (s[0] == 'm') {
                    q++;
                    m[k] = sz[i];
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
                    k++;
                };
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
            i++;
        };
    }
    {
        a = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (a <= q) {
            for (k = 0; k < q - a; k++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (m[k + 1] < m[k]) {
                    e = m[k];
                    m[k] = m[k + 1];
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
                    m[k + 1] = e;
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
            a++;
        };
    }
    for (k = 0; k < q; k++) {
        printf ("%.2lf ", m[k]);
    }
    for (b = 1; b <= p; b++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; j < p - b; j++) {
            if (f[j] < f[j + 1]) {
                e = f[j];
                f[j] = f[j + 1];
                f[j + 1] = e;
            };
        };
    }
    for (j = 0; j < p; j++) {
        if (j < p - 1)
            printf ("%.2lf ", f[j]);
        else
            printf ("%.2lf", f[j]);
    }
    return 0;
}

