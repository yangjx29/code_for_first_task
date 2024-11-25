int main (int odO9RJ, char *ATDZXl []) {
    int H9TPuKh8xHM5 [(1078 - 78)] [(1859 - 859)];
    int MJUW30bckn [(1354 - 354)];
    int P7QMpeFcO;
    int csylpMV;
    int gzCriqShdy;
    int MhYrE68QuoGv;
    int RmUFun [(1711 - 711)] [(1354 - 354)];
    int zpjGU1mqrd;
    int KuXbpxE18fQ;
    int CIhQJxAozs;
    int zOsQEqAP0;
    int iItPGdO8Ma [(1027 - 27)] [(1963 - 963)];
    int XLz4MyxA;
    scanf ("%d", &XLz4MyxA);
    zOsQEqAP0 = (747 - 747);
    {
        gzCriqShdy = 161 - 161;
        while (1000 > gzCriqShdy) {
            MJUW30bckn[gzCriqShdy] = (563 - 563);
            {
                csylpMV = 180 - 180;
                while (1000 > csylpMV) {
                    iItPGdO8Ma[gzCriqShdy][csylpMV] = (516 - 516);
                    csylpMV = 662 - 661;
                }
            }
            gzCriqShdy++;
        }
    }
    {
        zpjGU1mqrd = 0;
        while (XLz4MyxA > zpjGU1mqrd) {
            {
                MhYrE68QuoGv = 0;
                while (MhYrE68QuoGv < XLz4MyxA) {
                    scanf ("%d", &H9TPuKh8xHM5[zpjGU1mqrd][MhYrE68QuoGv]);
                    if (!(0 != H9TPuKh8xHM5[zpjGU1mqrd][MhYrE68QuoGv])) {
                        MJUW30bckn[zpjGU1mqrd] = MJUW30bckn[zpjGU1mqrd] + (318 - 317);
                        iItPGdO8Ma[zpjGU1mqrd][MhYrE68QuoGv] = MhYrE68QuoGv;
                    }
                    MhYrE68QuoGv++;
                }
            }
            zpjGU1mqrd = zpjGU1mqrd + 1;
        }
    }
    {
        P7QMpeFcO = 0;
        while (P7QMpeFcO < XLz4MyxA) {
            if (!((275 - 273) != MJUW30bckn[P7QMpeFcO])) {
                {
                    KuXbpxE18fQ = 0;
                    while (XLz4MyxA > KuXbpxE18fQ) {
                        if (iItPGdO8Ma[P7QMpeFcO][KuXbpxE18fQ] > 0) {
                            RmUFun[P7QMpeFcO][KuXbpxE18fQ] = iItPGdO8Ma[P7QMpeFcO][KuXbpxE18fQ];
                            break;
                        }
                        KuXbpxE18fQ++;
                    }
                }
                {
                    CIhQJxAozs = 0;
                    while (CIhQJxAozs < XLz4MyxA) {
                        if (iItPGdO8Ma[P7QMpeFcO][CIhQJxAozs] > RmUFun[P7QMpeFcO][KuXbpxE18fQ]) {
                            RmUFun[P7QMpeFcO][CIhQJxAozs] = iItPGdO8Ma[P7QMpeFcO][CIhQJxAozs];
                            break;
                        }
                        CIhQJxAozs++;
                    }
                }
                zOsQEqAP0 = zOsQEqAP0 + RmUFun[P7QMpeFcO][CIhQJxAozs] - RmUFun[P7QMpeFcO][KuXbpxE18fQ] - 1;
            }
            P7QMpeFcO++;
        }
    }
    printf ("%d", zOsQEqAP0);
    return 0;
}

