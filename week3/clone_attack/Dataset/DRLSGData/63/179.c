main () {
    int yjN7ydPK [100] [100] = {0};
    int XjTC0BzrbqhS [100] [100] = {0};
    int moIQ3ehSftFZ [100] [100] = {0};
    int j67Ab4h;
    int C6PsgNqHIrxW;
    int Oz4bXsfev;
    int RgWJG8Vin;
    int iVm3lqrhuo;
    int dOaJsXHLG38;
    int P0Ss34L;
    int zL2xyqEodl;
    int tjhkfTvA;
    int ctcpWz8;
    int V4qDPztOn;
    int FSpAcv;
    scanf ("%d %d", &ctcpWz8, &V4qDPztOn);
    {
        RgWJG8Vin = 0;
        while (RgWJG8Vin < ctcpWz8) {
            {
                iVm3lqrhuo = 0;
                while (iVm3lqrhuo < V4qDPztOn) {
                    scanf ("%d", &yjN7ydPK[RgWJG8Vin][iVm3lqrhuo]);
                    iVm3lqrhuo = iVm3lqrhuo + 1;
                }
            }
            RgWJG8Vin = RgWJG8Vin +1;
        }
    }
    scanf ("%d %d", &V4qDPztOn, &FSpAcv);
    {
        dOaJsXHLG38 = 0;
        while (dOaJsXHLG38 < V4qDPztOn) {
            {
                P0Ss34L = 0;
                while (P0Ss34L < FSpAcv) {
                    scanf ("%d", &XjTC0BzrbqhS[dOaJsXHLG38][P0Ss34L]);
                    P0Ss34L = P0Ss34L +1;
                }
            }
            dOaJsXHLG38 = dOaJsXHLG38 + 1;
        }
    }
    for (j67Ab4h = 0; j67Ab4h < ctcpWz8; j67Ab4h = j67Ab4h + 1) {
        C6PsgNqHIrxW = 0;
        while (C6PsgNqHIrxW < FSpAcv) {
            {
                Oz4bXsfev = 0;
                while (Oz4bXsfev < V4qDPztOn) {
                    moIQ3ehSftFZ[j67Ab4h][C6PsgNqHIrxW] = moIQ3ehSftFZ[j67Ab4h][C6PsgNqHIrxW] + yjN7ydPK[j67Ab4h][Oz4bXsfev] * XjTC0BzrbqhS[Oz4bXsfev][C6PsgNqHIrxW];
                    Oz4bXsfev++;
                }
            }
            C6PsgNqHIrxW = C6PsgNqHIrxW +1;
        }
    }
    {
        zL2xyqEodl = 0;
        while (zL2xyqEodl < ctcpWz8) {
            {
                tjhkfTvA = 0;
                while (tjhkfTvA < FSpAcv -1) {
                    printf ("%d ", moIQ3ehSftFZ[zL2xyqEodl][tjhkfTvA]);
                    tjhkfTvA = tjhkfTvA + 1;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            if (tjhkfTvA == FSpAcv -1)
                printf ("%d\n", moIQ3ehSftFZ[zL2xyqEodl][tjhkfTvA]);
            zL2xyqEodl = zL2xyqEodl + 1;
        }
    }
}

