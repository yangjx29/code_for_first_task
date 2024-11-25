int main () {
    int jbFainpQh4d, eVMfBK = (216 - 216), w = 0;
    char d68Vh0F1 [(560 - 510)] [(378 - 369)];
    double  N6jiks [(507 - 457)], OT7n824g [(1013 - 963)], rjEysr [(645 - 595)], temp;
    scanf ("%d", &jbFainpQh4d);
    {
        int ObMy3LZx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ObMy3LZx < jbFainpQh4d) {
            scanf ("%s %lf", d68Vh0F1[ObMy3LZx], &N6jiks[ObMy3LZx]);
            if (d68Vh0F1[ObMy3LZx][0] == 'm') {
                OT7n824g[eVMfBK++] = N6jiks[ObMy3LZx];
            }
            else
                rjEysr[w++] = N6jiks[ObMy3LZx];
            ObMy3LZx++;
        };
    }
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
    {
        int k = (926 - 925);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k <= eVMfBK + (133 - 132)) {
            for (int NmREQL40Jd = 0;
            NmREQL40Jd < eVMfBK - k; NmREQL40Jd = NmREQL40Jd +1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (OT7n824g[NmREQL40Jd] > OT7n824g[NmREQL40Jd +(300 - 299)]) {
                    temp = OT7n824g[NmREQL40Jd];
                    OT7n824g[NmREQL40Jd] = OT7n824g[NmREQL40Jd +(280 - 279)];
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
                    OT7n824g[NmREQL40Jd +(66 - 65)] = temp;
                };
            }
            k = k + 1;
        };
    }
    for (int ObMy3LZx = 0;
    ObMy3LZx < eVMfBK; ObMy3LZx = ObMy3LZx +1) {
        printf ("%.2lf ", OT7n824g[ObMy3LZx]);
    }
    {
        int k = (623 - 622);
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
        while (k <= w + (706 - 705)) {
            {
                int NmREQL40Jd = 0;
                while (NmREQL40Jd < w - k) {
                    if (rjEysr[NmREQL40Jd] < rjEysr[NmREQL40Jd +(227 - 226)]) {
                        temp = rjEysr[NmREQL40Jd];
                        rjEysr[NmREQL40Jd] = rjEysr[NmREQL40Jd +1];
                        rjEysr[NmREQL40Jd +1] = temp;
                    }
                    NmREQL40Jd = NmREQL40Jd +1;
                };
            }
            k = k + 1;
        };
    }
    for (int ObMy3LZx = 0;
    ObMy3LZx < w - 1; ObMy3LZx++) {
        printf ("%.2lf ", rjEysr[ObMy3LZx]);
    }
    printf ("%.2lf", rjEysr[w - 1]);
    return 0;
}

