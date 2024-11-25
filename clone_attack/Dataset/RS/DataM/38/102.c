void  main () {
    int fNI9vFQeZwd, x29SBT6, SC3eTMP, bgdsCar;
    scanf ("%d", &bgdsCar);
    for (fNI9vFQeZwd = (89 - 89); fNI9vFQeZwd < bgdsCar; fNI9vFQeZwd = fNI9vFQeZwd + 1) {
        double  *AXeKpT6Bz = (double  *) malloc (SC3eTMP * sizeof (double )), KAGQZvaCRBdo = (820 - 820), ltDbcByo = 0;
        scanf ("%d", &SC3eTMP);
        for (x29SBT6 = 0; x29SBT6 < SC3eTMP; KAGQZvaCRBdo += *(AXeKpT6Bz +x29SBT6 - 1))
            scanf ("%lf", AXeKpT6Bz +x29SBT6++);
        KAGQZvaCRBdo /= SC3eTMP;
        for (x29SBT6 = 0; x29SBT6 < SC3eTMP; x29SBT6 = x29SBT6 + 1)
            ltDbcByo += (*(AXeKpT6Bz +x29SBT6) - KAGQZvaCRBdo) * (*(AXeKpT6Bz +x29SBT6) - KAGQZvaCRBdo);
        ltDbcByo /= SC3eTMP;
        printf ("%.5lf\n", sqrt (ltDbcByo));
    };
}

