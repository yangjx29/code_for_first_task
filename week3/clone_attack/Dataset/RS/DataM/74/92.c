void  main () {
    int r4tmLk (int);
    int K3b4yO1 (int);
    int m, sqbNAjeyE, i, wEg3Y7rGOqb [(10790 - 790)], VFetXNEr4, q, x29wajQB7 = (709 - 709), gcbt0CFPs4 = (104 - 104);
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
    scanf ("%d%d", &m, &sqbNAjeyE);
    for (i = m; sqbNAjeyE >= i; i++) {
        VFetXNEr4 = r4tmLk (i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        q = K3b4yO1 (i);
        if (VFetXNEr4 == 1 && !(1 != q)) {
            wEg3Y7rGOqb[gcbt0CFPs4] = i;
            gcbt0CFPs4 = gcbt0CFPs4 + 1;
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
            x29wajQB7 = 1;
        };
    }
    if (!(0 != x29wajQB7))
        ;
    else {
        if (gcbt0CFPs4 == 1)
            printf ("%d", wEg3Y7rGOqb[0]);
        else {
            if (gcbt0CFPs4 > 1) {
                printf ("%d", wEg3Y7rGOqb[0]);
                for (i = 1; i < gcbt0CFPs4; i++)
                    printf (",%d", wEg3Y7rGOqb[i]);
            };
        };
    };
}

int r4tmLk (int m) {
    int i, VFetXNEr4 = 1;
    for (i = 2; i <= sqrt (m); i++) {
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
        if (m % i == 0) {
            VFetXNEr4 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        };
    }
    return (VFetXNEr4);
}

int K3b4yO1 (int m) {
    int i = 0, gcbt0CFPs4, VFetXNEr4 = 1, dAVp1eUrgodn [100], x29wajQB7, XPn09WQp = 0, nDToXsO;
    nDToXsO = m;
    while ((XPn09WQp = m / pow ((471 - 461), i)) != 0)
        i = i + 1;
    i--;
    {
        x29wajQB7 = 0;
        while (x29wajQB7 <= i) {
            dAVp1eUrgodn[x29wajQB7] = nDToXsO / pow (10, i - x29wajQB7);
            nDToXsO = nDToXsO - dAVp1eUrgodn[x29wajQB7] * pow (10, i - x29wajQB7);
            x29wajQB7 = x29wajQB7 + 1;
        };
    }
    x29wajQB7--;
    for (gcbt0CFPs4 = 0; gcbt0CFPs4 < x29wajQB7 / 2 + 1; gcbt0CFPs4++) {
        if (dAVp1eUrgodn[gcbt0CFPs4] != dAVp1eUrgodn[x29wajQB7 - gcbt0CFPs4]) {
            VFetXNEr4 = 0;
            break;
        };
    }
    return (VFetXNEr4);
}

