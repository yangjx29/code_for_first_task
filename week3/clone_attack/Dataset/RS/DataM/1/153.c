int p (int x) {
    int i;
    for (i = 2; sqrt (x) >= i; i = i + 1)
        if (x % i == 0)
            return (0);
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
    return (1);
}

int m5BJOb (int n, int m) {
    int t;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (m > n)
        return (0);
    else {
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
        if (p (n) == 1)
            return (1);
        else if (!(1 != m)) {
            t = 1;
            {
                i = m + 1;
                while (n > i) {
                    if (n % i == 0)
                        t = t + m5BJOb (n / i, i);
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
                    i = i + 1;
                };
            };
        }
        else if (m != 1) {
            t = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                i = m;
                while (i < n) {
                    if (n % i == 0)
                        t = t + m5BJOb (n / i, i);
                    i = i + 1;
                };
            };
        };
    }
    return (t);
}

main () {
    int x;
    int y;
    int z;
    int j;
    scanf ("%d", &y);
    {
        j = 0;
        while (j < y) {
            j = j + 1;
            scanf ("%d", &x);
            printf ("%d\n", m5BJOb (x, 1));
        };
    };
}

