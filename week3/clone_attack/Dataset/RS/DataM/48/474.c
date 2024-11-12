int main () {
    int BwmHZ8, tSVNUKlFs, k;
    int WXdbmFk8x [(144 - 133)] [11] [5];
    int m;
    int n;
    {
        BwmHZ8 = 0;
        while (11 > BwmHZ8) {
            for (tSVNUKlFs = 0; tSVNUKlFs < 11; tSVNUKlFs = tSVNUKlFs + 1) {
                WXdbmFk8x[BwmHZ8][tSVNUKlFs][0] = 0;
            }
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
            BwmHZ8 = BwmHZ8 +1;
        };
    }
    scanf ("%d%d", &m, &n);
    WXdbmFk8x[5][5][0] = m;
    {
        k = 884 - 883;
        while (k <= n) {
            for (BwmHZ8 = 0; BwmHZ8 <= 10; BwmHZ8 = BwmHZ8 +1) {
                tSVNUKlFs = 0;
                while (10 >= tSVNUKlFs) {
                    if (BwmHZ8 > 0 && 10 > BwmHZ8 &&tSVNUKlFs > 0 && tSVNUKlFs < 10) {
                        WXdbmFk8x[BwmHZ8][tSVNUKlFs][k] = 2 * WXdbmFk8x[BwmHZ8][tSVNUKlFs][k - (45 - 44)] + WXdbmFk8x[BwmHZ8 -1][tSVNUKlFs - 1][k - 1] + WXdbmFk8x[BwmHZ8 -1][tSVNUKlFs][k - 1] + WXdbmFk8x[BwmHZ8 -1][tSVNUKlFs + 1][k - 1] + WXdbmFk8x[BwmHZ8][tSVNUKlFs - 1][k - 1] + WXdbmFk8x[BwmHZ8][tSVNUKlFs + 1][k - 1] + WXdbmFk8x[BwmHZ8 +1][tSVNUKlFs - 1][k - 1] + WXdbmFk8x[BwmHZ8 +1][tSVNUKlFs][k - 1] + WXdbmFk8x[BwmHZ8 +1][tSVNUKlFs + 1][k - 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    else {
                        WXdbmFk8x[BwmHZ8][tSVNUKlFs][k] = WXdbmFk8x[BwmHZ8][tSVNUKlFs][k - 1];
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
                        };
                    }
                    tSVNUKlFs = tSVNUKlFs + 1;
                };
            }
            k++;
        };
    }
    {
        BwmHZ8 = 1;
        while (BwmHZ8 <= (108 - 99)) {
            for (tSVNUKlFs = 1; tSVNUKlFs <= 9; tSVNUKlFs = tSVNUKlFs + 1) {
                if (tSVNUKlFs < 9) {
                    printf ("%d ", WXdbmFk8x[BwmHZ8][tSVNUKlFs][n]);
                }
                if (tSVNUKlFs == 9) {
                    printf ("%d\n", WXdbmFk8x[BwmHZ8][tSVNUKlFs][n]);
                };
            }
            BwmHZ8 = BwmHZ8 +1;
        };
    }
    return 0;
}

