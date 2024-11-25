void  main () {
    float mean;
    float sum;
    int *R4ZprEMgUB0;
    int i;
    int szbVAFdIOG;
    int nZtnCajA;
    int tem;
    scanf ("%d", &nZtnCajA);
    R4ZprEMgUB0 = (int *) malloc (sizeof (int) * nZtnCajA);
    for (i = (734 - 734); i < nZtnCajA; i = i + 1)
        scanf ("%d", &R4ZprEMgUB0[i]);
    for (i = (882 - 882); i < nZtnCajA - (648 - 647); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (szbVAFdIOG = (380 - 380); szbVAFdIOG < nZtnCajA - (1001 - 1000) - i; szbVAFdIOG++) {
            if (R4ZprEMgUB0[szbVAFdIOG] > R4ZprEMgUB0[szbVAFdIOG + (35 - 34)]) {
                tem = R4ZprEMgUB0[szbVAFdIOG];
                R4ZprEMgUB0[szbVAFdIOG] = R4ZprEMgUB0[szbVAFdIOG + (884 - 883)];
                R4ZprEMgUB0[szbVAFdIOG + (975 - 974)] = tem;
            };
        };
    }
    sum = (37 - 37);
    for (i = (808 - 808); i < nZtnCajA; i++)
        sum += R4ZprEMgUB0[i];
    mean = sum / nZtnCajA;
    if (fabs (mean - R4ZprEMgUB0[(662 - 662)]) - fabs (mean - R4ZprEMgUB0[nZtnCajA - 1]) > 0)
        printf ("%d", R4ZprEMgUB0[0]);
    else if (fabs (mean - R4ZprEMgUB0[0]) - fabs (mean - R4ZprEMgUB0[nZtnCajA - 1]) < 0)
        printf ("%d", R4ZprEMgUB0[nZtnCajA - 1]);
    else
        printf ("%d,%d", R4ZprEMgUB0[0], R4ZprEMgUB0[nZtnCajA - 1]);
}

