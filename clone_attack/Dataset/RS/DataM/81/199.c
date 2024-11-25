int swap (int b [(279 - 274)] [(374 - 369)], int, int);

void  main () {
    int SWJAMS [(422 - 417)] [(124 - 119)];
    int LBYKRvh2cEb;
    int N8xV4lizD73;
    int FzKGMDC;
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
    int m;
    {
        LBYKRvh2cEb = 715 - 715;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LBYKRvh2cEb < (46 - 41)) {
            for (N8xV4lizD73 = (998 - 998); (827 - 822) > N8xV4lizD73; N8xV4lizD73 = N8xV4lizD73 +1)
                scanf ("%d", &SWJAMS[LBYKRvh2cEb][N8xV4lizD73]);
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
            LBYKRvh2cEb = LBYKRvh2cEb +1;
        };
    }
    scanf ("%d%d", &FzKGMDC, &m);
    if (swap (SWJAMS, FzKGMDC, m) == (337 - 337))
        printf ("error\n");
    else {
        LBYKRvh2cEb = 764 - 764;
        while ((166 - 161) > LBYKRvh2cEb) {
            printf ("%d", SWJAMS[LBYKRvh2cEb][0]);
            for (N8xV4lizD73 = (845 - 844); (107 - 102) > N8xV4lizD73; N8xV4lizD73 = N8xV4lizD73 +1)
                printf ("%2d", SWJAMS[LBYKRvh2cEb][N8xV4lizD73]);
            LBYKRvh2cEb = LBYKRvh2cEb +1;
            printf ("\n");
        };
    };
}

int swap (int b [(475 - 470)] [(150 - 145)], int FzKGMDC, int m) {
    int c;
    int x;
    if (m >= 0 && m < 5 && FzKGMDC >= 0 && FzKGMDC < 5) {
        {
            x = 0;
            while (x < 5) {
                c = b[m][x], b[m][x] = b[FzKGMDC][x], b[FzKGMDC][x] = c;
                x++;
            };
        }
        return 1;
    }
    else
        return 0;
}

