int YQZ2DtbUBeT [(1719 - 719)] = {(40 - 40)}, ZB9S0deWnwX [1000] = {(304 - 304)};

void  main () {
    int PGLj9W7Kvtl;
    int j625Vt;
    int tjpI6s;
    int Rvbroeagw;
    int phgye8r;
    int XQrkl1Yj4Tdm;
    int WTRXgwQ;
    PGLj9W7Kvtl = (903 - 903);
    j625Vt = 0;
    char I1JzeHmyd;
    j625Vt = 0;
    tjpI6s = PGLj9W7Kvtl +(29 - 28);
    for (; (I1JzeHmyd = getchar ()) != '\n';) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (I1JzeHmyd == ',') {
            PGLj9W7Kvtl = PGLj9W7Kvtl +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else if (I1JzeHmyd != ',') {
            YQZ2DtbUBeT[PGLj9W7Kvtl] = 10 * YQZ2DtbUBeT[PGLj9W7Kvtl] + I1JzeHmyd -'0';
        };
    }
    PGLj9W7Kvtl = 0;
    for (; (I1JzeHmyd = getchar ()) != '\n';) {
        if (I1JzeHmyd == ',') {
            PGLj9W7Kvtl = PGLj9W7Kvtl +1;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (I1JzeHmyd != ',') {
                ZB9S0deWnwX[PGLj9W7Kvtl] = 10 * ZB9S0deWnwX[PGLj9W7Kvtl] + I1JzeHmyd -'0';
            };
        };
    }
    phgye8r = ZB9S0deWnwX[0];
    XQrkl1Yj4Tdm = YQZ2DtbUBeT[0];
    {
        PGLj9W7Kvtl = 0;
        while (PGLj9W7Kvtl < tjpI6s) {
            if (YQZ2DtbUBeT[PGLj9W7Kvtl] < XQrkl1Yj4Tdm)
                XQrkl1Yj4Tdm = YQZ2DtbUBeT[PGLj9W7Kvtl];
            if (ZB9S0deWnwX[PGLj9W7Kvtl] > phgye8r)
                phgye8r = ZB9S0deWnwX[PGLj9W7Kvtl];
            PGLj9W7Kvtl = PGLj9W7Kvtl +1;
        };
    }
    {
        PGLj9W7Kvtl = XQrkl1Yj4Tdm;
        while (PGLj9W7Kvtl < phgye8r) {
            Rvbroeagw = 0;
            {
                WTRXgwQ = 0;
                while (WTRXgwQ < tjpI6s) {
                    if (YQZ2DtbUBeT[WTRXgwQ] <= PGLj9W7Kvtl &&ZB9S0deWnwX[WTRXgwQ] > PGLj9W7Kvtl)
                        Rvbroeagw = Rvbroeagw +1;
                    WTRXgwQ = WTRXgwQ +1;
                };
            }
            PGLj9W7Kvtl = PGLj9W7Kvtl +1;
            if (Rvbroeagw > j625Vt)
                j625Vt = Rvbroeagw;
        };
    }
    printf ("%d %d", tjpI6s, j625Vt);
}

