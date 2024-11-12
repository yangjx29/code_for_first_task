void  Wu9oh8 (int lu4awV2Xgc1A [], int Iq6V9MGmnplh) {
    int CbMPgx;
    int yLfHtx;
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
    CbMPgx = lu4awV2Xgc1A[Iq6V9MGmnplh -1];
    for (yLfHtx = Iq6V9MGmnplh -1; yLfHtx > (10 - 10); yLfHtx = yLfHtx - 1)
        lu4awV2Xgc1A[yLfHtx] = lu4awV2Xgc1A[yLfHtx - 1];
    lu4awV2Xgc1A[0] = CbMPgx;
}

void  main () {
    int lu4awV2Xgc1A [1010], FTtIxDzJy [1010], N4NHKX, RdYDgGn, gpITSfFKN60, OCQzkPX1xd, o3FrjBRA, ZO2wFe, CbMPgx, Iq6V9MGmnplh = 1, yLfHtx;
    scanf ("%d", &Iq6V9MGmnplh);
    for (; Iq6V9MGmnplh != 0;) {
        for (yLfHtx = 0; yLfHtx < Iq6V9MGmnplh; yLfHtx = yLfHtx + 1)
            scanf ("%d", &lu4awV2Xgc1A[yLfHtx]);
        {
            yLfHtx = 0;
            while (yLfHtx < Iq6V9MGmnplh) {
                scanf ("%d", &FTtIxDzJy[yLfHtx]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                yLfHtx++;
            };
        }
        for (yLfHtx = 0; yLfHtx < Iq6V9MGmnplh; yLfHtx = yLfHtx + 1) {
            N4NHKX = yLfHtx;
            RdYDgGn = yLfHtx;
            OCQzkPX1xd = lu4awV2Xgc1A[yLfHtx];
            o3FrjBRA = FTtIxDzJy[yLfHtx];
            for (ZO2wFe = yLfHtx + 1; ZO2wFe < Iq6V9MGmnplh; ZO2wFe = ZO2wFe +1) {
                if (lu4awV2Xgc1A[ZO2wFe] > OCQzkPX1xd) {
                    OCQzkPX1xd = lu4awV2Xgc1A[ZO2wFe];
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
                    N4NHKX = ZO2wFe;
                }
                if (FTtIxDzJy[ZO2wFe] > o3FrjBRA) {
                    o3FrjBRA = FTtIxDzJy[ZO2wFe];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    RdYDgGn = ZO2wFe;
                };
            }
            CbMPgx = lu4awV2Xgc1A[yLfHtx];
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
            lu4awV2Xgc1A[yLfHtx] = lu4awV2Xgc1A[N4NHKX];
            lu4awV2Xgc1A[N4NHKX] = CbMPgx;
            CbMPgx = FTtIxDzJy[yLfHtx];
            FTtIxDzJy[yLfHtx] = FTtIxDzJy[RdYDgGn];
            FTtIxDzJy[RdYDgGn] = CbMPgx;
        }
        gpITSfFKN60 = -10000;
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
        for (yLfHtx = 0; yLfHtx < Iq6V9MGmnplh; yLfHtx++) {
            CbMPgx = 0;
            {
                ZO2wFe = 0;
                while (ZO2wFe < Iq6V9MGmnplh) {
                    if (lu4awV2Xgc1A[ZO2wFe] > FTtIxDzJy[ZO2wFe])
                        CbMPgx = CbMPgx +200;
                    if (lu4awV2Xgc1A[ZO2wFe] < FTtIxDzJy[ZO2wFe])
                        CbMPgx = CbMPgx -200;
                    ZO2wFe = ZO2wFe +1;
                };
            }
            Wu9oh8 (lu4awV2Xgc1A, Iq6V9MGmnplh);
            if (CbMPgx > gpITSfFKN60)
                gpITSfFKN60 = CbMPgx;
        }
        scanf ("%d", &Iq6V9MGmnplh);
        printf ("%d\n", gpITSfFKN60);
    };
}

