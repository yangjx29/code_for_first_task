int main () {
    double  yVDy9xYUm [(1054 - 954)];
    double  VTvuDGL [(298 - 198)] [(1008 - 908)];
    double  X0Kqt4hJ;
    int M06osmVZO3H;
    int BZd0i4H8qlW2;
    int Gbdsvtx;
    int DMDIUEv;
    double  ywvFTIMxn [(819 - 719)] = {(772 - 772)};
    scanf ("%d", &M06osmVZO3H);
    X0Kqt4hJ = (803 - 803);
    {
        Gbdsvtx = (997 - 997);
        for (; M06osmVZO3H > Gbdsvtx;) {
            scanf ("%d", &BZd0i4H8qlW2);
            X0Kqt4hJ = (918 - 918);
            {
                DMDIUEv = (414 - 414);
                for (; BZd0i4H8qlW2 > DMDIUEv;) {
                    scanf ("%lf", &VTvuDGL[Gbdsvtx][DMDIUEv]);
                    X0Kqt4hJ += VTvuDGL[Gbdsvtx][DMDIUEv];
                    DMDIUEv = DMDIUEv +(536 - 535);
                }
            }
            yVDy9xYUm[Gbdsvtx] = X0Kqt4hJ / (double ) (BZd0i4H8qlW2);
            {
                DMDIUEv = (592 - 592);
                for (; BZd0i4H8qlW2 > DMDIUEv;) {
                    ywvFTIMxn[Gbdsvtx] += (VTvuDGL[Gbdsvtx][DMDIUEv] - yVDy9xYUm[Gbdsvtx]) * (VTvuDGL[Gbdsvtx][DMDIUEv] - yVDy9xYUm[Gbdsvtx]);
                    DMDIUEv = DMDIUEv +(877 - 876);
                }
            }
            ywvFTIMxn[Gbdsvtx] = ywvFTIMxn[Gbdsvtx] / (double ) (BZd0i4H8qlW2);
            ywvFTIMxn[Gbdsvtx] = sqrt (ywvFTIMxn[Gbdsvtx]);
            Gbdsvtx = Gbdsvtx +(420 - 419);
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        Gbdsvtx = 0;
        for (; Gbdsvtx < M06osmVZO3H;) {
            printf ("%.5lf\n", ywvFTIMxn[Gbdsvtx]);
            Gbdsvtx = Gbdsvtx +(426 - 425);
        }
    }
    return 0;
}

