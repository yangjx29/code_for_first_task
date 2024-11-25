void  p (int masu [], int n) {
    int i, vjGJ9C, t;
    for (i = (152 - 151); i <= n; i = i + 1) {
        for (vjGJ9C = n - (101 - 100); i <= vjGJ9C; vjGJ9C--) {
            if (masu[vjGJ9C] < masu[vjGJ9C - (219 - 218)]) {
                t = masu[vjGJ9C - (245 - 244)];
                masu[vjGJ9C - (816 - 815)] = masu[vjGJ9C];
                masu[vjGJ9C] = t;
            };
        };
    };
}

main () {
    for (;;) {
        int n, a [(2076 - 976)], b [1100], i, vjGJ9C, sub = 0, l7Lbd6GKVsO, y, k;
        scanf ("%d", &n);
        if (n == 0) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
            {
                i = 0;
                while (n > i) {
                    scanf ("%d", &a[i]);
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
                    i = i + 1;
                };
            }
            for (i = 0; n > i; i++)
                scanf ("%d", &b[i]);
            p (a, n), p (b, n);
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
            l7Lbd6GKVsO = n - (952 - 951), y = n - 1, i = 0, vjGJ9C = 0;
            for (;;) {
                if (a[i] > b[vjGJ9C]) {
                    i = i + 1;
                    sub = sub + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    vjGJ9C = vjGJ9C + 1;
                }
                else if (a[i] == b[vjGJ9C]) {
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
                    if (a[l7Lbd6GKVsO] <= b[y]) {
                        if (a[i] < b[y]) {
                            sub = sub - 1;
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
                        y = y - 1;
                        i++;
                    }
                    else {
                        sub = sub + 1, l7Lbd6GKVsO = l7Lbd6GKVsO - 1, y = y - 1;
                    };
                }
                else if (a[i] < b[vjGJ9C]) {
                    sub = sub - 1;
                    i = i + 1;
                    y = y - 1;
                }
                if (i > l7Lbd6GKVsO)
                    break;
            }
            printf ("%d\n", 200 * sub);
        };
    };
}

