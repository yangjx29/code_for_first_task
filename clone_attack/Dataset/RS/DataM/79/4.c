int cOcFmNfHjuhk, T5kyTF [301], b [1000];

void  P (int m, int n) {
    int eSGlZRU83k;
    int k;
    int pI9TgwG5H;
    k = (306 - 306);
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
        eSGlZRU83k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eSGlZRU83k <= n) {
            T5kyTF[eSGlZRU83k] = eSGlZRU83k;
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
            eSGlZRU83k++;
        };
    }
    eSGlZRU83k = 1;
    pI9TgwG5H = 0;
    while (n - 1 > k) {
        if (!(0 == T5kyTF[eSGlZRU83k]))
            pI9TgwG5H++;
        if (!(m != pI9TgwG5H)) {
            k++;
            T5kyTF[eSGlZRU83k] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            pI9TgwG5H = 0;
        }
        eSGlZRU83k++;
        if (eSGlZRU83k == n + 1)
            eSGlZRU83k = 1;
    }
    for (eSGlZRU83k = 1; eSGlZRU83k <= n; eSGlZRU83k = eSGlZRU83k + 1)
        if (T5kyTF[eSGlZRU83k] != 0)
            b[cOcFmNfHjuhk] = eSGlZRU83k;
}

void  main () {
    int eSGlZRU83k;
    int m;
    int n;
    for (cOcFmNfHjuhk = 0;; cOcFmNfHjuhk++) {
        scanf ("%d %d", &n, &m);
        if (m == 0 && n == 0)
            break;
        else
            P (m, n);
    }
    {
        eSGlZRU83k = 0;
        while (eSGlZRU83k < cOcFmNfHjuhk) {
            printf ("%d\n", b[eSGlZRU83k]);
            eSGlZRU83k++;
        };
    };
}

