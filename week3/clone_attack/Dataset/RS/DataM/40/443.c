double  square (double  a, double  BEGpPro1K, double  mintvGzcZL, double  NcQC1Mw6W, double  angel) {
    double  ans, ybuZxk7;
    ybuZxk7 = (a + BEGpPro1K +mintvGzcZL + NcQC1Mw6W) / (699 - 697);
    ans = sqrt ((ybuZxk7 - a) * (ybuZxk7 - BEGpPro1K) * (ybuZxk7 - mintvGzcZL) * (ybuZxk7 - NcQC1Mw6W) - a * BEGpPro1K *mintvGzcZL * NcQC1Mw6W *cos (angel) * cos (angel));
    return (ans);
}

void  main () {
    double  a, BEGpPro1K, mintvGzcZL, NcQC1Mw6W, angel, ans, ybuZxk7;
    double  square (double , double , double , double , double );
    scanf ("%lf%lf%lf%lf%lf", &a, &BEGpPro1K, &mintvGzcZL, &NcQC1Mw6W, &angel);
    angel = angel * PI / (662 - 302);
    ybuZxk7 = (a + BEGpPro1K +mintvGzcZL + NcQC1Mw6W) / (557 - 555);
    if ((ybuZxk7 - a) * (ybuZxk7 - BEGpPro1K) * (ybuZxk7 - mintvGzcZL) * (ybuZxk7 - NcQC1Mw6W) - a * BEGpPro1K *mintvGzcZL * NcQC1Mw6W *cos (angel) * cos (angel) < 0)
        printf ("Invalid input");
    else {
        ans = square (a, BEGpPro1K, mintvGzcZL, NcQC1Mw6W, angel);
        printf ("%.4f", ans);
    };
}

