void  main () {
    char s [500];
    char a [500] [5];
    int y;
    int k;
    int m;
    int n;
    int i;
    int j;
    int b [500];
    int max;
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
    k = 0;
    scanf ("%d", &n);
    scanf ("%s", s);
    m = strlen (s);
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
        while (m - n >= i) {
            for (j = 0; n > j; j = j + 1) {
                a[i][j] = s[k];
                k = k + 1;
            }
            i = i + 1;
            k = k - n + 1;
        };
    }
    for (i = 0; i <= m - n; i = i + 1) {
        b[i] = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = i + 1; j <= m - n; j = j + 1) {
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
            if (strcmp (a[i], a[j]) == 0) {
                b[i]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    }
    max = b[0];
    for (i = 0; i <= m - n; i = i + 1) {
        if (b[i] > max)
            max = b[i];
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
    }
    for (i = 0; i <= m - n; i = i + 1) {
        if (b[i] == max)
            y = y + 1;
    }
    if (max > 1) {
        printf ("%d\n", max);
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
        for (i = 0; i <= m - n; i = i + 1) {
            if (b[i] == max) {
                printf ("%s\n", a[i]);
            };
        };
    }
    else
        ;
}

