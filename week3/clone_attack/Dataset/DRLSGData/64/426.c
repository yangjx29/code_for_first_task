int main () {
    int nRYm2p;
    int z [10];
    int b;
    double  Xsy6fKX;
    int r;
    int FBlMJ7tbT [10];
    int PnG1kIXi3h;
    int Oux6BZbQW;
    int h40KNP;
    int a1bm2D [10];
    double  Gco3WVbf [45] [3];
    {
        {
            if (0) {
                return 0;
            };
        }
        if (0) {
            return 0;
        };
    }
    scanf ("%d", &Oux6BZbQW);
    {
        int euRiw9 = 0;
        while (euRiw9 < Oux6BZbQW) {
            scanf ("%d%d%d", &a1bm2D[euRiw9], &FBlMJ7tbT[euRiw9], &z[euRiw9]);
            euRiw9 = euRiw9 + 1;
        };
    }
    r = 0;
    for (nRYm2p = 0; nRYm2p < Oux6BZbQW -1; nRYm2p = nRYm2p + 1) {
        PnG1kIXi3h = nRYm2p + 1;
        while (PnG1kIXi3h < Oux6BZbQW) {
            Gco3WVbf[r][0] = nRYm2p;
            Gco3WVbf[r][1] = PnG1kIXi3h;
            Gco3WVbf[r][2] = sqrt ((a1bm2D[nRYm2p] - a1bm2D[PnG1kIXi3h]) * (a1bm2D[nRYm2p] - a1bm2D[PnG1kIXi3h]) + (FBlMJ7tbT[nRYm2p] - FBlMJ7tbT[PnG1kIXi3h]) * (FBlMJ7tbT[nRYm2p] - FBlMJ7tbT[PnG1kIXi3h]) + (z[nRYm2p] - z[PnG1kIXi3h]) * (z[nRYm2p] - z[PnG1kIXi3h]));
            PnG1kIXi3h = PnG1kIXi3h +1;
            r = r + 1;
        };
    }
    {
        nRYm2p = 1;
        for (; nRYm2p <= r;) {
            {
                PnG1kIXi3h = 0;
                while (PnG1kIXi3h < r - nRYm2p) {
                    if (Gco3WVbf[PnG1kIXi3h][2] < Gco3WVbf[PnG1kIXi3h +1][2]) {
                        Xsy6fKX = Gco3WVbf[PnG1kIXi3h][2];
                        Gco3WVbf[PnG1kIXi3h][2] = Gco3WVbf[PnG1kIXi3h +1][2];
                        Gco3WVbf[PnG1kIXi3h +1][2] = Xsy6fKX;
                        Xsy6fKX = Gco3WVbf[PnG1kIXi3h][0];
                        Gco3WVbf[PnG1kIXi3h][0] = Gco3WVbf[PnG1kIXi3h +1][0];
                        Gco3WVbf[PnG1kIXi3h +1][0] = Xsy6fKX;
                        Xsy6fKX = Gco3WVbf[PnG1kIXi3h][1];
                        Gco3WVbf[PnG1kIXi3h][1] = Gco3WVbf[PnG1kIXi3h +1][1];
                        Gco3WVbf[PnG1kIXi3h +1][1] = Xsy6fKX;
                    }
                    PnG1kIXi3h = PnG1kIXi3h +1;
                };
            }
            nRYm2p = nRYm2p + 1;
        };
    }
    {
        nRYm2p = 0;
        while (nRYm2p < r) {
            int b;
            int h40KNP;
            h40KNP = Gco3WVbf[nRYm2p][0];
            b = Gco3WVbf[nRYm2p][1];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a1bm2D[h40KNP], FBlMJ7tbT[h40KNP], z[h40KNP], a1bm2D[b], FBlMJ7tbT[b], z[b], Gco3WVbf[nRYm2p][2]);
            nRYm2p = nRYm2p + 1;
        };
    }
    return 0;
}

