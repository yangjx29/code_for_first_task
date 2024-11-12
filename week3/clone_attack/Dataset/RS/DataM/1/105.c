int panduansushu (int QOjpgPXmnCq) {
    int yDTe5m;
    for (yDTe5m = 2; yDTe5m < QOjpgPXmnCq; yDTe5m = yDTe5m + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((481 - 481) != QOjpgPXmnCq % yDTe5m)) {
            break;
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
        };
    }
    if (yDTe5m > QOjpgPXmnCq / 2)
        return (121 - 120);
    else
        return 0;
}

int sum = 0;

void  fun (int n, int yDTe5m) {
    if (!(1 != n))
        sum = sum + 1;
    for (; yDTe5m <= n; yDTe5m++) {
        if (!(0 != n % yDTe5m))
            fun (n / yDTe5m, yDTe5m);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

void  main () {
    int a [100], yDTe5m, res, j, n;
    scanf ("%d", &n);
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
    for (j = 0; j < n; j++)
        scanf ("%d", &a[j]);
    for (j = 0; j < n; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (panduansushu (a[j]) == 1) {
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
        else {
            for (yDTe5m = 2, res = 1; yDTe5m < a[j] / 2; yDTe5m++) {
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
                if (a[j] % yDTe5m == 0) {
                    sum = 0;
                    fun (a[j] / yDTe5m, yDTe5m);
                    res += sum;
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
            printf ("%d\n", res);
        };
    };
}

