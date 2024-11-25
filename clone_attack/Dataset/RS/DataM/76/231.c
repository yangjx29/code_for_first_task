int main () {
    double  AQjPXHxSNhJs;
    int INzsABdF;
    int kPRqcdL;
    int hDt63WEFc7sr;
    int e;
    int f;
    int gGiC8x;
    int Y5CSPeAw [e - f + 1];
    int tz [e - f + 1];
    int RU9P1aDudcb4 [INzsABdF];
    int b [INzsABdF];
    scanf ("%d\n", &INzsABdF);
    {
        kPRqcdL = 480 - 480;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (INzsABdF > kPRqcdL) {
            scanf ("%d", &RU9P1aDudcb4[kPRqcdL]);
            scanf ("%d\n", &b[kPRqcdL]);
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
            kPRqcdL = kPRqcdL + 1;
        };
    }
    f = RU9P1aDudcb4[0];
    e = b[0];
    {
        kPRqcdL = 243 - 242;
        while (INzsABdF > kPRqcdL) {
            if (e < b[kPRqcdL]) {
                e = b[kPRqcdL];
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
            }
            kPRqcdL = kPRqcdL + 1;
        };
    }
    {
        kPRqcdL = 1;
        while (kPRqcdL < INzsABdF) {
            if (f > RU9P1aDudcb4[kPRqcdL]) {
                f = RU9P1aDudcb4[kPRqcdL];
            }
            kPRqcdL = kPRqcdL + 1;
        };
    }
    {
        kPRqcdL = 0;
        while (e - f >= kPRqcdL) {
            Y5CSPeAw[kPRqcdL] = 0;
            tz[kPRqcdL] = 0;
            kPRqcdL++;
        };
    }
    {
        kPRqcdL = f;
        while (e >= kPRqcdL) {
            {
                hDt63WEFc7sr = 0;
                while (INzsABdF > hDt63WEFc7sr) {
                    if (b[hDt63WEFc7sr] < kPRqcdL || RU9P1aDudcb4[hDt63WEFc7sr] > kPRqcdL) {
                        Y5CSPeAw[kPRqcdL - f] = Y5CSPeAw[kPRqcdL - f] + 1;
                    }
                    hDt63WEFc7sr = hDt63WEFc7sr + 1;
                };
            }
            kPRqcdL = kPRqcdL + 1;
        };
    }
    {
        kPRqcdL = f;
        while (kPRqcdL < e) {
            AQjPXHxSNhJs = kPRqcdL + 0.5;
            {
                hDt63WEFc7sr = 0;
                while (hDt63WEFc7sr < INzsABdF) {
                    if (AQjPXHxSNhJs > b[hDt63WEFc7sr] || AQjPXHxSNhJs < RU9P1aDudcb4[hDt63WEFc7sr]) {
                        tz[kPRqcdL - f] = tz[kPRqcdL - f] + 1;
                    }
                    hDt63WEFc7sr++;
                };
            }
            kPRqcdL++;
        };
    }
    {
        kPRqcdL = 0;
        while (kPRqcdL <= e - f) {
            if (Y5CSPeAw[kPRqcdL] == INzsABdF || tz[kPRqcdL] == INzsABdF) {
                printf ("no");
                return 0;
            }
            kPRqcdL++;
        };
    }
    printf ("%d ", f);
    printf ("%d", e);
    return 0;
}

