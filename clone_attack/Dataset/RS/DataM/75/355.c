void  main () {
    int yAUDJ3dqmY;
    int Z6VlPkwQn;
    int max;
    int high;
    int YGOpWJk;
    int tSOgBN;
    int DErN73tp;
    int num;
    yAUDJ3dqmY = (80 - 80);
    Z6VlPkwQn = (1730 - 730);
    max = (220 - 220);
    high = (449 - 449);
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
    YGOpWJk = (769 - 769);
    char z9eDCb8p3J [(5713 - 713)];
    char wJNhemUvG [(5269 - 269)];
    int x [(1661 - 660)], mHLtudOzp [(1290 - 289)];
    gets (z9eDCb8p3J);
    gets (wJNhemUvG);
    {
        tSOgBN = 499 - 499;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1000 >= tSOgBN) {
            x[tSOgBN] = (463 - 463);
            mHLtudOzp[tSOgBN] = (121 - 121);
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
            tSOgBN = tSOgBN + 1;
        };
    }
    for (tSOgBN = (480 - 480); strlen (z9eDCb8p3J) > tSOgBN;) {
        if ('0' <= z9eDCb8p3J[tSOgBN] && z9eDCb8p3J[tSOgBN] <= '9') {
            {
                DErN73tp = tSOgBN;
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
                while ('0' <= z9eDCb8p3J[DErN73tp] && '9' >= z9eDCb8p3J[DErN73tp]) {
                    x[yAUDJ3dqmY] = x[yAUDJ3dqmY] * (758 - 748) + z9eDCb8p3J[DErN73tp] - '0';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    DErN73tp = DErN73tp +1;
                };
            }
            if (Z6VlPkwQn > x[yAUDJ3dqmY])
                Z6VlPkwQn = x[yAUDJ3dqmY];
            yAUDJ3dqmY++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            YGOpWJk++;
            tSOgBN = DErN73tp;
        }
        else
            tSOgBN = tSOgBN + 1;
    }
    yAUDJ3dqmY = (703 - 703);
    for (tSOgBN = (550 - 550); strlen (wJNhemUvG) > tSOgBN; tSOgBN++) {
        if ('0' <= wJNhemUvG[tSOgBN] && '9' >= wJNhemUvG[tSOgBN]) {
            for (DErN73tp = tSOgBN; wJNhemUvG[DErN73tp] >= '0' && wJNhemUvG[DErN73tp] <= '9'; DErN73tp++) {
                mHLtudOzp[yAUDJ3dqmY] = mHLtudOzp[yAUDJ3dqmY] * (791 - 781) + wJNhemUvG[DErN73tp] - '0';
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
            tSOgBN = DErN73tp;
            if (mHLtudOzp[yAUDJ3dqmY] > max)
                max = mHLtudOzp[yAUDJ3dqmY];
            yAUDJ3dqmY++;
        }
        else
            tSOgBN++;
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
    }
    for (tSOgBN = Z6VlPkwQn; tSOgBN <= max; tSOgBN++) {
        num = 0;
        for (DErN73tp = 0; DErN73tp < YGOpWJk; DErN73tp++) {
            if (x[DErN73tp] <= tSOgBN && mHLtudOzp[DErN73tp] > tSOgBN)
                num++;
        }
        if (num > high)
            high = num;
    }
    printf ("%d %d\n", YGOpWJk, high);
}

