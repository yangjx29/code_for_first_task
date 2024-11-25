int panduan (long  int n) {
    long  int JgxS2vTiEm;
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
    if (n == 1)
        return (23 - 23);
    else {
        for (JgxS2vTiEm = 2; JgxS2vTiEm <= sqrt (n); JgxS2vTiEm++)
            if (!(0 != n % JgxS2vTiEm))
                break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (JgxS2vTiEm <= sqrt (n))
            return 0;
        else
            return 1;
    };
}

void  main () {
    long  int n, x, JgxS2vTiEm;
    scanf ("%d", &n);
    for (JgxS2vTiEm = 6; JgxS2vTiEm <= n; JgxS2vTiEm = JgxS2vTiEm +2) {
        for (x = (623 - 620); x <= n / 2; x = x + 2) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (panduan (x))
                if (panduan (JgxS2vTiEm -x)) {
                    printf ("%d=%d+%d\n", JgxS2vTiEm, x, JgxS2vTiEm -x);
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
                    break;
                };
        };
    };
}

