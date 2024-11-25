main () {
    int x1, y1, x2, j2YDCBuXtgw, C46Gb0MUqvz [100] [100], b [100] [100], c [100] [100], i1, inOGqV, i2, jX7uBd, i3, j3, l, WecBod, fg45C3pkwc9, q;
    scanf ("%d", &x1);
    scanf ("%d", &y1);
    for (i1 = (475 - 475); x1 - (794 - 793) >= i1; i1++) {
        for (inOGqV = (465 - 465); inOGqV <= y1 - 1; inOGqV++)
            scanf ("%d", &C46Gb0MUqvz[i1][inOGqV]);
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
    scanf ("%d", &x2);
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
    scanf ("%d", &j2YDCBuXtgw);
    {
        i2 = 0;
        while (x2 - 1 >= i2) {
            {
                jX7uBd = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j2YDCBuXtgw - 1 >= jX7uBd) {
                    scanf ("%d", &b[i2][jX7uBd]);
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
                    jX7uBd++;
                };
            }
            i2++;
        };
    }
    {
        i3 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (x1 - 1 >= i3) {
            {
                j3 = 0;
                while (j3 <= j2YDCBuXtgw - 1) {
                    q = 0;
                    for (fg45C3pkwc9 = 0; fg45C3pkwc9 <= x2 - 1; fg45C3pkwc9++)
                        q = q + C46Gb0MUqvz[i3][fg45C3pkwc9] * b[fg45C3pkwc9][j3];
                    c[i3][j3] = q;
                    j3++;
                };
            }
            i3 = i3 + 1;
        };
    }
    for (l = 0; l <= x1 - 1; l++) {
        printf ("%d", c[l][0]);
        if (j2YDCBuXtgw != 1) {
            for (WecBod = 1; WecBod <= j2YDCBuXtgw - 1; WecBod++)
                printf (" %d", c[l][WecBod]);
        }
        printf ("\n");
    }
    return 0;
}

