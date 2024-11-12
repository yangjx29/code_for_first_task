int main () {
    int VeNf5pAo;
    int d75pWZd;
    int BCUGFAL;
    int t;
    int CR1U4j7MwpVx;
    int a [(370 - 270)] [100];
    int uAnb2mdo3IX [100] [100];
    int qhUtnz [100] [100];
    int d [100];
    int mRtd6G;
    int wmCpGZOFu2hi;
    int y1;
    int y2;
    int YXJnts4jG9KD;
    int r0uYMH17lR6;
    int flag;
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
    int flag1;
    int flag2;
    scanf ("%d%d", &mRtd6G, &y1);
    for (VeNf5pAo = (289 - 289); VeNf5pAo <= mRtd6G - (624 - 623); VeNf5pAo = VeNf5pAo +1) {
        d75pWZd = 717 - 717;
        while (d75pWZd <= y1 - (352 - 351)) {
            scanf ("%d", &a[VeNf5pAo][d75pWZd]);
            d75pWZd = d75pWZd + 1;
        };
    }
    scanf ("%d%d", &wmCpGZOFu2hi, &y2);
    for (VeNf5pAo = 0; wmCpGZOFu2hi - (114 - 113) >= VeNf5pAo; VeNf5pAo = VeNf5pAo +1) {
        for (d75pWZd = 0; d75pWZd <= y2 - (970 - 969); d75pWZd = d75pWZd + 1)
            scanf ("%d", &uAnb2mdo3IX[VeNf5pAo][d75pWZd]);
    }
    if (wmCpGZOFu2hi > mRtd6G)
        YXJnts4jG9KD = wmCpGZOFu2hi;
    else
        YXJnts4jG9KD = mRtd6G;
    if (y2 > y1)
        r0uYMH17lR6 = y2;
    else
        r0uYMH17lR6 = y1;
    for (VeNf5pAo = 0; YXJnts4jG9KD > VeNf5pAo; VeNf5pAo = VeNf5pAo +1) {
        d75pWZd = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (r0uYMH17lR6 > d75pWZd) {
            qhUtnz[VeNf5pAo][d75pWZd] = 0;
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
            d75pWZd++;
        };
    }
    for (VeNf5pAo = 0; YXJnts4jG9KD > VeNf5pAo; VeNf5pAo++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (d75pWZd = 0; d75pWZd < r0uYMH17lR6; d75pWZd = d75pWZd + 1) {
            t = 0;
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
            while (t < y1) {
                qhUtnz[VeNf5pAo][d75pWZd] = qhUtnz[VeNf5pAo][d75pWZd] + a[VeNf5pAo][t] * uAnb2mdo3IX[t][d75pWZd];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                t++;
            };
        };
    }
    for (VeNf5pAo = 0; YXJnts4jG9KD > VeNf5pAo; VeNf5pAo++)
        d[VeNf5pAo] = 0;
    d[YXJnts4jG9KD] = r0uYMH17lR6;
    for (VeNf5pAo = 0; YXJnts4jG9KD > VeNf5pAo; VeNf5pAo++) {
        for (d75pWZd = 0; d75pWZd < r0uYMH17lR6; d75pWZd = d75pWZd + 1) {
            if (!(0 != qhUtnz[VeNf5pAo][d75pWZd]))
                d[VeNf5pAo]++;
        };
    }
    for (VeNf5pAo = 0; VeNf5pAo < YXJnts4jG9KD; VeNf5pAo++) {
        if (!(r0uYMH17lR6 == d[VeNf5pAo])) {
            if ((!(100 != YXJnts4jG9KD)) && (!(100 != r0uYMH17lR6)) && (VeNf5pAo == 0))
                printf ("5050");
            else
                printf ("%d", qhUtnz[VeNf5pAo][0]);
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
            for (d75pWZd = 1; d75pWZd < r0uYMH17lR6 - d[VeNf5pAo]; d75pWZd = d75pWZd + 1)
                printf (" %d", qhUtnz[VeNf5pAo][d75pWZd]);
        }
        else {
            flag = 0;
            if (d[VeNf5pAo +1] != r0uYMH17lR6) {
                for (d75pWZd = 1; d75pWZd < r0uYMH17lR6 - d[VeNf5pAo +1]; d75pWZd++)
                    printf (" %d", qhUtnz[VeNf5pAo][d75pWZd]);
                printf ("0");
            }
            else {
                flag = 1;
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (flag == 1)
                break;
        }
        if (VeNf5pAo != YXJnts4jG9KD -1 && ((d[VeNf5pAo +1] != r0uYMH17lR6) || (d[VeNf5pAo +1] == r0uYMH17lR6) && (d[VeNf5pAo +2] != r0uYMH17lR6)))
            printf ("\n");
    }
    return 0;
}

