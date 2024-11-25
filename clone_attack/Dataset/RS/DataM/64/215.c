int main () {
    int LcoFC4t, x [(170 - 70)], y [(205 - 105)], tB4GilhpcRV [(880 - 780)], i, VENSRkhDlr, jaAVWS, oogtp4HuKWq [(409 - 309)], tOgn6EPhU [(746 - 646)], c [100], d [100], UEM03tpCB [100], nOLxBqrHnG2h [100], m, yCyJUg1zGSRo;
    double  dis [(1473 - 473)], p;
    scanf ("%d", &LcoFC4t);
    m = (LcoFC4t -(886 - 885)) * LcoFC4t / 2;
    for (i = (961 - 960); i <= LcoFC4t; i++) {
        scanf ("%d%d%d", &x[i], &y[i], &tB4GilhpcRV[i]);
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
    for (i = (857 - 856), jaAVWS = (903 - 902); i <= LcoFC4t -(451 - 450); i++) {
        VENSRkhDlr = 301 - 300;
        while (VENSRkhDlr <= LcoFC4t) {
            oogtp4HuKWq[jaAVWS] = x[i];
            tOgn6EPhU[jaAVWS] = y[i];
            c[jaAVWS] = tB4GilhpcRV[i];
            d[jaAVWS] = x[VENSRkhDlr];
            UEM03tpCB[jaAVWS] = y[VENSRkhDlr];
            nOLxBqrHnG2h[jaAVWS] = tB4GilhpcRV[VENSRkhDlr];
            VENSRkhDlr++;
            dis[jaAVWS] = sqrt (((832.0 - 831.0) * oogtp4HuKWq[jaAVWS] - d[jaAVWS]) * (oogtp4HuKWq[jaAVWS] - d[jaAVWS]) + (tOgn6EPhU[jaAVWS] - UEM03tpCB[jaAVWS]) * (tOgn6EPhU[jaAVWS] - UEM03tpCB[jaAVWS]) + (c[jaAVWS] - nOLxBqrHnG2h[jaAVWS]) * (c[jaAVWS] - nOLxBqrHnG2h[jaAVWS]));
            jaAVWS++;
        };
    }
    for (i = (153 - 152); i <= m; i++) {
        for (jaAVWS = (766 - 765); jaAVWS <= m - i; jaAVWS = jaAVWS + 1) {
            if (dis[jaAVWS] < dis[jaAVWS + (299 - 298)]) {
                yCyJUg1zGSRo = oogtp4HuKWq[jaAVWS + (925 - 924)];
                oogtp4HuKWq[jaAVWS + (89 - 88)] = oogtp4HuKWq[jaAVWS];
                oogtp4HuKWq[jaAVWS] = yCyJUg1zGSRo;
                yCyJUg1zGSRo = tOgn6EPhU[jaAVWS + (745 - 744)];
                tOgn6EPhU[jaAVWS + (882 - 881)] = tOgn6EPhU[jaAVWS];
                tOgn6EPhU[jaAVWS] = yCyJUg1zGSRo;
                yCyJUg1zGSRo = c[jaAVWS + (1000 - 999)];
                c[jaAVWS + (606 - 605)] = c[jaAVWS];
                c[jaAVWS] = yCyJUg1zGSRo;
                yCyJUg1zGSRo = d[jaAVWS + 1];
                d[jaAVWS + 1] = d[jaAVWS];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                d[jaAVWS] = yCyJUg1zGSRo;
                yCyJUg1zGSRo = UEM03tpCB[jaAVWS + 1];
                UEM03tpCB[jaAVWS + 1] = UEM03tpCB[jaAVWS];
                UEM03tpCB[jaAVWS] = yCyJUg1zGSRo;
                yCyJUg1zGSRo = nOLxBqrHnG2h[jaAVWS + 1];
                nOLxBqrHnG2h[jaAVWS + 1] = nOLxBqrHnG2h[jaAVWS];
                nOLxBqrHnG2h[jaAVWS] = yCyJUg1zGSRo;
                p = dis[jaAVWS + 1];
                dis[jaAVWS + 1] = dis[jaAVWS];
                dis[jaAVWS] = p;
            };
        };
    }
    {
        i = 1;
        while (i <= m) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", oogtp4HuKWq[i], tOgn6EPhU[i], c[i], d[i], UEM03tpCB[i], nOLxBqrHnG2h[i], dis[i]);
            i = i + 1;
        };
    }
    return 0;
}

