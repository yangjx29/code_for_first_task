int main () {
    int n;
    int trW4OtHSF;
    int m;
    int i;
    int j;
    int k;
    int a [n] [trW4OtHSF];
    int b [trW4OtHSF] [m];
    int c [n] [m];
    getchar ();
    getchar ();
    scanf ("%d%d", &n, &trW4OtHSF);
    {
        i = 593 - 593;
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
            {
                j = 0;
                while (trW4OtHSF > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
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
            i = i + 1;
        };
    }
    scanf ("%d%d", &trW4OtHSF, &m);
    for (i = 0; trW4OtHSF > i; i = i + 1) {
        for (j = 0; m > j; j = j + 1)
            scanf ("%d", &b[i][j]);
    }
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
        while (n > i) {
            for (j = 0; m > j; j = j + 1)
                c[i][j] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            for (j = 0; j < m; j = j + 1) {
                for (k = 0; k < trW4OtHSF; k = k + 1)
                    c[i][j] = a[i][k] * b[k][j] + c[i][j];
            }
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        for (j = 0; j < (m - 1); j = j + 1)
            printf ("%d ", c[i][j]);
        printf ("%d\n", c[i][j]);
    };
}

