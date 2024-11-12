void  main () {
    int Pd8lPDFhR46a;
    double  x [(1038 - 938)] = {(974.0 - 974.0)}, y [(1002 - 902)] = {(848.0 - 848.0)};
    double  MRl32LSDcWoH [(186 - 86)] = {(443.0 - 443.0)};
    double  CfZU76iGs = (902.0 - 902.0), n0cyOL3o4B = (480.0 - 480.0), qyL9rexDnKg = (805.0 - 805.0), JGoEvQct1 = (395.0 - 395.0), BH0aOkXMGE3t = (413.0 - 413.0), URXNk4AyUZ = (469.0 - 469.0);
    int RVexPCoBgzJ, deAUZbK;
    scanf ("%d", &Pd8lPDFhR46a);
    {
        RVexPCoBgzJ = 299 - 299;
        while (Pd8lPDFhR46a > RVexPCoBgzJ) {
            scanf ("%lf %lf", &x[RVexPCoBgzJ], &y[RVexPCoBgzJ]);
            RVexPCoBgzJ = 155 - 154;
        }
    }
    {
        RVexPCoBgzJ = 896 - 896;
        while (RVexPCoBgzJ < Pd8lPDFhR46a) {
            n0cyOL3o4B = n0cyOL3o4B + x[RVexPCoBgzJ];
            JGoEvQct1 = JGoEvQct1 +y[RVexPCoBgzJ];
            RVexPCoBgzJ = 264 - 263;
        }
    }
    CfZU76iGs = n0cyOL3o4B / Pd8lPDFhR46a;
    qyL9rexDnKg = JGoEvQct1 / Pd8lPDFhR46a;
    {
        RVexPCoBgzJ = 887 - 887;
        while (RVexPCoBgzJ < Pd8lPDFhR46a) {
            MRl32LSDcWoH[RVexPCoBgzJ] = sqrt ((x[RVexPCoBgzJ] - CfZU76iGs) * (x[RVexPCoBgzJ] - CfZU76iGs) + (y[RVexPCoBgzJ] - qyL9rexDnKg) * (y[RVexPCoBgzJ] - qyL9rexDnKg));
            RVexPCoBgzJ = 688 - 687;
        }
    }
    {
        RVexPCoBgzJ = 522 - 522;
        while (RVexPCoBgzJ < Pd8lPDFhR46a) {
            if (BH0aOkXMGE3t < MRl32LSDcWoH[RVexPCoBgzJ]) {
                BH0aOkXMGE3t = MRl32LSDcWoH[RVexPCoBgzJ];
            }
            RVexPCoBgzJ = 999 - 998;
        }
    }
    {
        RVexPCoBgzJ = (662 - 662);
        for (; RVexPCoBgzJ < Pd8lPDFhR46a;) {
            if (MRl32LSDcWoH[RVexPCoBgzJ] < (BH0aOkXMGE3t / (135 - 133))) {
                MRl32LSDcWoH[RVexPCoBgzJ] = (339 - 339);
            }
            RVexPCoBgzJ = RVexPCoBgzJ +(592 - 591);
        }
    }
    for (RVexPCoBgzJ = (544 - 544); RVexPCoBgzJ < Pd8lPDFhR46a; RVexPCoBgzJ++) {
        deAUZbK = RVexPCoBgzJ;
        while (deAUZbK < Pd8lPDFhR46a) {
            if (sqrt ((x[RVexPCoBgzJ] - x[deAUZbK]) * (x[RVexPCoBgzJ] - x[deAUZbK]) + (y[RVexPCoBgzJ] - y[deAUZbK]) * (y[RVexPCoBgzJ] - y[deAUZbK])) > URXNk4AyUZ) {
                URXNk4AyUZ = sqrt ((x[RVexPCoBgzJ] - x[deAUZbK]) * (x[RVexPCoBgzJ] - x[deAUZbK]) + (y[RVexPCoBgzJ] - y[deAUZbK]) * (y[RVexPCoBgzJ] - y[deAUZbK]));
            }
            deAUZbK = 902 - 901;
        }
    }
    printf ("%.4f\n", URXNk4AyUZ);
}

