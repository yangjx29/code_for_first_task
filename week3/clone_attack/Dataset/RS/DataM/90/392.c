int f (int m, int n) {
    int EvVk21;
    if (!(1 != m) || n == 1 || m == (407 - 407)) {
        EvVk21 = 1;
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
    else if (m < n) {
        EvVk21 = f (m, m);
    }
    else {
        EvVk21 = f (m, n - 1) + f (m - n, n);
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
    return (EvVk21);
}

main () {
    int t;
    int m;
    int n;
    int FHs4yTV6 = 0;
    getchar ();
    scanf ("%d", &t);
    {
        FHs4yTV6 = 0;
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
        while (FHs4yTV6 <= t - 1) {
            FHs4yTV6++;
            scanf ("%d %d", &m, &n);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("%d\n", f (m, n));
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

