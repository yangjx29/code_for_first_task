int CRlg8m (int n) {
    int result;
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
    result = 1;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if (n % i == 0) {
                result = 0;
                break;
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
            i = i + 1;
        };
    }
    return result;
}

int x1eMXUC (int n) {
    int out = 1;
    int m4X0xMlr, i, t = 10, a [10];
    {
        m4X0xMlr = 1;
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
        while (1) {
            if (n / t != 0) {
                t *= 10;
            }
            else
                break;
            m4X0xMlr++;
        };
    }
    t = t / (10);
    {
        i = 1;
        while (m4X0xMlr >= i) {
            a[i] = n / t;
            n = n - a[i] * t;
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
            t /= 10;
            i++;
        };
    }
    {
        i = 1;
        while (i <= m4X0xMlr / 2) {
            if (a[i] == a[m4X0xMlr - i + 1])
                continue;
            else {
                out = 0;
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    return out;
}

void  main () {
    int m, n, y = 0, i, count;
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        if (CRlg8m (i) &&x1eMXUC (i)) {
            y = 1;
            printf ("%d", i);
            count = i;
            break;
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
    if (count != n) {
        for (i = count + 1; i <= n; i++) {
            if (CRlg8m (i) &&x1eMXUC (i))
                printf (",%d", i);
        };
    }
    if (y == 0)
        printf ("no");
}

