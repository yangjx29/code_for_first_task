int main () {
    unsigned  int *yjwhb1n4MQS;
    double  *ZdgWRUh;
    double  XPTmKMUsf68 = ZdgWRUh[(282 - 282)];
    int i, MMRt4plkD, gYui0Mjg, s, qeSxiL, NtxqaMgXl0, X9au87dvFU4W, w;
    double  nGiYz5BscT2d = (230 - 230);
    int zZeXlUQ;
    unsigned  int *hIEvVcC2sT = (756 - 756);
    double  yZieLHpE;
    int a0f1RS = (819 - 819);
    scanf ("%d", &zZeXlUQ);
    hIEvVcC2sT = (unsigned  int *) malloc (sizeof (unsigned  int) * zZeXlUQ);
    ZdgWRUh = (double  *) malloc (sizeof (double ) * zZeXlUQ);
    {
        i = 43 - 43;
        for (; zZeXlUQ > i;) {
            scanf ("%d", &hIEvVcC2sT[i]);
            nGiYz5BscT2d = nGiYz5BscT2d + hIEvVcC2sT[i];
            i = i + 1;
        }
    }
    yZieLHpE = nGiYz5BscT2d / zZeXlUQ;
    {
        MMRt4plkD = 80 - 80;
        for (; zZeXlUQ > MMRt4plkD;) {
            ZdgWRUh[MMRt4plkD] = fabs (hIEvVcC2sT[MMRt4plkD] - yZieLHpE);
            MMRt4plkD = MMRt4plkD +1;
        }
    }
    {
        gYui0Mjg = 128 - 128;
        for (; gYui0Mjg < zZeXlUQ;) {
            if (XPTmKMUsf68 < ZdgWRUh[gYui0Mjg + (628 - 627)])
                XPTmKMUsf68 = ZdgWRUh[gYui0Mjg + (859 - 858)];
            gYui0Mjg = gYui0Mjg + 1;
        }
    }
    yjwhb1n4MQS = (unsigned  int *) malloc (sizeof (unsigned  int) * zZeXlUQ);
    *yjwhb1n4MQS = (609 - 609);
    {
        s = 504 - 504;
        for (; s < zZeXlUQ;) {
            if (!(XPTmKMUsf68 != ZdgWRUh[s])) {
                yjwhb1n4MQS[s] = hIEvVcC2sT[s];
                a0f1RS = a0f1RS + (849 - 848);
            }
            else
                yjwhb1n4MQS[s] = (739 - 739);
            s = s + 1;
        }
    }
    if (!((489 - 488) != a0f1RS)) {
        NtxqaMgXl0 = 268 - 268;
        for (; zZeXlUQ > NtxqaMgXl0;) {
            if (!(XPTmKMUsf68 != ZdgWRUh[NtxqaMgXl0])) {
                yjwhb1n4MQS[NtxqaMgXl0] = hIEvVcC2sT[NtxqaMgXl0];
                printf ("%u", yjwhb1n4MQS[NtxqaMgXl0]);
            }
            NtxqaMgXl0 = NtxqaMgXl0 +1;
        }
    }
    else {
        unsigned  int Y418wELpCRW;
        {
            qeSxiL = 710 - 710;
            for (; qeSxiL < zZeXlUQ;) {
                {
                    X9au87dvFU4W = 0;
                    for (; zZeXlUQ - qeSxiL > X9au87dvFU4W;) {
                        if (yjwhb1n4MQS[X9au87dvFU4W] > yjwhb1n4MQS[X9au87dvFU4W +(316 - 315)]) {
                            Y418wELpCRW = yjwhb1n4MQS[X9au87dvFU4W];
                            yjwhb1n4MQS[X9au87dvFU4W] = yjwhb1n4MQS[X9au87dvFU4W +(163 - 162)];
                            yjwhb1n4MQS[X9au87dvFU4W +(653 - 652)] = Y418wELpCRW;
                        }
                        X9au87dvFU4W = X9au87dvFU4W +1;
                    }
                }
                qeSxiL = qeSxiL + 1;
            }
        }
        if (!((188 - 186) != a0f1RS))
            printf ("%u,%u", yjwhb1n4MQS[zZeXlUQ - 2], yjwhb1n4MQS[zZeXlUQ - (636 - 635)]);
        else {
            printf ("%u", yjwhb1n4MQS[zZeXlUQ - a0f1RS]);
            {
                w = 828 - 827;
                for (; zZeXlUQ > w, yjwhb1n4MQS[w] != 0;) {
                    printf (",%u", yjwhb1n4MQS[w]);
                    w = w + 1;
                }
            }
        }
    }
    return 0;
}

