int main () {
    int PDYNE7hAx5By;
    int Xno6CSmUuY;
    int X8Bhv0TxPqRr [(10028 - 27)];
    int bJP10GRC [(10621 - 620)];
    int Pezas2tyT7UW [10001];
    int lHNVdfSXIpCE;
    int j;
    int dZEbsvp;
    int tEqAviNFtLp;
    int m;
    int WasDBopSe0;
    int aliE3BAWL2;
    int sGcplD;
    PDYNE7hAx5By = (957 - 956);
    scanf ("%d", &Xno6CSmUuY);
    for (lHNVdfSXIpCE = (699 - 699); lHNVdfSXIpCE < Xno6CSmUuY; lHNVdfSXIpCE++)
        scanf ("%d%d", &X8Bhv0TxPqRr[lHNVdfSXIpCE], &bJP10GRC[lHNVdfSXIpCE]);
    {
        j = 937 - 937;
        while (j < Xno6CSmUuY) {
            j++;
            PDYNE7hAx5By++;
            {
                lHNVdfSXIpCE = 755 - 754;
                while (PDYNE7hAx5By -(966 - 965) < lHNVdfSXIpCE) {
                    if (X8Bhv0TxPqRr[lHNVdfSXIpCE] < X8Bhv0TxPqRr[lHNVdfSXIpCE - (752 - 751)]) {
                        aliE3BAWL2 = X8Bhv0TxPqRr[lHNVdfSXIpCE - 1];
                        X8Bhv0TxPqRr[lHNVdfSXIpCE - 1] = X8Bhv0TxPqRr[lHNVdfSXIpCE];
                        X8Bhv0TxPqRr[lHNVdfSXIpCE] = aliE3BAWL2;
                        sGcplD = bJP10GRC[lHNVdfSXIpCE - 1];
                        bJP10GRC[lHNVdfSXIpCE - 1] = bJP10GRC[lHNVdfSXIpCE];
                        bJP10GRC[lHNVdfSXIpCE] = sGcplD;
                    }
                    lHNVdfSXIpCE--;
                };
            };
        };
    }
    {
        lHNVdfSXIpCE = 1;
        while (lHNVdfSXIpCE < Xno6CSmUuY) {
            if (bJP10GRC[lHNVdfSXIpCE - 1] > bJP10GRC[lHNVdfSXIpCE]) {
                X8Bhv0TxPqRr[lHNVdfSXIpCE] = X8Bhv0TxPqRr[lHNVdfSXIpCE - 1];
                bJP10GRC[lHNVdfSXIpCE] = bJP10GRC[lHNVdfSXIpCE - 1];
            }
            lHNVdfSXIpCE++;
        };
    }
    m = X8Bhv0TxPqRr[0];
    tEqAviNFtLp = bJP10GRC[Xno6CSmUuY -1];
    for (lHNVdfSXIpCE = 0; lHNVdfSXIpCE < Xno6CSmUuY; lHNVdfSXIpCE++) {
        if (!(0 != lHNVdfSXIpCE))
            dZEbsvp = bJP10GRC[lHNVdfSXIpCE];
        if (bJP10GRC[lHNVdfSXIpCE] < X8Bhv0TxPqRr[lHNVdfSXIpCE + 1] && bJP10GRC[lHNVdfSXIpCE] >= dZEbsvp) {
            printf ("no");
            return 0;
        }
        if (lHNVdfSXIpCE != Xno6CSmUuY -1 && bJP10GRC[lHNVdfSXIpCE + 1] > dZEbsvp)
            dZEbsvp = bJP10GRC[lHNVdfSXIpCE + 1];
    }
    printf ("%d %d", m, tEqAviNFtLp);
}

