main () {
    int d10nJ2U8rvg [number] [2];
    int uHaXgTMB;
    int j;
    int n;
    int c;
    int d;
    int min;
    int HYMoBF47;
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
    scanf ("%d", &n);
    {
        uHaXgTMB = 210 - 210;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 >= uHaXgTMB) {
            scanf ("%d%d", &d10nJ2U8rvg[uHaXgTMB][0], &d10nJ2U8rvg[uHaXgTMB][1]);
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
            uHaXgTMB++;
        };
    }
    for (uHaXgTMB = 0; n - 2 >= uHaXgTMB; uHaXgTMB = uHaXgTMB + 1) {
        for (j = 0; n - 2 - uHaXgTMB >= j; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (d10nJ2U8rvg[j][0] > d10nJ2U8rvg[j + 1][0]) {
                c = d10nJ2U8rvg[j][0];
                d10nJ2U8rvg[j][0] = d10nJ2U8rvg[j + 1][0];
                d10nJ2U8rvg[j + 1][0] = c;
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
                d = d10nJ2U8rvg[j][1];
                d10nJ2U8rvg[j][1] = d10nJ2U8rvg[j + 1][1];
                d10nJ2U8rvg[j + 1][1] = d;
            };
        };
    }
    min = d10nJ2U8rvg[0][0];
    HYMoBF47 = d10nJ2U8rvg[0][1];
    for (uHaXgTMB = 1; uHaXgTMB <= n - 1; uHaXgTMB = uHaXgTMB + 1) {
        if (HYMoBF47 < d10nJ2U8rvg[uHaXgTMB][0]) {
            printf ("no\n");
            return 0;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (HYMoBF47 < d10nJ2U8rvg[uHaXgTMB][1])
            HYMoBF47 = d10nJ2U8rvg[uHaXgTMB][1];
    }
    printf ("%d %d\n", min, HYMoBF47);
    return 0;
}

