int a [11] [11];

void  YXdL4FmfCh (int n) {
    a[5][5] = n;
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

void  TiaT9m () {
    int KTA4F6q [11] [11];
    {
        int i;
        i = (734 - 733);
        while ((497 - 488) >= i) {
            {
                int wZriBLg4 = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (9 >= wZriBLg4) {
                    KTA4F6q[i][wZriBLg4] = (807 - 807);
                    wZriBLg4 = wZriBLg4 + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (9 >= i) {
            {
                int wZriBLg4 = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (9 >= wZriBLg4) {
                    KTA4F6q[i][wZriBLg4] += 2 * a[i][wZriBLg4];
                    KTA4F6q[i - 1][wZriBLg4] += a[i][wZriBLg4];
                    KTA4F6q[i + 1][wZriBLg4] = KTA4F6q[i + 1][wZriBLg4] + a[i][wZriBLg4];
                    KTA4F6q[i][wZriBLg4 - 1] += a[i][wZriBLg4];
                    KTA4F6q[i][wZriBLg4 + 1] += a[i][wZriBLg4];
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
                    KTA4F6q[i - 1][wZriBLg4 - 1] += a[i][wZriBLg4];
                    KTA4F6q[i + 1][wZriBLg4 + 1] += a[i][wZriBLg4];
                    KTA4F6q[i + 1][wZriBLg4 - 1] += a[i][wZriBLg4];
                    KTA4F6q[i - 1][wZriBLg4 + 1] = KTA4F6q[i - 1][wZriBLg4 + 1] + a[i][wZriBLg4];
                    wZriBLg4 = wZriBLg4 + 1;
                };
            }
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
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i <= 9) {
            for (int wZriBLg4 = 1;
            wZriBLg4 <= 9; wZriBLg4 = wZriBLg4 + 1) {
                a[i][wZriBLg4] = KTA4F6q[i][wZriBLg4];
            }
            i = i + 1;
        };
    };
}

int main () {
    int n, euktXCHT9am;
    YXdL4FmfCh (n);
    scanf ("%d%d", &n, &euktXCHT9am);
    while (euktXCHT9am--) {
        TiaT9m ();
    }
    for (int i = 1;
    i <= 9; i++) {
        {
            int wZriBLg4 = 1;
            while (wZriBLg4 < 9) {
                printf ("%d ", a[i][wZriBLg4]);
                wZriBLg4 = wZriBLg4 + 1;
            };
        }
        printf ("%d\n", a[i][9]);
    }
    return 0;
}

