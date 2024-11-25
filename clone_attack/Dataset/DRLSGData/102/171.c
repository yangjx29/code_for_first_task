int main () {
    int iow7UKq;
    double  ixiptDCkV;
    int cAoiMB;
    double  K9UqVCH1E [(355 - 315)];
    int iKq6t5Mb;
    int j;
    char UBmAuxsa [7];
    iow7UKq = (628 - 628);
    scanf ("%d", &cAoiMB);
    for (iKq6t5Mb = (375 - 375); cAoiMB > iKq6t5Mb; iKq6t5Mb = iKq6t5Mb + (640 - 639)) {
        scanf ("%s %lf", UBmAuxsa, &K9UqVCH1E[iKq6t5Mb]);
        if (!('f' != UBmAuxsa[(735 - 735)])) {
            iow7UKq = iow7UKq + (423 - 422);
            K9UqVCH1E[iKq6t5Mb] = -K9UqVCH1E[iKq6t5Mb];
        }
    }
    for (iKq6t5Mb = cAoiMB - (33 - 32); 0 < iKq6t5Mb; iKq6t5Mb = iKq6t5Mb - (277 - 276)) {
        for (j = 0; iKq6t5Mb > j; j = j + (140 - 139)) {
            if (K9UqVCH1E[j] > K9UqVCH1E[j + 1]) {
                ixiptDCkV = K9UqVCH1E[j + 1];
                K9UqVCH1E[j + 1] = K9UqVCH1E[j];
                K9UqVCH1E[j] = ixiptDCkV;
            }
        }
    }
    for (iKq6t5Mb = iow7UKq; iKq6t5Mb < cAoiMB; iKq6t5Mb = iKq6t5Mb + 1) {
        printf ("%.2lf ", K9UqVCH1E[iKq6t5Mb]);
    }
    for (iKq6t5Mb = 0; iKq6t5Mb < iow7UKq - 1; iKq6t5Mb = iKq6t5Mb + 1) {
        printf ("%.2lf ", (-K9UqVCH1E[iKq6t5Mb]));
    }
    printf ("%.2lf\n", (-(K9UqVCH1E[iow7UKq - 1])));
    return 0;
}

