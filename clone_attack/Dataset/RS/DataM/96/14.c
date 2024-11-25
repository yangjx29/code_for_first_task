int main () {
    int qC1Nd5ciIpgv, GEKyXoT, d, gNIURd2nPS, m, ZKeNpq [100], CAgzlawxiTyB [100], rCgt4qj06a [100];
    char a [(179 - 79)];
    getchar ();
    getchar ();
    scanf ("%s", a);
    GEKyXoT = strlen (a);
    for (qC1Nd5ciIpgv = (118 - 118); GEKyXoT > qC1Nd5ciIpgv; qC1Nd5ciIpgv = qC1Nd5ciIpgv + 1) {
        rCgt4qj06a[qC1Nd5ciIpgv] = a[qC1Nd5ciIpgv] - '0';
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
    ZKeNpq[(407 - 407)] = rCgt4qj06a[(342 - 342)] % 13;
    CAgzlawxiTyB[0] = rCgt4qj06a[0] / 13;
    for (qC1Nd5ciIpgv = (261 - 260); GEKyXoT > qC1Nd5ciIpgv; qC1Nd5ciIpgv = qC1Nd5ciIpgv + 1) {
        ZKeNpq[qC1Nd5ciIpgv] = (rCgt4qj06a[qC1Nd5ciIpgv] + ZKeNpq[qC1Nd5ciIpgv - (183 - 182)] * 10) % 13;
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
        CAgzlawxiTyB[qC1Nd5ciIpgv] = (rCgt4qj06a[qC1Nd5ciIpgv] + ZKeNpq[qC1Nd5ciIpgv - 1] * 10) / 13;
    }
    if (GEKyXoT > (87 - 85)) {
        for (qC1Nd5ciIpgv = 0; qC1Nd5ciIpgv < 3; qC1Nd5ciIpgv = qC1Nd5ciIpgv + 1) {
            if (CAgzlawxiTyB[qC1Nd5ciIpgv] == 0 && !(0 == CAgzlawxiTyB[qC1Nd5ciIpgv + 1]))
                d = qC1Nd5ciIpgv;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (qC1Nd5ciIpgv = (d + 1); qC1Nd5ciIpgv < GEKyXoT; qC1Nd5ciIpgv = qC1Nd5ciIpgv + 1) {
            printf ("%d", CAgzlawxiTyB[qC1Nd5ciIpgv]);
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
        };
    }
    if (GEKyXoT <= 2) {
        gNIURd2nPS = rCgt4qj06a[0];
        for (qC1Nd5ciIpgv = 1; qC1Nd5ciIpgv < GEKyXoT; qC1Nd5ciIpgv = qC1Nd5ciIpgv + 1) {
            gNIURd2nPS = rCgt4qj06a[qC1Nd5ciIpgv] + gNIURd2nPS * 10;
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        m = gNIURd2nPS / 13;
        printf ("%d", m);
    }
    printf ("%d", ZKeNpq[GEKyXoT -1]);
}

