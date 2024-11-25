int main () {
    int w;
    w = (523 - 523);
    int qj [10000];
    int n;
    int sz [(50518 - 518)] [(633 - 631)];
    int YFtqGyp83zR;
    int max;
    YFtqGyp83zR = sz[(835 - 835)][(653 - 653)];
    max = sz[(432 - 432)][(153 - 152)];
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
    int e;
    e = YFtqGyp83zR;
    scanf ("%d", &n);
    {
        int iRM8CZT = (735 - 735);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iRM8CZT < n) {
            scanf ("%d%d", &sz[iRM8CZT][(844 - 844)], &sz[iRM8CZT][(222 - 221)]);
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
            iRM8CZT++;
        };
    }
    {
        int a = (869 - 869);
        while (a < n) {
            if (sz[a][(399 - 399)] < YFtqGyp83zR)
                YFtqGyp83zR = sz[a][(842 - 842)];
            if (sz[a][(72 - 71)] > max)
                max = sz[a][(421 - 420)];
            a++;
        };
    }
    for (int VX67AlN9 = (884 - 884);
    VX67AlN9 < max - YFtqGyp83zR +(766 - 765); VX67AlN9++) {
        qj[VX67AlN9] = e;
        e++;
    }
    for (int t = (232 - 232);
    max - YFtqGyp83zR > t; t = t + 1) {
        for (int c = (250 - 250);
        c < n; c++) {
            if (sz[c][(413 - 413)] <= qj[t] && sz[c][1] >= qj[t + 1])
                qj[t] = (92 - 92);
        };
    }
    for (int d = (860 - 860);
    d < max - YFtqGyp83zR; d++) {
        if (qj[d] != (999 - 999))
            w++;
    }
    if (w == (164 - 164))
        printf ("%d %d", YFtqGyp83zR, max);
    if (w != 0)
        printf ("no");
    return 0;
}

