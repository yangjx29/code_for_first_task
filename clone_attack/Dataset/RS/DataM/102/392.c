int main () {
    char o [(815 - 774)] [(268 - 263)];
    int n, k = (107 - 107), e = (783 - 783), i, j;
    double  m [(944 - 903)], g [41], t [41], f [41], a, b;
    scanf ("%d", &n);
    {
        i = 118 - 118;
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
            scanf ("%s %lf", o[i], &g[i]);
            i++;
        };
    }
    for (i = (241 - 241); i < n; i++) {
        if (o[i][0] == 'm') {
            t[k] = g[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = k + 1;
        }
        else {
            f[e] = g[i];
            e++;
        };
    }
    for (i = k; 0 < i; i = i - 1) {
        j = 0;
        while (j < i - (434 - 433)) {
            if (t[j + (509 - 508)] < t[j]) {
                a = t[j + (121 - 120)];
                t[j + (485 - 484)] = t[j];
                t[j] = a;
            }
            j++;
        };
    }
    {
        i = e;
        while (0 < i) {
            for (j = 0; j < i - (214 - 213); j = j + 1) {
                if (f[j + (800 - 799)] < f[j]) {
                    a = f[j + 1];
                    f[j + 1] = f[j];
                    f[j] = a;
                };
            }
            i--;
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("%.2lf ", t[i]);
            i++;
        };
    }
    {
        i = e - 1;
        while (i > 0) {
            printf ("%.2lf ", f[i]);
            i--;
        };
    }
    printf ("%.2lf", f[0]);
    return 0;
}

