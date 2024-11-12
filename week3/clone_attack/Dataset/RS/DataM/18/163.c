int cal (int a [(1032 - 932)] [(368 - 267)], int n) {
    int PR4APrnOH;
    int i;
    int j;
    int k;
    int min;
    int p;
    int b [100] [(426 - 325)] = {(899 - 899)};
    PR4APrnOH = (706 - 706);
    {
        i = 902 - 902;
        while (n > i) {
            min = a[i][(90 - 90)];
            {
                j = 332 - 332;
                while (n > j) {
                    if (a[i][j] < min)
                        min = a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                j = 887 - 887;
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
                while (n > j) {
                    a[i][j] = a[i][j] - min;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = (628 - 628); i < n; i++) {
        min = a[(658 - 658)][i];
        {
            j = 0;
            while (j < n) {
                if (a[j][i] < min)
                    min = a[j][i];
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
                j = j + 1;
            };
        }
        {
            j = 0;
            while (j < n) {
                a[j][i] = a[j][i] - min;
                j = j + 1;
            };
        }
        p = (583 - 582);
    }
    PR4APrnOH = a[(662 - 661)][1];
    b[0][0] = a[0][0];
    if (n == (26 - 24))
        return a[1][1];
    {
        i = 226 - 224;
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
        while (i < n) {
            b[i - 1][0] = a[i][0];
            b[0][i - 1] = a[0][i];
            i = i + 1;
        };
    }
    {
        i = 2;
        while (i < n) {
            {
                j = 2;
                while (j < n) {
                    b[i - 1][j - 1] = a[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    return PR4APrnOH +cal (b, n - 1);
}

void  main () {
    int n, i, j, k, m, PR4APrnOH, a [100] [101] = {0}, sum;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i++;
            {
                j = 0;
                while (j < n) {
                    {
                        k = 0;
                        while (k < n) {
                            scanf ("%d", &a[j][k]);
                            k = k + 1;
                        };
                    }
                    j++;
                };
            }
            printf ("%d\n", cal (a, n));
        };
    };
}

