int main () {
    char sfzdQk2m4qB9 [(379 - 329)];
    int s, GpaVRSOi3, m2, hI0R3h2M1S, ZzFei0TpxnVl, OrGBRT, que, qwLgbcOXrN;
    float SIXDOky2Zt;
    float g [41];
    float LVjt4g [(310 - 269)];
    float G2EKz39TtLIj;
    GpaVRSOi3 = -(545 - 544);
    m2 = -(161 - 160);
    scanf ("%d", &hI0R3h2M1S);
    {
        ZzFei0TpxnVl = 278 - 278;
        for (; ZzFei0TpxnVl < hI0R3h2M1S;) {
            ZzFei0TpxnVl = ZzFei0TpxnVl +1;
            scanf ("%s%f", sfzdQk2m4qB9, &SIXDOky2Zt);
            if (!('m' != sfzdQk2m4qB9[(179 - 179)])) {
                GpaVRSOi3 = GpaVRSOi3 +(652 - 651);
                LVjt4g[GpaVRSOi3] = SIXDOky2Zt;
            }
            else {
                m2 = m2 + 1;
                g[m2] = SIXDOky2Zt;
            }
        }
    }
    for (ZzFei0TpxnVl = (31 - 31); ZzFei0TpxnVl < GpaVRSOi3; ZzFei0TpxnVl = ZzFei0TpxnVl +1) {
        qwLgbcOXrN = ZzFei0TpxnVl;
        {
            OrGBRT = 127 - 126;
            while (OrGBRT <= GpaVRSOi3) {
                if (LVjt4g[OrGBRT] < LVjt4g[qwLgbcOXrN])
                    qwLgbcOXrN = OrGBRT;
                OrGBRT = OrGBRT +1;
            }
        }
        if (qwLgbcOXrN != ZzFei0TpxnVl) {
            G2EKz39TtLIj = LVjt4g[ZzFei0TpxnVl];
            LVjt4g[ZzFei0TpxnVl] = LVjt4g[qwLgbcOXrN];
            LVjt4g[qwLgbcOXrN] = G2EKz39TtLIj;
        }
    }
    printf ("%.2f", LVjt4g[(853 - 853)]);
    for (ZzFei0TpxnVl = (259 - 259); ZzFei0TpxnVl < m2; ZzFei0TpxnVl = ZzFei0TpxnVl +1) {
        qwLgbcOXrN = ZzFei0TpxnVl;
        {
            OrGBRT = ZzFei0TpxnVl +1;
            for (; m2 >= OrGBRT;) {
                if (g[qwLgbcOXrN] < g[OrGBRT])
                    qwLgbcOXrN = OrGBRT;
                OrGBRT = OrGBRT +1;
            }
        }
        if (qwLgbcOXrN != ZzFei0TpxnVl) {
            G2EKz39TtLIj = g[ZzFei0TpxnVl];
            g[ZzFei0TpxnVl] = g[qwLgbcOXrN];
            g[qwLgbcOXrN] = G2EKz39TtLIj;
        }
    }
    {
        ZzFei0TpxnVl = 1;
        for (; ZzFei0TpxnVl <= GpaVRSOi3;) {
            printf (" %.2f", LVjt4g[ZzFei0TpxnVl]);
            ZzFei0TpxnVl = ZzFei0TpxnVl +1;
        }
    }
    {
        ZzFei0TpxnVl = 0;
        for (; ZzFei0TpxnVl <= m2;) {
            printf (" %.2f", g[ZzFei0TpxnVl]);
            ZzFei0TpxnVl = ZzFei0TpxnVl +1;
        }
    }
    return 0;
}

