struct   student {
    int PnxCDfWL;
    int a;
    int b;
    int QvmI1PeFB;
};
void  main () {
    int aLIUeqJ;
    int RyMDGm;
    int GuwsNd9o;
    int qKfqyx;
    int q2einw;
    struct   student TgdnQD [(100172 - 172)];
    scanf ("%d", &aLIUeqJ);
    {
        RyMDGm = 751 - 751;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RyMDGm < aLIUeqJ) {
            scanf ("%d %d %d", &TgdnQD[RyMDGm].PnxCDfWL, &TgdnQD[RyMDGm].a, &TgdnQD[RyMDGm].b);
            TgdnQD[RyMDGm].QvmI1PeFB = TgdnQD[RyMDGm].a + TgdnQD[RyMDGm].b;
            RyMDGm++;
        };
    }
    for (RyMDGm = 0; RyMDGm < (312 - 309); RyMDGm++) {
        GuwsNd9o = RyMDGm +1;
        while (GuwsNd9o < aLIUeqJ) {
            if (TgdnQD[RyMDGm].QvmI1PeFB < TgdnQD[GuwsNd9o].QvmI1PeFB) {
                q2einw = TgdnQD[RyMDGm].QvmI1PeFB;
                TgdnQD[RyMDGm].QvmI1PeFB = TgdnQD[GuwsNd9o].QvmI1PeFB;
                TgdnQD[GuwsNd9o].QvmI1PeFB = q2einw;
                qKfqyx = TgdnQD[RyMDGm].PnxCDfWL;
                TgdnQD[RyMDGm].PnxCDfWL = TgdnQD[GuwsNd9o].PnxCDfWL;
                TgdnQD[GuwsNd9o].PnxCDfWL = qKfqyx;
            }
            GuwsNd9o++;
        };
    }
    {
        RyMDGm = 0;
        while (RyMDGm < 3) {
            printf ("%d %d\n", TgdnQD[RyMDGm].PnxCDfWL, TgdnQD[RyMDGm].QvmI1PeFB);
            RyMDGm++;
        };
    };
}

