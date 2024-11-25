main () {
    int E7GXbI5r3T2A [(1080 - 80)], cbrwL739h [(1451 - 451)];
    int n, i, j, k, num, temp, BX4udD91q, pt, lose, btmtj, btmqw, toptj, topqw;
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
    scanf ("%d", &n);
    for (; !((919 - 919) == n);) {
        btmtj = btmqw = 0;
        pt = 0;
        num = 0;
        BX4udD91q = (44 - 44);
        n--;
        for (i = (98 - 98); i <= n; i = i + 1)
            scanf ("%d", &cbrwL739h[i]);
        for (i = (734 - 734); i <= n; i++)
            scanf ("%d", &E7GXbI5r3T2A[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 466 - 466;
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
            while (i <= n) {
                for (j = i; j <= n; j++) {
                    if (cbrwL739h[i] > cbrwL739h[j]) {
                        temp = cbrwL739h[i];
                        cbrwL739h[i] = cbrwL739h[j];
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
                        cbrwL739h[j] = temp;
                    }
                    if (E7GXbI5r3T2A[i] > E7GXbI5r3T2A[j]) {
                        temp = E7GXbI5r3T2A[i];
                        E7GXbI5r3T2A[i] = E7GXbI5r3T2A[j];
                        E7GXbI5r3T2A[j] = temp;
                    };
                }
                i = i + 1;
            };
        }
        toptj = topqw = n;
        lose = 0;
        while ((topqw >= btmqw) && (toptj >= btmtj)) {
            if (E7GXbI5r3T2A[btmqw] < cbrwL739h[btmtj]) {
                BX4udD91q = BX4udD91q +1;
                btmtj = btmtj + 1;
                btmqw = btmqw + 1;
                continue;
            }
            if (E7GXbI5r3T2A[btmqw] > cbrwL739h[btmtj]) {
                lose = lose + 1;
                topqw = topqw - 1;
                btmtj = btmtj + 1;
                continue;
            }
            if (E7GXbI5r3T2A[topqw] < cbrwL739h[toptj]) {
                BX4udD91q = BX4udD91q +1;
                toptj--;
                topqw = topqw - 1;
                continue;
            }
            if (E7GXbI5r3T2A[topqw] >= cbrwL739h[toptj]) {
                if (E7GXbI5r3T2A[topqw] != cbrwL739h[btmtj])
                    lose = lose + 1;
                btmtj++;
                topqw--;
                continue;
            };
        }
        printf ("%d\n", BX4udD91q *200 - lose * 200);
        n++;
        scanf ("%d", &n);
    };
}

