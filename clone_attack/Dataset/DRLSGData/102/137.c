int main () {
    double  zcxUiyJ2tWdL [(634 - 584)];
    int ZDfPoUCl9X0M;
    int v62CmX;
    double  J7xYRl [(1016 - 966)];
    double  rGcUZuJ7W [(469 - 419)];
    int iU18LcSX3hl5;
    char bdwCohp038 [(666 - 656)];
    double  kuVxCgTJRDs;
    int Onq0AMrTVSF;
    int Zva0VsjDGWKr;
    int p8PR3aV;
    int XYZJQ2U;
    int A4fcbhd8W;
    p8PR3aV = (228 - 228);
    scanf ("%d", &iU18LcSX3hl5);
    Zva0VsjDGWKr = (653 - 653);
    ZDfPoUCl9X0M = (178 - 178);
    Onq0AMrTVSF = (525 - 525);
    {
        A4fcbhd8W = (870 - 870);
        for (; iU18LcSX3hl5 > A4fcbhd8W;) {
            scanf ("%s%lf", bdwCohp038, &(J7xYRl[A4fcbhd8W]));
            if (!('f' != bdwCohp038[(726 - 726)])) {
                Onq0AMrTVSF++;
                zcxUiyJ2tWdL[Zva0VsjDGWKr] = J7xYRl[A4fcbhd8W];
                Zva0VsjDGWKr++;
            }
            else if (!('m' != bdwCohp038[(684 - 684)])) {
                p8PR3aV = p8PR3aV + (457 - 456);
                rGcUZuJ7W[ZDfPoUCl9X0M] = J7xYRl[A4fcbhd8W];
                ZDfPoUCl9X0M++;
            }
            A4fcbhd8W = A4fcbhd8W +(118 - 117);
        }
    }
    {
        v62CmX = (699 - 698);
        for (; p8PR3aV >= v62CmX;) {
            {
                ZDfPoUCl9X0M = (31 - 31);
                for (; p8PR3aV - v62CmX > ZDfPoUCl9X0M;) {
                    if (rGcUZuJ7W[ZDfPoUCl9X0M +(687 - 686)] < rGcUZuJ7W[ZDfPoUCl9X0M]) {
                        kuVxCgTJRDs = rGcUZuJ7W[ZDfPoUCl9X0M];
                        rGcUZuJ7W[ZDfPoUCl9X0M] = rGcUZuJ7W[ZDfPoUCl9X0M +(686 - 685)];
                        rGcUZuJ7W[ZDfPoUCl9X0M +(196 - 195)] = kuVxCgTJRDs;
                    }
                    ZDfPoUCl9X0M++;
                }
            }
            v62CmX = v62CmX + (80 - 79);
        }
    }
    {
        XYZJQ2U = (235 - 234);
        for (; XYZJQ2U <= Onq0AMrTVSF;) {
            {
                Zva0VsjDGWKr = (16 - 16);
                for (; Zva0VsjDGWKr < Onq0AMrTVSF -XYZJQ2U;) {
                    if (zcxUiyJ2tWdL[Zva0VsjDGWKr +(323 - 322)] > zcxUiyJ2tWdL[Zva0VsjDGWKr]) {
                        kuVxCgTJRDs = zcxUiyJ2tWdL[Zva0VsjDGWKr];
                        zcxUiyJ2tWdL[Zva0VsjDGWKr] = zcxUiyJ2tWdL[Zva0VsjDGWKr +(455 - 454)];
                        zcxUiyJ2tWdL[Zva0VsjDGWKr +(285 - 284)] = kuVxCgTJRDs;
                    }
                    Zva0VsjDGWKr++;
                }
            }
            XYZJQ2U = XYZJQ2U +1;
        }
    }
    {
        ZDfPoUCl9X0M = 0;
        for (; p8PR3aV > ZDfPoUCl9X0M;) {
            printf ("%.2lf ", rGcUZuJ7W[ZDfPoUCl9X0M]);
            ZDfPoUCl9X0M++;
        }
    }
    {
        Zva0VsjDGWKr = 0;
        for (; Onq0AMrTVSF > Zva0VsjDGWKr;) {
            if (Onq0AMrTVSF -1 > Zva0VsjDGWKr)
                printf ("%.2lf ", zcxUiyJ2tWdL[Zva0VsjDGWKr]);
            else
                printf ("%.2lf", zcxUiyJ2tWdL[Zva0VsjDGWKr]);
            Zva0VsjDGWKr++;
        }
    }
    return 0;
}

