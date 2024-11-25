int main () {
    int JKkrgXm [6] [6];
    int rG53CycAx1 [6];
    int LLqsH3 [6];
    int mVqHb9l5 [6];
    int yjCLQxNT, b4bv6SJlYknm, dZRFEKOfY6A;
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
    int zryKGBb = 1;
    {
        yjCLQxNT = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 >= yjCLQxNT) {
            {
                b4bv6SJlYknm = 1;
                while (5 >= b4bv6SJlYknm) {
                    scanf ("%d", &JKkrgXm[yjCLQxNT][b4bv6SJlYknm]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    b4bv6SJlYknm = b4bv6SJlYknm + 1;
                };
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
            yjCLQxNT++;
        };
    }
    {
        yjCLQxNT = 1;
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
        while (yjCLQxNT <= 5) {
            rG53CycAx1[yjCLQxNT] = 0;
            LLqsH3[yjCLQxNT] = 0;
            mVqHb9l5[yjCLQxNT] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                b4bv6SJlYknm = 1;
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
                while (5 >= b4bv6SJlYknm) {
                    if (rG53CycAx1[yjCLQxNT] < JKkrgXm[yjCLQxNT][b4bv6SJlYknm]) {
                        rG53CycAx1[yjCLQxNT] = JKkrgXm[yjCLQxNT][b4bv6SJlYknm];
                        LLqsH3[yjCLQxNT] = yjCLQxNT;
                        mVqHb9l5[yjCLQxNT] = b4bv6SJlYknm;
                    }
                    b4bv6SJlYknm++;
                };
            }
            yjCLQxNT++;
        };
    }
    for (yjCLQxNT = 1; yjCLQxNT <= 5; yjCLQxNT++) {
        dZRFEKOfY6A = 0;
        {
            b4bv6SJlYknm = 1;
            while (b4bv6SJlYknm <= 5) {
                if (JKkrgXm[b4bv6SJlYknm][mVqHb9l5[yjCLQxNT]] < rG53CycAx1[yjCLQxNT]) {
                    dZRFEKOfY6A = 1;
                }
                b4bv6SJlYknm++;
            };
        }
        if (dZRFEKOfY6A == 0)
            printf ("%d %d %d", LLqsH3[yjCLQxNT], mVqHb9l5[yjCLQxNT], rG53CycAx1[yjCLQxNT]);
        zryKGBb = zryKGBb * dZRFEKOfY6A;
    }
    if (zryKGBb == 1)
        printf ("not found");
    return 0;
}

