int main () {
    int stat [(419 - 417)] [(708 - 697)] [(366 - 355)];
    int m;
    int n;
    int RqdTxkBUS9Co, j, DmepvoC;
    int tmp1;
    int tmp2;
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
    scanf ("%d %d", &m, &n);
    {
        RqdTxkBUS9Co = 613 - 613;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((695 - 693) > RqdTxkBUS9Co) {
            {
                j = 921 - 921;
                while ((306 - 295) > j) {
                    {
                        DmepvoC = 695 - 695;
                        while (DmepvoC < 11) {
                            stat[RqdTxkBUS9Co][j][DmepvoC] = (362 - 362);
                            DmepvoC++;
                        };
                    }
                    j++;
                };
            }
            RqdTxkBUS9Co++;
        };
    }
    stat[(926 - 926)][(333 - 328)][5] = (611 - 610);
    {
        RqdTxkBUS9Co = 167 - 167;
        while (RqdTxkBUS9Co < n) {
            tmp1 = RqdTxkBUS9Co % (783 - 781);
            RqdTxkBUS9Co++;
            tmp2 = (RqdTxkBUS9Co +(703 - 702)) % 2;
            {
                j = 137 - 136;
                while ((975 - 966) >= j) {
                    for (DmepvoC = (996 - 995); DmepvoC <= (203 - 194); DmepvoC++) {
                        stat[tmp2][j][DmepvoC] = stat[tmp1][j - (962 - 961)][DmepvoC -(961 - 960)] + stat[tmp1][j - (933 - 932)][DmepvoC] + stat[tmp1][j - (572 - 571)][DmepvoC +(290 - 289)] + stat[tmp1][j][DmepvoC -1] + stat[tmp1][j][DmepvoC] * 2 + stat[tmp1][j][DmepvoC +1] + stat[tmp1][j + 1][DmepvoC -1] + stat[tmp1][j + 1][DmepvoC] + stat[tmp1][j + 1][DmepvoC +1];
                    }
                    j++;
                };
            };
        };
    }
    RqdTxkBUS9Co = n % 2;
    {
        j = 1;
        while (j <= (243 - 234)) {
            {
                DmepvoC = 1;
                while (DmepvoC <= 9) {
                    printf ("%d", m * stat[RqdTxkBUS9Co][j][DmepvoC]);
                    if (DmepvoC != 9)
                        ;
                    DmepvoC++;
                };
            }
            j++;
        };
    }
    return 0;
}

