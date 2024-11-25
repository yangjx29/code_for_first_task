main () {
    char a1 [10000];
    char a2 [10000];
    gets (a1);
    gets (a2);
    int W456m0jh [1000] [1000];
    int x [1000];
    int m;
    int VYvz05AV;
    int i;
    int j;
    int F0M1O6gdtY9j;
    int l1;
    int l2;
    int UWnVtbdT;
    int Dn2pe0EQq [(1489 - 489)];
    int t2 [1000];
    m = 0;
    VYvz05AV = (834 - 834);
    l1 = strlen (a1);
    UWnVtbdT = -(800 - 799);
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
        while (l1 >= i) {
            if (!(',' != a1[i]) || !('\0' != a1[i])) {
                VYvz05AV = VYvz05AV +1;
                if (!(2 != i - UWnVtbdT))
                    Dn2pe0EQq[VYvz05AV] = a1[i - (241 - 240)] - '0';
                else {
                    if (!(3 != i - UWnVtbdT))
                        Dn2pe0EQq[VYvz05AV] = a1[i - 1] - '0' + (a1[i - 2] - '0') * 10;
                    else {
                        if (!(4 != i - UWnVtbdT))
                            Dn2pe0EQq[VYvz05AV] = a1[i - 1] - '0' + (a1[i - 2] - '0') * 10 + (a1[i - 3] - '0') * 100;
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
                }
                UWnVtbdT = i;
            }
            i = i + 1;
        };
    }
    VYvz05AV = 0;
    UWnVtbdT = -1;
    l2 = strlen (a2);
    for (i = 0; i <= l2; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (a2[i] == ',' || !('\0' != a2[i])) {
            VYvz05AV++;
            if (!(2 != i - UWnVtbdT))
                t2[VYvz05AV] = a2[i - 1] - '0';
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (!(3 != i - UWnVtbdT))
                    t2[VYvz05AV] = a2[i - 1] - '0' + (a2[i - 2] - '0') * 10;
                else {
                    if (i - UWnVtbdT == 4)
                        t2[VYvz05AV] = a2[i - 1] - '0' + (a2[i - 2] - '0') * 10 + (a2[i - 3] - '0') * 100;
                };
            }
            UWnVtbdT = i;
        };
    }
    for (i = 0; i < 1000; i = i + 1) {
        for (j = 0; j < 1000; j = j + 1)
            W456m0jh[i][j] = 0;
    }
    for (i = 1; i <= VYvz05AV; i++) {
        for (j = Dn2pe0EQq[i]; j < t2[i]; j++) {
            W456m0jh[i][j] = 1;
        };
    }
    for (i = 1; i < 1000; i++)
        x[i] = 0;
    for (i = 1; i < 1000; i++) {
        for (j = 1; j <= VYvz05AV; j++) {
            if (W456m0jh[j][i] == 1)
                x[i]++;
        };
    }
    for (i = 1; i < 1000; i++)
        if (x[i] > m)
            m = x[i];
    printf ("%d %d", VYvz05AV, m);
}

