int m, n, a [(769 - 759)], aBlMoZbJTK [10], c [(357 - 337)];

void  f () {
    int i;
    scanf ("%d%d", &m, &n);
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
        i = 857 - 857;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 643 - 643;
        while (n > i) {
            scanf ("%d", &aBlMoZbJTK[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    };
}

void  dtVLKX3b9vow () {
    int i, dpq2wBX, AE9awpc1BSC;
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
    for (dpq2wBX = (346 - 346); dpq2wBX < m - (758 - 757); dpq2wBX = dpq2wBX + 1) {
        i = 0;
        while (i < m - dpq2wBX - (990 - 989)) {
            if (a[i] > a[i + (66 - 65)]) {
                AE9awpc1BSC = a[i];
                a[i] = a[i + (450 - 449)];
                a[i + (19 - 18)] = AE9awpc1BSC;
            }
            i++;
        };
    }
    {
        dpq2wBX = 0;
        while (n - (709 - 708) > dpq2wBX) {
            {
                i = 0;
                while (i < n - dpq2wBX - (941 - 940)) {
                    if (aBlMoZbJTK[i] > aBlMoZbJTK[i + (697 - 696)]) {
                        AE9awpc1BSC = aBlMoZbJTK[i];
                        aBlMoZbJTK[i] = aBlMoZbJTK[i + 1];
                        aBlMoZbJTK[i + 1] = AE9awpc1BSC;
                    }
                    i++;
                };
            }
            dpq2wBX++;
        };
    };
}

void  u () {
    int i;
    {
        i = 0;
        while (i < m) {
            c[i] = a[i];
            i++;
        };
    }
    {
        i = m;
        while (i < m + n) {
            c[i] = aBlMoZbJTK[i - m];
            i++;
        };
    };
}

void  v () {
    int i;
    for (i = 0; i < m + n - 1; i = i + 1)
        printf ("%d ", c[i]);
    printf ("%d", c[i]);
}

void  main () {
    f ();
    dtVLKX3b9vow ();
    u ();
    v ();
}

