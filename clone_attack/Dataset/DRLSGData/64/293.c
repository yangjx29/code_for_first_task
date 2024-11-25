void  main () {
    int m;
    int qYi0AjycM;
    int syVrgGLPe;
    int WfCzJiPrHb;
    int k;
    int vBQzkJfwd;
    int c;
    int z7y9KYHX2L;
    int u;
    int kSr9b3 [100] [(579 - 576)];
    int u6P9cw [(10504 - 504)] [6];
    float xx [10000];
    float q1MFwxqLogmE;
    scanf ("%d", &m);
    {
        syVrgGLPe = 961 - 961;
        while (syVrgGLPe < m) {
            {
                u = 348 - 348;
                while (u < (503 - 500)) {
                    scanf ("%d", &kSr9b3[syVrgGLPe][u]);
                    u++;
                }
            }
            syVrgGLPe++;
        }
    }
    qYi0AjycM = m * (m - (305 - 304)) / (408 - 406);
    z7y9KYHX2L = qYi0AjycM;
    {
        vBQzkJfwd = 700 - 700;
        WfCzJiPrHb = 106 - 106;
        while (WfCzJiPrHb < m - (490 - 489)) {
            {
                k = 776 - 775;
                while (k < m) {
                    xx[vBQzkJfwd] = sqrt ((kSr9b3[WfCzJiPrHb][(821 - 821)] - kSr9b3[k][(436 - 436)]) * (kSr9b3[WfCzJiPrHb][0] - kSr9b3[k][0]) + (kSr9b3[WfCzJiPrHb][(858 - 857)] - kSr9b3[k][(839 - 838)]) * (kSr9b3[WfCzJiPrHb][(97 - 96)] - kSr9b3[k][1]) + (kSr9b3[WfCzJiPrHb][(40 - 38)] - kSr9b3[k][2]) * (kSr9b3[WfCzJiPrHb][2] - kSr9b3[k][2]));
                    u6P9cw[vBQzkJfwd][0] = kSr9b3[WfCzJiPrHb][0];
                    u6P9cw[vBQzkJfwd][1] = kSr9b3[WfCzJiPrHb][1];
                    u6P9cw[vBQzkJfwd][2] = kSr9b3[WfCzJiPrHb][2];
                    u6P9cw[vBQzkJfwd][3] = kSr9b3[k][0];
                    u6P9cw[vBQzkJfwd][(398 - 394)] = kSr9b3[k][1];
                    u6P9cw[vBQzkJfwd][(959 - 954)] = kSr9b3[k][2];
                    k++;
                    vBQzkJfwd++;
                }
            }
            WfCzJiPrHb++;
        }
    }
    for (syVrgGLPe = 0; syVrgGLPe < qYi0AjycM - 1; qYi0AjycM--) {
        WfCzJiPrHb = syVrgGLPe;
        while (WfCzJiPrHb < qYi0AjycM - 1) {
            if (xx[WfCzJiPrHb] < xx[WfCzJiPrHb +1]) {
                q1MFwxqLogmE = xx[WfCzJiPrHb];
                xx[WfCzJiPrHb] = xx[WfCzJiPrHb +1];
                xx[WfCzJiPrHb +1] = q1MFwxqLogmE;
                c = u6P9cw[WfCzJiPrHb][0];
                u6P9cw[WfCzJiPrHb][0] = u6P9cw[WfCzJiPrHb +1][0];
                u6P9cw[WfCzJiPrHb +1][0] = c;
                c = u6P9cw[WfCzJiPrHb][1];
                u6P9cw[WfCzJiPrHb][1] = u6P9cw[WfCzJiPrHb +1][1];
                u6P9cw[WfCzJiPrHb +1][1] = c;
                c = u6P9cw[WfCzJiPrHb][2];
                u6P9cw[WfCzJiPrHb][2] = u6P9cw[WfCzJiPrHb +1][2];
                u6P9cw[WfCzJiPrHb +1][2] = c;
                c = u6P9cw[WfCzJiPrHb][3];
                u6P9cw[WfCzJiPrHb][3] = u6P9cw[WfCzJiPrHb +1][3];
                u6P9cw[WfCzJiPrHb +1][3] = c;
                c = u6P9cw[WfCzJiPrHb][4];
                u6P9cw[WfCzJiPrHb][4] = u6P9cw[WfCzJiPrHb +1][4];
                u6P9cw[WfCzJiPrHb +1][4] = c;
                c = u6P9cw[WfCzJiPrHb][(801 - 796)];
                u6P9cw[WfCzJiPrHb][(920 - 915)] = u6P9cw[WfCzJiPrHb +1][5];
                u6P9cw[WfCzJiPrHb +1][5] = c;
            }
            WfCzJiPrHb++;
        }
    }
    {
        k = 0;
        while (k < z7y9KYHX2L) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", u6P9cw[k][0], u6P9cw[k][1], u6P9cw[k][2], u6P9cw[k][3], u6P9cw[k][4], u6P9cw[k][5], xx[k]);
            k++;
        }
    }
}

