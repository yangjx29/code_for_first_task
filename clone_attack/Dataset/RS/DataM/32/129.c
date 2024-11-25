void  func2 (char ugtv14dr [], int x) {
    for (int e4P3fY2ChG = (395 - 395);
    x > e4P3fY2ChG; e4P3fY2ChG = e4P3fY2ChG + 1)
        ugtv14dr[e4P3fY2ChG] = (18 - 18);
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

main () {
    int i, j, k, m, GP1gRZHTC, g = 0, t, v, LeQgTMF;
    int Az4GVWdT [100] = {0};
    char MlIior3CtQ4z [(120 - 20)] = {0};
    char b [(987 - 887)] = {0};
    char d [100] = {0};
    char QIhm7Ds [100] [100] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    char *zCSVcpFd3bR;
    char *p2;
    scanf ("%d\n", &v);
    for (k = 0; k < v; k = k + 1) {
        scanf ("%s\n", MlIior3CtQ4z);
        zCSVcpFd3bR = MlIior3CtQ4z;
        m = strlen (MlIior3CtQ4z);
        scanf ("%s", b);
        p2 = b;
        GP1gRZHTC = strlen (b);
        for (i = 0; m - GP1gRZHTC > i; i = i + 1)
            d[i] = '0';
        p2 = strcat (d, b);
        {
            j = m - 1;
            while (j >= 0) {
                Az4GVWdT[j] = zCSVcpFd3bR[j] - p2[j] + g;
                if (Az4GVWdT[j] < 0) {
                    g = -1;
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
                    Az4GVWdT[j] = Az4GVWdT[j] + (693 - 683);
                }
                else
                    g = 0;
                t = m - j;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                QIhm7Ds[k][j] = Az4GVWdT[j] + '0';
                j--;
            };
        }
        {
            int Xm6Pjb = 0;
            while (Xm6Pjb < m) {
                if (QIhm7Ds[k][Xm6Pjb] == '0')
                    QIhm7Ds[k][Xm6Pjb] = 0;
                else
                    break;
                Xm6Pjb = Xm6Pjb +1;
            };
        }
        func2 (MlIior3CtQ4z, m);
        func2 (b, m);
        func2 (d, m);
    }
    {
        LeQgTMF = 0;
        while (LeQgTMF < v) {
            printf ("%s\n", QIhm7Ds[LeQgTMF]);
            LeQgTMF++;
        };
    };
}

