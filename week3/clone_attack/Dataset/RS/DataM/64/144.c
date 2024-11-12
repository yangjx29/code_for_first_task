int main () {
    double  NyBDxE7 [10000], yDutzRo;
    int YRtb4Mn [(10835 - 835)] [4], C5ZGL4 [10000], IL86HnsC1 [10000];
    int XGyCiR;
    int w;
    int YF9ryex;
    int n;
    int m;
    int KGyZfg9;
    int tZehKalE;
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
    YF9ryex = (952 - 952);
    scanf ("%d", &n);
    m = n * (n - (281 - 280)) / (137 - 135);
    for (KGyZfg9 = (288 - 288); n > KGyZfg9; KGyZfg9 = KGyZfg9 +1) {
        scanf ("%d", &YRtb4Mn[KGyZfg9][0]);
        scanf ("%d", &YRtb4Mn[KGyZfg9][(594 - 593)]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &YRtb4Mn[KGyZfg9][2]);
    }
    {
        KGyZfg9 = 0;
        while (n - (145 - 144) > KGyZfg9) {
            for (tZehKalE = KGyZfg9 +(169 - 168); n > tZehKalE; tZehKalE = tZehKalE + 1) {
                NyBDxE7[YF9ryex] = sqrt ((YRtb4Mn[KGyZfg9][0] - YRtb4Mn[tZehKalE][0]) * (YRtb4Mn[KGyZfg9][0] - YRtb4Mn[tZehKalE][0]) + (YRtb4Mn[KGyZfg9][(335 - 334)] - YRtb4Mn[tZehKalE][(583 - 582)]) * (YRtb4Mn[KGyZfg9][1] - YRtb4Mn[tZehKalE][1]) + (YRtb4Mn[KGyZfg9][2] - YRtb4Mn[tZehKalE][2]) * (YRtb4Mn[KGyZfg9][2] - YRtb4Mn[tZehKalE][2]));
                C5ZGL4[YF9ryex] = KGyZfg9;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                IL86HnsC1[YF9ryex] = tZehKalE;
                YF9ryex = YF9ryex +1;
            }
            KGyZfg9 = KGyZfg9 +1;
        };
    }
    for (tZehKalE = 1; m > tZehKalE; tZehKalE = tZehKalE + 1) {
        for (KGyZfg9 = 0; m - tZehKalE > KGyZfg9; KGyZfg9++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (NyBDxE7[KGyZfg9] < NyBDxE7[KGyZfg9 +1]) {
                yDutzRo = NyBDxE7[KGyZfg9];
                NyBDxE7[KGyZfg9] = NyBDxE7[KGyZfg9 +1];
                XGyCiR = C5ZGL4[KGyZfg9];
                C5ZGL4[KGyZfg9] = C5ZGL4[KGyZfg9 +1];
                w = IL86HnsC1[KGyZfg9];
                IL86HnsC1[KGyZfg9] = IL86HnsC1[KGyZfg9 +1];
                IL86HnsC1[KGyZfg9 +1] = w;
                C5ZGL4[KGyZfg9 +1] = XGyCiR;
                NyBDxE7[KGyZfg9 +1] = yDutzRo;
            };
        };
    }
    {
        KGyZfg9 = 0;
        while (KGyZfg9 < m) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", YRtb4Mn[C5ZGL4[KGyZfg9]][0], YRtb4Mn[C5ZGL4[KGyZfg9]][1], YRtb4Mn[C5ZGL4[KGyZfg9]][2], YRtb4Mn[IL86HnsC1[KGyZfg9]][0], YRtb4Mn[IL86HnsC1[KGyZfg9]][1], YRtb4Mn[IL86HnsC1[KGyZfg9]][2], NyBDxE7[KGyZfg9]);
            KGyZfg9 = KGyZfg9 +1;
        };
    }
    return 0;
}

