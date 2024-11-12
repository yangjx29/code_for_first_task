int main () {
    int mpwFE9CjX4;
    int w;
    int KhQ6mSY;
    int a [100] [100];
    int sD2HKXlL3pZy;
    int l28JrXYtbjRg;
    int ynCUqPBNgsyh;
    int ZWBhlVZ4IRQ;
    int c3Ek1AIHb;
    int x;
    int htn7iyumx [100] [100];
    int zJhoXzZTB [100] [100];
    int grCsWwfv5;
    int pbrhaqHyKe;
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
    int wOFNHopb;
    mpwFE9CjX4 = 0;
    w = 0;
    double  b [100];
    double  krq6KnylR;
    scanf ("%d", &KhQ6mSY);
    for (sD2HKXlL3pZy = 0; sD2HKXlL3pZy < KhQ6mSY; sD2HKXlL3pZy = sD2HKXlL3pZy + 1) {
        l28JrXYtbjRg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (3 > l28JrXYtbjRg) {
            scanf ("%d", &a[sD2HKXlL3pZy][l28JrXYtbjRg]);
            l28JrXYtbjRg++;
        };
    }
    for (ZWBhlVZ4IRQ = 1; ZWBhlVZ4IRQ <= KhQ6mSY; ZWBhlVZ4IRQ = ZWBhlVZ4IRQ +1) {
        for (ynCUqPBNgsyh = ZWBhlVZ4IRQ -1; ynCUqPBNgsyh < KhQ6mSY -1; ynCUqPBNgsyh++) {
            for (l28JrXYtbjRg = 0; 3 > l28JrXYtbjRg; l28JrXYtbjRg++) {
                x = a[ZWBhlVZ4IRQ -1][l28JrXYtbjRg] - a[ynCUqPBNgsyh + 1][l28JrXYtbjRg];
                mpwFE9CjX4 = mpwFE9CjX4 + x * x;
                htn7iyumx[w][l28JrXYtbjRg] = a[ZWBhlVZ4IRQ -1][l28JrXYtbjRg];
                zJhoXzZTB[w][l28JrXYtbjRg] = a[ynCUqPBNgsyh + 1][l28JrXYtbjRg];
            }
            b[w] = sqrt (mpwFE9CjX4);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            w = w + 1;
            mpwFE9CjX4 = 0;
        };
    }
    wOFNHopb = KhQ6mSY *(KhQ6mSY -1) / 2;
    {
        c3Ek1AIHb = 1;
        while (c3Ek1AIHb <= wOFNHopb) {
            for (ynCUqPBNgsyh = 0; wOFNHopb - c3Ek1AIHb > ynCUqPBNgsyh; ynCUqPBNgsyh++) {
                if (b[ynCUqPBNgsyh] < b[ynCUqPBNgsyh + 1]) {
                    for (l28JrXYtbjRg = 0; l28JrXYtbjRg < 3; l28JrXYtbjRg++) {
                        krq6KnylR = b[ynCUqPBNgsyh];
                        grCsWwfv5 = htn7iyumx[ynCUqPBNgsyh][l28JrXYtbjRg];
                        pbrhaqHyKe = zJhoXzZTB[ynCUqPBNgsyh][l28JrXYtbjRg];
                        b[ynCUqPBNgsyh] = b[ynCUqPBNgsyh + 1];
                        htn7iyumx[ynCUqPBNgsyh][l28JrXYtbjRg] = htn7iyumx[ynCUqPBNgsyh + 1][l28JrXYtbjRg];
                        zJhoXzZTB[ynCUqPBNgsyh][l28JrXYtbjRg] = zJhoXzZTB[ynCUqPBNgsyh + 1][l28JrXYtbjRg];
                        b[ynCUqPBNgsyh + 1] = krq6KnylR;
                        htn7iyumx[ynCUqPBNgsyh + 1][l28JrXYtbjRg] = grCsWwfv5;
                        zJhoXzZTB[ynCUqPBNgsyh + 1][l28JrXYtbjRg] = pbrhaqHyKe;
                    };
                };
            }
            c3Ek1AIHb = c3Ek1AIHb + 1;
        };
    }
    for (ynCUqPBNgsyh = 0; ynCUqPBNgsyh < wOFNHopb; ynCUqPBNgsyh++) {
        printf ("%d,%d,%d", htn7iyumx[ynCUqPBNgsyh][0], htn7iyumx[ynCUqPBNgsyh][1], htn7iyumx[ynCUqPBNgsyh][2]);
        printf ("%d,%d,%d", zJhoXzZTB[ynCUqPBNgsyh][0], zJhoXzZTB[ynCUqPBNgsyh][1], zJhoXzZTB[ynCUqPBNgsyh][2]);
        printf ("%.2lf\n", b[ynCUqPBNgsyh]);
        printf ("(");
    }
    return 0;
}

