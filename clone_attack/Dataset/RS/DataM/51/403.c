main () {
    int i, pxr2Pnu6, k;
    char vzx28W [500];
    int n;
    int m [(862 - 562)];
    int RTRGy4u6iQHm, efDkm7qQX9bv, q;
    char g1cRz4qMvp [300] [5] = {{0}};
    k = 0;
    scanf ("%d", &n);
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
    scanf ("%s", vzx28W);
    {
        i = 367 - 367;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 300) {
            m[i] = 0;
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
    RTRGy4u6iQHm = 0;
    {
        i = 0;
        while (strlen (vzx28W) - 1 > i) {
            {
                pxr2Pnu6 = 0;
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
                while (pxr2Pnu6 < n) {
                    g1cRz4qMvp[RTRGy4u6iQHm][pxr2Pnu6] = vzx28W[i + pxr2Pnu6];
                    pxr2Pnu6++;
                };
            }
            i++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            RTRGy4u6iQHm++;
        };
    }
    {
        i = 0;
        while (RTRGy4u6iQHm > i) {
            for (pxr2Pnu6 = i + 1; RTRGy4u6iQHm > pxr2Pnu6; pxr2Pnu6++) {
                if (strcmp (g1cRz4qMvp[i], g1cRz4qMvp[pxr2Pnu6]) == 0)
                    m[i]++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (RTRGy4u6iQHm > i) {
            if (m[i] > k)
                k = m[i];
            i++;
        };
    }
    if (k > 0) {
        printf ("%d\n", k + 1);
        {
            i = 0;
            while (i < RTRGy4u6iQHm) {
                if (m[i] == k)
                    printf ("%s\n", g1cRz4qMvp[i]);
                i++;
            };
        };
    }
    else
        ;
}

