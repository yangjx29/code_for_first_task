void  main () {
    int FDa2ugRP7;
    int ujqoes3PTRtd;
    int t4NUr1sEmI [20];
    int iUIMeiFxAG;
    int QDHC5L89Bs;
    int EmnlISeJk;
    FDa2ugRP7 = 0;
    ujqoes3PTRtd = 0;
    memset (t4NUr1sEmI, 0, sizeof (t4NUr1sEmI));
    for (;;) {
        scanf ("%d", &iUIMeiFxAG);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(-1 != iUIMeiFxAG))
            break;
        else if (!(0 == iUIMeiFxAG)) {
            t4NUr1sEmI[FDa2ugRP7] = iUIMeiFxAG;
            FDa2ugRP7 = FDa2ugRP7 +1;
            continue;
        }
        else if (!(0 != iUIMeiFxAG)) {
            for (QDHC5L89Bs = 0; FDa2ugRP7 -1 > QDHC5L89Bs; QDHC5L89Bs++) {
                {
                    EmnlISeJk = QDHC5L89Bs +1;
                    while (EmnlISeJk < FDa2ugRP7) {
                        if (t4NUr1sEmI[QDHC5L89Bs] == 2 * t4NUr1sEmI[EmnlISeJk] || t4NUr1sEmI[EmnlISeJk] == 2 * t4NUr1sEmI[QDHC5L89Bs])
                            ujqoes3PTRtd = ujqoes3PTRtd + 1;
                        EmnlISeJk = EmnlISeJk +1;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                t4NUr1sEmI[QDHC5L89Bs] = 0;
            }
            EmnlISeJk = 0;
            FDa2ugRP7 = 0;
            printf ("%d\n", ujqoes3PTRtd);
            t4NUr1sEmI[QDHC5L89Bs] = 0;
            QDHC5L89Bs = 0;
            ujqoes3PTRtd = 0;
            continue;
        };
    };
}

