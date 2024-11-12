void  main () {
    char in [10000], num [(1207 - 907)] [4];
    int n, CLYmzeBu3xKn, j = (563 - 563), k = (665 - 665), e = (77 - 77), w [300], z [300], YulJVBMUSyY [(196 - 96)], q [100];
    gets (in);
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
    n = strlen (in);
    {
        CLYmzeBu3xKn = 351 - 351;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CLYmzeBu3xKn < n) {
            if (!(',' == in[CLYmzeBu3xKn])) {
                num[k][j] = in[CLYmzeBu3xKn];
                j++;
            }
            else {
                k = k + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = (588 - 588);
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
            CLYmzeBu3xKn = CLYmzeBu3xKn +1;
        };
    }
    if (k == (627 - 627))
        ;
    else {
        {
            CLYmzeBu3xKn = 139 - 139;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (CLYmzeBu3xKn <= k) {
                w[CLYmzeBu3xKn] = strlen (num[CLYmzeBu3xKn]);
                {
                    z[CLYmzeBu3xKn] = 573 - 573;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    e = 711 - 711;
                    while (e < w[CLYmzeBu3xKn]) {
                        z[CLYmzeBu3xKn] = z[CLYmzeBu3xKn] + (num[CLYmzeBu3xKn][e] - '0') * pow (10, w[CLYmzeBu3xKn] - e - (104 - 103));
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
                        e++;
                    };
                }
                CLYmzeBu3xKn = CLYmzeBu3xKn +1;
            };
        }
        {
            CLYmzeBu3xKn = 390 - 390;
            while (CLYmzeBu3xKn <= k) {
                YulJVBMUSyY[CLYmzeBu3xKn] = (727 - 727);
                {
                    j = 936 - 936;
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
                    while (j <= k) {
                        if (z[CLYmzeBu3xKn] < z[j])
                            YulJVBMUSyY[CLYmzeBu3xKn] = (689 - 688);
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
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                CLYmzeBu3xKn++;
            };
        }
        {
            CLYmzeBu3xKn = 0;
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
            while (CLYmzeBu3xKn <= k) {
                if (YulJVBMUSyY[CLYmzeBu3xKn] == 0)
                    z[CLYmzeBu3xKn] = -1;
                CLYmzeBu3xKn++;
            };
        }
        {
            CLYmzeBu3xKn = 0;
            while (CLYmzeBu3xKn <= k) {
                q[CLYmzeBu3xKn] = 0;
                {
                    j = 0;
                    while (j <= k) {
                        if (z[j] > z[CLYmzeBu3xKn])
                            q[CLYmzeBu3xKn] = 1;
                        j++;
                    };
                }
                CLYmzeBu3xKn++;
            };
        }
        for (CLYmzeBu3xKn = 0; CLYmzeBu3xKn <= k; CLYmzeBu3xKn = CLYmzeBu3xKn +1) {
            if (q[CLYmzeBu3xKn] == 0 && z[CLYmzeBu3xKn] != -1) {
                printf ("%d", z[CLYmzeBu3xKn]);
                break;
            }
            else {
                if (q[CLYmzeBu3xKn] == 0 && z[CLYmzeBu3xKn] == -1) {
                    break;
                };
            };
        };
    };
}

