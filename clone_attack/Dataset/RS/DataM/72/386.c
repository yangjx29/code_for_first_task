void  main () {
    int EQ9pkMH0w;
    int PYPUkcAT0W;
    int GM0vrTz [22] [22];
    int IO15j0u;
    int u7G1Ncb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &IO15j0u, &u7G1Ncb);
    for (PYPUkcAT0W = (710 - 710); u7G1Ncb + (108 - 106) > PYPUkcAT0W; PYPUkcAT0W = PYPUkcAT0W +1) {
        GM0vrTz[0][PYPUkcAT0W] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        GM0vrTz[IO15j0u +1][PYPUkcAT0W] = 0;
    }
    for (EQ9pkMH0w = 1; IO15j0u +2 > EQ9pkMH0w; EQ9pkMH0w = EQ9pkMH0w +1) {
        GM0vrTz[EQ9pkMH0w][0] = 0;
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
        GM0vrTz[EQ9pkMH0w][u7G1Ncb + 1] = 0;
    }
    for (EQ9pkMH0w = 1; IO15j0u +1 > EQ9pkMH0w; EQ9pkMH0w = EQ9pkMH0w +1)
        for (PYPUkcAT0W = 1; u7G1Ncb + 1 > PYPUkcAT0W; PYPUkcAT0W = PYPUkcAT0W +1)
            scanf ("%d", &GM0vrTz[EQ9pkMH0w][PYPUkcAT0W]);
    for (EQ9pkMH0w = 1; IO15j0u +1 > EQ9pkMH0w; EQ9pkMH0w = EQ9pkMH0w +1)
        for (PYPUkcAT0W = 1; u7G1Ncb + 1 > PYPUkcAT0W; PYPUkcAT0W++) {
            if (GM0vrTz[EQ9pkMH0w][PYPUkcAT0W -1] <= GM0vrTz[EQ9pkMH0w][PYPUkcAT0W] && GM0vrTz[EQ9pkMH0w][PYPUkcAT0W +1] <= GM0vrTz[EQ9pkMH0w][PYPUkcAT0W] && GM0vrTz[EQ9pkMH0w][PYPUkcAT0W] >= GM0vrTz[EQ9pkMH0w -1][PYPUkcAT0W] && GM0vrTz[EQ9pkMH0w][PYPUkcAT0W] >= GM0vrTz[EQ9pkMH0w +1][PYPUkcAT0W])
                printf ("%d %d\n", EQ9pkMH0w -1, PYPUkcAT0W -1);
        };
}

