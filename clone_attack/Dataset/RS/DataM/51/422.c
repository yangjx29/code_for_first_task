void  main () {
    int i, n, len, j, num [500], maxn = 0, y = 0;
    char a [500] [(384 - 379)];
    char x [500];
    scanf ("%d%s", &n, x);
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
    len = strlen (x);
    for (i = 0; len - n >= i; i = i + 1) {
        for (j = 0; j < n; j = j + 1) {
            a[i][j] = x[i + j];
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
            };
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
        a[i][n] = '\0';
    }
    for (i = 0; len - n >= i; i = i + 1) {
        num[i] = 1;
        for (j = i + 1; len - n >= j; j = j + 1) {
            if (strcmp (a[i], a[j]) == 0)
                num[i]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = 0; i <= len - n; i = i + 1) {
        if (num[i] > maxn)
            maxn = num[i];
    }
    if (maxn == 1)
        ;
    else {
        printf ("%d\n", maxn);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = 0; i <= len - n; i = i + 1) {
            if (num[i] == maxn)
                printf ("%s\n", a[i]);
        };
    };
}

