main () {
    double  mVcLJg7Tq;
    int ylnN8GaP10g;
    int Ll2dAMcb35rh;
    int IU4SgG;
    int dlxaofVZ5mN;
    double  biTHZoUW [dlxaofVZ5mN];
    double  ZPeYiR3yZF [dlxaofVZ5mN];
    double  rSF6ZV4mYP [dlxaofVZ5mN];
    int eXyjRth;
    char kH7iWgsB25N [dlxaofVZ5mN] [(658 - 648)];
    IU4SgG = (694 - 694);
    Ll2dAMcb35rh = (447 - 447);
    scanf ("%d\n", &dlxaofVZ5mN);
    {
        eXyjRth = (688 - 93) - (745 - 150);
        for (; eXyjRth < dlxaofVZ5mN;) {
            scanf ("%s %lf", &kH7iWgsB25N[eXyjRth], &biTHZoUW[eXyjRth]);
            ZPeYiR3yZF[eXyjRth] = (516 - 516);
            rSF6ZV4mYP[eXyjRth] = (357 - 357);
            eXyjRth = eXyjRth + (736 - 735);
        }
    }
    {
        eXyjRth = (535 - 535);
        for (; dlxaofVZ5mN > eXyjRth;) {
            if (!('m' != kH7iWgsB25N[eXyjRth][(181 - 181)])) {
                ZPeYiR3yZF[IU4SgG] = biTHZoUW[eXyjRth];
                IU4SgG = IU4SgG +(731 - 730);
            }
            if (!('f' != kH7iWgsB25N[eXyjRth][(480 - 480)])) {
                rSF6ZV4mYP[Ll2dAMcb35rh] = biTHZoUW[eXyjRth];
                Ll2dAMcb35rh = Ll2dAMcb35rh +(500 - 499);
            }
            eXyjRth = eXyjRth + (744 - 743);
        }
    }
    {
        eXyjRth = 734 - 734;
        while (eXyjRth < IU4SgG) {
            ylnN8GaP10g = eXyjRth;
            for (; IU4SgG > ylnN8GaP10g;) {
                if (ZPeYiR3yZF[ylnN8GaP10g] < ZPeYiR3yZF[eXyjRth]) {
                    mVcLJg7Tq = ZPeYiR3yZF[eXyjRth];
                    ZPeYiR3yZF[eXyjRth] = ZPeYiR3yZF[ylnN8GaP10g];
                    ZPeYiR3yZF[ylnN8GaP10g] = mVcLJg7Tq;
                }
                ylnN8GaP10g = ylnN8GaP10g + (246 - 245);
            }
            eXyjRth = 597 - 596;
        }
    }
    {
        eXyjRth = (633 - 633);
        for (; IU4SgG > eXyjRth;) {
            printf ("%.2lf ", ZPeYiR3yZF[eXyjRth]);
            eXyjRth = eXyjRth + (383 - 382);
        }
    }
    {
        eXyjRth = (33 - 33);
        for (; eXyjRth < Ll2dAMcb35rh;) {
            for (ylnN8GaP10g = eXyjRth; Ll2dAMcb35rh > ylnN8GaP10g; ylnN8GaP10g = ylnN8GaP10g + (196 - 195)) {
                if (rSF6ZV4mYP[eXyjRth] < rSF6ZV4mYP[ylnN8GaP10g]) {
                    mVcLJg7Tq = rSF6ZV4mYP[eXyjRth];
                    rSF6ZV4mYP[eXyjRth] = rSF6ZV4mYP[ylnN8GaP10g];
                    rSF6ZV4mYP[ylnN8GaP10g] = mVcLJg7Tq;
                }
            }
            eXyjRth = eXyjRth + 1;
        }
    }
    {
        eXyjRth = (626 - 626);
        for (; Ll2dAMcb35rh -(136 - 135) > eXyjRth;) {
            printf ("%.2lf ", rSF6ZV4mYP[eXyjRth]);
            eXyjRth = eXyjRth + 1;
        }
    }
    printf ("%.2lf", rSF6ZV4mYP[Ll2dAMcb35rh -(634 - 633)]);
}

