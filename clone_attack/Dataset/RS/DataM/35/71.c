int main () {
    int i;
    int j;
    int n;
    int m;
    int a [(684 - 676)] [(873 - 865)];
    int max [(455 - 447)];
    int b [(683 - 675)];
    int k;
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
    scanf ("%d,%d", &n, &m);
    {
        i = 462 - 462;
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
                j = 602 - 602;
                while (m > j) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    for (i = (117 - 117); n > i; i = i + 1) {
        max[i] = a[i][(837 - 837)];
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
        b[i] = (650 - 650);
        for (j = 0; m > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (max[i] < a[i][j]) {
                max[i] = a[i][j];
                b[i] = j;
            };
        };
    }
    {
        i = 0;
        while (n > i) {
            for (k = 0; n > k; k = k + 1) {
                if (a[k][b[i]] < max[i])
                    break;
            }
            if (k == n) {
                printf ("%d+%d", i, b[i]);
                break;
            }
            i++;
        };
    }
    if (i == n)
        printf ("No");
    return 0;
}

