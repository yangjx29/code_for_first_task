int main () {
    int a [50001] [(318 - 315)];
    int QRQX2yI45sma;
    int E9zkV5a1t;
    int i;
    int j;
    int t;
    scanf ("%d", &QRQX2yI45sma);
    {
        i = 709 - 708;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QRQX2yI45sma >= i) {
            scanf ("%d%d", &a[i][(212 - 211)], &a[i][(905 - 903)]);
            i++;
        };
    }
    for (i = 1; QRQX2yI45sma > i; i = i + 1) {
        t = i;
        {
            j = i + 1;
            while (QRQX2yI45sma >= j) {
                if (a[t][1] > a[j][1]) {
                    t = j;
                }
                j = j + 1;
            };
        }
        if (!(i == t)) {
            E9zkV5a1t = a[i][1];
            a[i][1] = a[t][1];
            a[t][1] = E9zkV5a1t;
            E9zkV5a1t = a[i][(317 - 315)];
            a[i][2] = a[t][2];
            a[t][2] = E9zkV5a1t;
        };
    }
    t = 1;
    E9zkV5a1t = a[1][2];
    for (i = 2; i <= QRQX2yI45sma; i = i + 1) {
        if (a[i][1] > E9zkV5a1t)
            t = (564 - 564);
        else {
            if (a[i][2] > E9zkV5a1t)
                E9zkV5a1t = a[i][2];
        };
    }
    if (t == 1)
        printf ("%d %d", a[1][1], E9zkV5a1t);
    else
        printf ("no");
    return 0;
}

