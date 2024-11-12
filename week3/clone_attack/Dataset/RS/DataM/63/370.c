void  main () {
    int SvoYE3bqfL [100] [100];
    int b [100] [100];
    int powOVREyHzSa [100] [100] = {(167 - 167)};
    int BldLDeyE;
    int TTBqv4HP;
    int hwJEhRy5Zi;
    int y2;
    int i;
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
    int ATYMxUgo;
    int u9ISzVr;
    scanf ("%d%d", &BldLDeyE, &TTBqv4HP);
    for (i = 0; i <= BldLDeyE -1; i++)
        for (ATYMxUgo = 0; ATYMxUgo <= TTBqv4HP -1; ATYMxUgo++)
            scanf ("%d", &SvoYE3bqfL[i][ATYMxUgo]);
    scanf ("%d%d", &hwJEhRy5Zi, &y2);
    for (i = 0; hwJEhRy5Zi - 1 >= i; i++) {
        ATYMxUgo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ATYMxUgo <= y2 - 1) {
            scanf ("%d", &b[i][ATYMxUgo]);
            ATYMxUgo = ATYMxUgo +1;
        };
    }
    for (i = 0; i <= BldLDeyE -1; i++) {
        ATYMxUgo = 0;
        while (ATYMxUgo <= y2 - 1) {
            for (u9ISzVr = 0; u9ISzVr <= hwJEhRy5Zi - 1; u9ISzVr++)
                powOVREyHzSa[i][ATYMxUgo] = powOVREyHzSa[i][ATYMxUgo] + SvoYE3bqfL[i][u9ISzVr] * b[u9ISzVr][ATYMxUgo];
            ATYMxUgo = ATYMxUgo +1;
        };
    }
    {
        i = 0;
        while (i <= BldLDeyE -1) {
            for (ATYMxUgo = 0; ATYMxUgo <= y2 - 2; ATYMxUgo++)
                printf ("%d ", powOVREyHzSa[i][ATYMxUgo]);
            printf ("%d", powOVREyHzSa[i][y2 - 1]);
            i = i + 1;
            putchar (10);
        };
    };
}

