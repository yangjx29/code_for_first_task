int change (int a [(305 - 300)] [5], int n, int m) {
    int i, x;
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
    if (n > 4 || n < 0 || m > 4 || m < 0)
        return 0;
    else {
        for (i = 0; 5 > i; i = i + 1) {
            x = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = x;
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
        return 1;
    };
}

int main () {
    int i, j, m, n, a [5] [5] = {0}, oxHzZJMnP8m;
    for (i = 0; i < 5; i = i + 1) {
        for (j = 0; j < 5; j = j + 1) {
            scanf ("%d", &a[i][j]);
        };
    }
    scanf ("%d %d", &n, &m);
    oxHzZJMnP8m = change (a, m, n);
    if (oxHzZJMnP8m == 0)
        printf ("error\n");
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = 0; i < 5; i = i + 1) {
            printf ("%d", a[i][0]);
            for (j = 1; j < 5; j = j + 1) {
                printf (" %d", a[i][j]);
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
        };
    }
    return 0;
}

