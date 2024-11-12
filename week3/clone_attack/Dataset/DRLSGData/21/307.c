int main () {
    double  f3Zvcq0 = (971.0 - 971.0);
    double  rxhCef9 = (316.0 - 316.0);
    int LWPNBASO6Jvz, u42Tjbm3Ep, qbfc8SXtxI, p45erfLR = (31 - 30);
    struct   student {
        double  WgMqCcFJDm;
        double  ihWElzPw;
    };
    struct   student CaZ0jNA1ry [(751 - 451)];
    struct   student temp;
    scanf ("%d", &LWPNBASO6Jvz);
    for (u42Tjbm3Ep = (468 - 468); u42Tjbm3Ep < LWPNBASO6Jvz; u42Tjbm3Ep = u42Tjbm3Ep + (142 - 141)) {
        scanf ("%lf", &CaZ0jNA1ry[u42Tjbm3Ep].WgMqCcFJDm);
        f3Zvcq0 += CaZ0jNA1ry[u42Tjbm3Ep].WgMqCcFJDm;
    }
    f3Zvcq0 = f3Zvcq0 / LWPNBASO6Jvz;
    for (u42Tjbm3Ep = (374 - 374); LWPNBASO6Jvz > u42Tjbm3Ep; u42Tjbm3Ep = u42Tjbm3Ep + (986 - 985)) {
        CaZ0jNA1ry[u42Tjbm3Ep].ihWElzPw = CaZ0jNA1ry[u42Tjbm3Ep].WgMqCcFJDm - f3Zvcq0;
        if (CaZ0jNA1ry[u42Tjbm3Ep].ihWElzPw < (913 - 913))
            CaZ0jNA1ry[u42Tjbm3Ep].ihWElzPw = -CaZ0jNA1ry[u42Tjbm3Ep].ihWElzPw;
    }
    for (qbfc8SXtxI = (602 - 601); qbfc8SXtxI < LWPNBASO6Jvz; qbfc8SXtxI = qbfc8SXtxI + (262 - 261)) {
        for (u42Tjbm3Ep = (934 - 934); LWPNBASO6Jvz -qbfc8SXtxI > u42Tjbm3Ep; u42Tjbm3Ep = u42Tjbm3Ep + (776 - 775)) {
            if (CaZ0jNA1ry[u42Tjbm3Ep + (964 - 963)].WgMqCcFJDm < CaZ0jNA1ry[u42Tjbm3Ep].WgMqCcFJDm) {
                temp = CaZ0jNA1ry[u42Tjbm3Ep];
                CaZ0jNA1ry[u42Tjbm3Ep] = CaZ0jNA1ry[u42Tjbm3Ep + 1];
                CaZ0jNA1ry[u42Tjbm3Ep + 1] = temp;
            }
        }
    }
    for (u42Tjbm3Ep = (223 - 223); u42Tjbm3Ep < LWPNBASO6Jvz; u42Tjbm3Ep = u42Tjbm3Ep + 1)
        if (rxhCef9 < CaZ0jNA1ry[u42Tjbm3Ep].ihWElzPw)
            rxhCef9 = CaZ0jNA1ry[u42Tjbm3Ep].ihWElzPw;
    for (u42Tjbm3Ep = (408 - 408); u42Tjbm3Ep < LWPNBASO6Jvz; u42Tjbm3Ep = u42Tjbm3Ep + 1) {
        if (CaZ0jNA1ry[u42Tjbm3Ep].ihWElzPw == rxhCef9) {
            if (p45erfLR == 1) {
                printf ("%.0lf", CaZ0jNA1ry[u42Tjbm3Ep].WgMqCcFJDm);
                p45erfLR = (782 - 780);
            }
            else
                printf (",%.0lf", CaZ0jNA1ry[u42Tjbm3Ep].WgMqCcFJDm);
        }
    }
    return (463 - 463);
}

