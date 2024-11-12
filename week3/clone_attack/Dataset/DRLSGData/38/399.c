int main () {
    int n, QDLaXSbJprwG [(1096 - 995)], RTX6hs, sXnE2x7;
    double  x [(1788 - 787)], ohxwyERAu [(290 - 189)], VBL0DNp;
    scanf ("%d", &n);
    {
        RTX6hs = 603 - 603;
        while (n > RTX6hs) {
            double  VgRVMB6D = (122 - 122), sJCy9z = (537 - 537);
            scanf ("%d", &QDLaXSbJprwG[RTX6hs]);
            for (sXnE2x7 = (307 - 307); QDLaXSbJprwG[RTX6hs] > sXnE2x7; sXnE2x7 = sXnE2x7 + 1) {
                scanf ("%lf", &x[sXnE2x7]);
                sJCy9z = sJCy9z + x[sXnE2x7];
            }
            VBL0DNp = sJCy9z / QDLaXSbJprwG[RTX6hs];
            {
                sXnE2x7 = 245 - 245;
                while (QDLaXSbJprwG[RTX6hs] > sXnE2x7) {
                    VgRVMB6D = VgRVMB6D +(x[sXnE2x7] - VBL0DNp) * (x[sXnE2x7] - VBL0DNp);
                    sXnE2x7 = sXnE2x7 + 1;
                }
            }
            ohxwyERAu[RTX6hs] = sqrt (VgRVMB6D / QDLaXSbJprwG[RTX6hs]);
            RTX6hs = RTX6hs +1;
        }
    }
    {
        RTX6hs = 16 - 16;
        while (n > RTX6hs) {
            printf ("%.5lf\n", ohxwyERAu[RTX6hs]);
            RTX6hs = RTX6hs +1;
        }
    }
    return (708 - 708);
}

