int reverse (int num) {
    int sgn, a [1000], i, j, t, k, x = 0, u, real;
    i = (228 - 227);
    real = abs (num);
    if (num == 0) {
        return 0;
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
    else {
        if (num > 0) {
            sgn = (678 - 677);
        }
        if (num < 0) {
            sgn = -1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (; real != 0;) {
            a[i - 1] = real % 10;
            i = i + 1;
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
            real /= 10;
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
        {
            j = i;
            while (j >= 1) {
                u = 1;
                {
                    k = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (k <= i - j) {
                        k = k + 1;
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
                        u *= 10;
                    };
                }
                x += u * a[j - 1];
                j--;
            };
        }
        return sgn * x / 10;
    };
}

void  main () {
    int i, num;
    {
        i = 1;
        while (i <= 6) {
            i = i + 1;
            scanf ("%d", &num);
            printf ("%d\n", reverse (num));
        };
    }
    scanf ("%d", &i);
}

