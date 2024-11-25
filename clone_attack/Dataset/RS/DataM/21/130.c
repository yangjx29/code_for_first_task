void  main () {
    int LnP3wxZ;
    int Sd2vma;
    float b [300], J7b8KpAW2d;
    int TAwfydLiKGR [(460 - 160)], uzeFIlr4;
    int DHIrUKhVqF;
    int RcfXEoUs;
    float N9ACro, LrjSE9w;
    LnP3wxZ = (-1);
    Sd2vma = 0;
    scanf ("%d", &RcfXEoUs);
    DHIrUKhVqF = (862 - 862);
    {
        uzeFIlr4 = 118 - 118;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RcfXEoUs > uzeFIlr4) {
            scanf ("%d", &TAwfydLiKGR[uzeFIlr4]);
            DHIrUKhVqF = DHIrUKhVqF +TAwfydLiKGR[uzeFIlr4];
            uzeFIlr4 = uzeFIlr4 + 1;
        };
    }
    LrjSE9w = RcfXEoUs;
    N9ACro = DHIrUKhVqF;
    J7b8KpAW2d = N9ACro / LrjSE9w;
    {
        uzeFIlr4 = 461 - 461;
        while (RcfXEoUs > uzeFIlr4) {
            if (J7b8KpAW2d < TAwfydLiKGR[uzeFIlr4])
                b[uzeFIlr4] = TAwfydLiKGR[uzeFIlr4] - J7b8KpAW2d;
            else
                b[uzeFIlr4] = J7b8KpAW2d -TAwfydLiKGR[uzeFIlr4];
            uzeFIlr4 = uzeFIlr4 + 1;
        };
    }
    for (uzeFIlr4 = 0; uzeFIlr4 < RcfXEoUs; uzeFIlr4 = uzeFIlr4 + 1) {
        if (b[uzeFIlr4] > b[Sd2vma])
            Sd2vma = uzeFIlr4;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        uzeFIlr4 = 0;
        while (uzeFIlr4 < RcfXEoUs) {
            if (b[uzeFIlr4] == b[Sd2vma] && uzeFIlr4 != Sd2vma)
                LnP3wxZ = uzeFIlr4;
            uzeFIlr4 = uzeFIlr4 + 1;
        };
    }
    if (LnP3wxZ == (-1))
        printf ("%d", TAwfydLiKGR[Sd2vma]);
    else if (TAwfydLiKGR[Sd2vma] > TAwfydLiKGR[LnP3wxZ])
        printf ("%d,%d", TAwfydLiKGR[LnP3wxZ], TAwfydLiKGR[Sd2vma]);
    else
        printf ("%d,%d", TAwfydLiKGR[Sd2vma], TAwfydLiKGR[LnP3wxZ]);
}

