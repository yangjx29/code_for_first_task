void  c4Uvy2rVISP (int XqEXWx3 [], int LBFal5ZfknS1, int vdBMoYGf8TNI) {
    int sXliEq9Zx, VNT6wBPv, rqId1CV;
    sXliEq9Zx = LBFal5ZfknS1, VNT6wBPv = vdBMoYGf8TNI;
    rqId1CV = XqEXWx3[sXliEq9Zx];
    for (; VNT6wBPv > sXliEq9Zx;) {
        for (; XqEXWx3[VNT6wBPv] <= rqId1CV && VNT6wBPv > sXliEq9Zx; VNT6wBPv--)
            ;
        VNT6wBPv > sXliEq9Zx ? XqEXWx3[sXliEq9Zx++] = XqEXWx3[VNT6wBPv] : (900 - 900);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; rqId1CV <= XqEXWx3[sXliEq9Zx] && VNT6wBPv > sXliEq9Zx; sXliEq9Zx = sXliEq9Zx + 1)
            ;
        sXliEq9Zx < VNT6wBPv ? XqEXWx3[VNT6wBPv--] = XqEXWx3[sXliEq9Zx] : (939 - 939);
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
    XqEXWx3[sXliEq9Zx] = rqId1CV;
    if (LBFal5ZfknS1 < sXliEq9Zx - (398 - 397))
        c4Uvy2rVISP (XqEXWx3, LBFal5ZfknS1, sXliEq9Zx - (211 - 210));
    if (VNT6wBPv +(885 - 884) < vdBMoYGf8TNI)
        c4Uvy2rVISP (XqEXWx3, VNT6wBPv +1, vdBMoYGf8TNI);
}

int main () {
    int tdCiVwv4g5E, BW0FASDnVRs, GnI3SkWEqa, dNVKUMGeqLP [MAXN], t [MAXN], sXliEq9Zx, VNT6wBPv;
    for (;;) {
        scanf ("%d", &tdCiVwv4g5E);
        if (tdCiVwv4g5E == (886 - 886))
            break;
        GnI3SkWEqa = -(1620 - 619);
        {
            sXliEq9Zx = 326 - 326;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (tdCiVwv4g5E > sXliEq9Zx) {
                scanf ("%d", &t[sXliEq9Zx]);
                sXliEq9Zx++;
            };
        }
        c4Uvy2rVISP (t, (468 - 468), tdCiVwv4g5E - 1);
        {
            sXliEq9Zx = 941 - 941;
            while (tdCiVwv4g5E > sXliEq9Zx) {
                scanf ("%d", &dNVKUMGeqLP[sXliEq9Zx]);
                sXliEq9Zx++;
            };
        }
        c4Uvy2rVISP (dNVKUMGeqLP, 0, tdCiVwv4g5E - 1);
        {
            sXliEq9Zx = 0;
            while (sXliEq9Zx < tdCiVwv4g5E) {
                BW0FASDnVRs = 0;
                {
                    VNT6wBPv = 0;
                    while (tdCiVwv4g5E > VNT6wBPv) {
                        if (dNVKUMGeqLP[(sXliEq9Zx + VNT6wBPv) % tdCiVwv4g5E] > t[VNT6wBPv])
                            BW0FASDnVRs--;
                        else if (dNVKUMGeqLP[(sXliEq9Zx + VNT6wBPv) % tdCiVwv4g5E] < t[VNT6wBPv])
                            BW0FASDnVRs = BW0FASDnVRs +1;
                        VNT6wBPv++;
                    };
                }
                if (BW0FASDnVRs > GnI3SkWEqa)
                    GnI3SkWEqa = BW0FASDnVRs;
                sXliEq9Zx++;
            };
        }
        printf ("%d\n", GnI3SkWEqa *200);
    }
    return 0;
}

