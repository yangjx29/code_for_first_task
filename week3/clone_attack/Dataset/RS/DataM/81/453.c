void  main () {
    int rbLomRNX1, j, m, n;
    int a [(317 - 312)] [(580 - 575)];
    int fac (int a [5] [5], int n, int m);
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
    for (rbLomRNX1 = 0; rbLomRNX1 < 5; rbLomRNX1 = rbLomRNX1 + 1) {
        for (j = 0; 5 > j; j = j + 1)
            scanf ("%d", &a[rbLomRNX1][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    scanf ("%d%d", &n, &m);
    if (!(1 != fac (a, n, m))) {
        for (rbLomRNX1 = 0; rbLomRNX1 < 5; rbLomRNX1 = rbLomRNX1 + 1) {
            for (j = 0; j < 5; j++) {
                if (4 > j)
                    printf ("%d ", a[rbLomRNX1][j]);
                else
                    printf ("%d\n", a[rbLomRNX1][j]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    else
        printf ("error");
}

int fac (int a [] [5], int n, int m) {
    int rbLomRNX1;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    if (n >= 0 && n < 5 && m >= 0 && m < 5) {
        {
            rbLomRNX1 = 0;
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
            while (rbLomRNX1 < 5) {
                j = a[m][rbLomRNX1];
                a[m][rbLomRNX1] = a[n][rbLomRNX1];
                a[n][rbLomRNX1] = j;
                rbLomRNX1 = rbLomRNX1 + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return (1);
    }
    else
        return (0);
}

