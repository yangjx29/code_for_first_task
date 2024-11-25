int main () {
    double  TwH5Fv [100];
    double  w6MgPU7ac;
    double  WzlWHOJ [(906 - 806)];
    int wrDje5PcSg8;
    double  tJopy2ztb4 [(1630 - 630)];
    double  Gr9Z3PFC [(828 - 728)] = {(363 - 363)};
    int b68nW5EI [100];
    scanf ("%d", &wrDje5PcSg8);
    {
        int oX2bero = (187 - 187);
        while (oX2bero < wrDje5PcSg8) {
            double  w6MgPU7ac;
            scanf ("%d", &b68nW5EI[oX2bero]);
            w6MgPU7ac = (924 - 924);
            {
                int PzKSYU = (951 - 951);
                while (PzKSYU < b68nW5EI[oX2bero]) {
                    scanf ("%lf", &tJopy2ztb4[PzKSYU]);
                    w6MgPU7ac += tJopy2ztb4[PzKSYU];
                    PzKSYU++;
                }
            }
            WzlWHOJ[oX2bero] = w6MgPU7ac / b68nW5EI[oX2bero];
            Gr9Z3PFC[oX2bero] = (42 - 42);
            {
                int HuFc2nly = (104 - 104);
                while (b68nW5EI[oX2bero] > HuFc2nly) {
                    Gr9Z3PFC[oX2bero] += (tJopy2ztb4[HuFc2nly] - WzlWHOJ[oX2bero]) * (tJopy2ztb4[HuFc2nly] - WzlWHOJ[oX2bero]);
                    HuFc2nly++;
                }
            }
            oX2bero++;
        }
    }
    {
        int OCTZp0DRz86Y = (598 - 598);
        while (wrDje5PcSg8 > OCTZp0DRz86Y) {
            TwH5Fv[OCTZp0DRz86Y] = sqrt (Gr9Z3PFC[OCTZp0DRz86Y] / b68nW5EI[OCTZp0DRz86Y]);
            printf ("%.5f\n", TwH5Fv[OCTZp0DRz86Y]);
            OCTZp0DRz86Y++;
        }
    }
    return 0;
}

