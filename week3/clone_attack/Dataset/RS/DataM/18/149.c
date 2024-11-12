int min (int a [], int amhOHtUMCKW);
int f (int vezJZhHUuQ [] [(672 - 572)], int amhOHtUMCKW);

int main () {
    int to7kCRiWhu6s, amhOHtUMCKW, BqHSjf, LeuIB9cYU;
    cin >> amhOHtUMCKW;
    to7kCRiWhu6s = amhOHtUMCKW;
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
    while (to7kCRiWhu6s--) {
        int a [100] [100] = {(412 - 412)};
        {
            BqHSjf = 475 - 475;
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
            while (amhOHtUMCKW > BqHSjf) {
                for (LeuIB9cYU = (992 - 992); amhOHtUMCKW > LeuIB9cYU; LeuIB9cYU = LeuIB9cYU +1)
                    cin >> a[BqHSjf][LeuIB9cYU];
                BqHSjf = BqHSjf +1;
            };
        }
        cout << f (a, amhOHtUMCKW) << endl;
    }
    return (187 - 187);
}

int min (int a [], int amhOHtUMCKW) {
    int mini = a[(297 - 297)], BqHSjf;
    {
        BqHSjf = 1;
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
        while (amhOHtUMCKW > BqHSjf) {
            if (mini > a[BqHSjf])
                mini = a[BqHSjf];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            BqHSjf = BqHSjf +1;
        };
    }
    return mini;
}

int f (int vezJZhHUuQ [] [100], int amhOHtUMCKW) {
    int BqHSjf, LeuIB9cYU, to7kCRiWhu6s, EyKt1M3cG, wsQU2K;
    if (!(1 != amhOHtUMCKW))
        return 0;
    else {
        {
            BqHSjf = 0;
            while (BqHSjf < amhOHtUMCKW) {
                to7kCRiWhu6s = min (vezJZhHUuQ[BqHSjf], amhOHtUMCKW);
                for (LeuIB9cYU = 0; amhOHtUMCKW > LeuIB9cYU; LeuIB9cYU = LeuIB9cYU +1)
                    vezJZhHUuQ[BqHSjf][LeuIB9cYU] = vezJZhHUuQ[BqHSjf][LeuIB9cYU] - to7kCRiWhu6s;
                BqHSjf = BqHSjf +1;
            };
        }
        for (BqHSjf = 0; BqHSjf < amhOHtUMCKW; BqHSjf = BqHSjf +1) {
            wsQU2K = vezJZhHUuQ[0][BqHSjf];
            for (LeuIB9cYU = 0; amhOHtUMCKW > LeuIB9cYU; LeuIB9cYU++) {
                if (vezJZhHUuQ[LeuIB9cYU][BqHSjf] < wsQU2K)
                    wsQU2K = vezJZhHUuQ[LeuIB9cYU][BqHSjf];
            }
            if (0 < wsQU2K) {
                LeuIB9cYU = 0;
                while (LeuIB9cYU < amhOHtUMCKW) {
                    vezJZhHUuQ[LeuIB9cYU][BqHSjf] = vezJZhHUuQ[LeuIB9cYU][BqHSjf] - wsQU2K;
                    LeuIB9cYU = LeuIB9cYU +1;
                };
            };
        }
        EyKt1M3cG = vezJZhHUuQ[1][1];
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
            BqHSjf = 0;
            while (BqHSjf < amhOHtUMCKW) {
                for (LeuIB9cYU = 1; amhOHtUMCKW - 1 > LeuIB9cYU; LeuIB9cYU++)
                    vezJZhHUuQ[BqHSjf][LeuIB9cYU] = vezJZhHUuQ[BqHSjf][LeuIB9cYU +1];
                BqHSjf++;
            };
        }
        {
            BqHSjf = 0;
            while (BqHSjf < amhOHtUMCKW - 1) {
                for (LeuIB9cYU = 1; LeuIB9cYU < amhOHtUMCKW - 1; LeuIB9cYU++)
                    vezJZhHUuQ[LeuIB9cYU][BqHSjf] = vezJZhHUuQ[LeuIB9cYU +1][BqHSjf];
                BqHSjf++;
            };
        }
        return f (vezJZhHUuQ, --amhOHtUMCKW) + EyKt1M3cG;
    };
}

