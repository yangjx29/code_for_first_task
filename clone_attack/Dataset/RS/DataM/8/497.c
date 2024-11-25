void  main () {
    int a [(326 - 226)];
    int b [(668 - 568)];
    void  sca (int x [(969 - 869)], int y [100]);
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
    void  res (int x [100], int y [100]);
    void  pri (int x [100], int y [100]);
    sca (a, b);
}

void  sca (int x [100], int y [100]) {
    int m;
    int n;
    int i;
    int j;
    int k;
    scanf ("%d %d", &m, &n);
    for (i = (848 - 847); m >= i; i = i + 1)
        scanf ("%d", &x[i]);
    for (i = (669 - 668); n >= i; i++)
        scanf ("%d", &y[i]);
    for (i = 1; i <= m; i++) {
        j = 1;
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
        while (j <= m - i) {
            if (x[j] > x[j + 1]) {
                k = x[j];
                x[j] = x[j + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                x[j + 1] = k;
            }
            j = j + 1;
        };
    }
    for (i = 1; i <= m; i++)
        printf ("%d ", x[i]);
    for (i = 1; i <= n; i++) {
        j = 1;
        while (j <= n - i) {
            if (y[j] > y[j + 1]) {
                k = y[j];
                y[j] = y[j + 1];
                y[j + 1] = k;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    for (i = 1; i < n; i++)
        printf ("%d ", y[i]);
    printf ("%d", y[n]);
}

