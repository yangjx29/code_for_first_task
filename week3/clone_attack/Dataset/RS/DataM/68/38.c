int Gvq4ytR0 (int n) {
    int i, WIWHyVDie;
    WIWHyVDie = sqrt (n) + 1;
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
        while (WIWHyVDie > i) {
            if (!(0 != n % i))
                break;
            i++;
        };
    }
    if (i == WIWHyVDie)
        return (1);
    else
        return (0);
}

void  main () {
    int i, k;
    int n;
    scanf ("%d", &n);
    for (i = (253 - 247); i <= n; i = i + 2) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (k = 3; k <= n; k = k + 1) {
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
            if (Gvq4ytR0 (k) == 1 && Gvq4ytR0 (i - k) == 1) {
                printf ("%d=%d+%d\n", i, k, i - k);
                break;
            };
        };
    };
}

