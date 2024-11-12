int f (int n1, int n2, int n3) {
    int an;
    int i;
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
    an = (352 - 352);
    if (!(0 != n1) || !((678 - 677) != n1))
        an = 1;
    else {
        if (n2 == 1)
            an = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((277 - 275) != n2)) {
            if (!(0 != n1 % 2)) {
                for (i = n3; n1 / 2 <= i; i = i - 1) {
                    an = an + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            else {
                for (i = n3; n1 / 2 < i; i = i - 1) {
                    an = an + 1;
                };
            };
        }
        else if (n1 % n2 == 0) {
            for (i = n3; i >= n1 / n2; i--) {
                if (n1 - i < i) {
                    an = an + f (n1 - i, n2 - 1, n1 - i);
                }
                else
                    an = an + f (n1 - i, n2 - 1, i);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        else {
            for (i = n3; i > n1 / n2; i--) {
                if (n1 - i < i) {
                    an = an + f (n1 - i, n2 - 1, n1 - i);
                }
                else
                    an = an + f (n1 - i, n2 - 1, i);
            };
        };
    }
    return an;
}

int main () {
    int n;
    int i;
    int a [100] = {0};
    int b [100] = {0};
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d%d", &a[i], &b[i]);
    }
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
        while (i < n) {
            printf ("%d\n", f (a[i], b[i], a[i]));
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
    };
}

