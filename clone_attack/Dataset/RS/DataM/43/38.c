int sushu (int n) {
    int flag;
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
    flag = 0;
    for (i = 2; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n % i == 0) {
            flag = 1;
            break;
        };
    }
    if (flag)
        return 0;
    else
        return 1;
}

void  main () {
    int n, m, p, i;
    scanf ("%d", &n);
    m = n / 2;
    for (i = 2; i <= m; i = i + 1) {
        p = n - i;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (sushu (i) == 1 && sushu (p) == 1) {
            printf ("%d %d\n", i, p);
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
        };
    };
}

