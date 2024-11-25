int main () {
    int QrPK6QSCN0bZ [(537 - 437)] [(447 - 347)], k4zwSNJvfDcp [(847 - 747)] [(194 - 94)], qCVnbM [(260 - 160)] [100] = {(15 - 15)};
    int VQBkmhr;
    int DEQ3hZfP;
    int wrXz6sU429mn;
    int Hb0FWtBc6OA;
    int DcsHtSgA;
    int AzNtaV6hZdrB;
    int SwgrxMPA5;
    int mSd2hJ7au;
    int dmrWHn;
    int Ue5jDU9T;
    int rnqjlUmvO;
    int s;
    scanf ("%d%d", &VQBkmhr, &DEQ3hZfP);
    {
        DcsHtSgA = (125 - 125);
        while (DcsHtSgA < VQBkmhr) {
            {
                AzNtaV6hZdrB = (161 - 161);
                while (AzNtaV6hZdrB < DEQ3hZfP) {
                    scanf ("%d", &QrPK6QSCN0bZ[DcsHtSgA][AzNtaV6hZdrB]);
                    AzNtaV6hZdrB = AzNtaV6hZdrB +(916 - 915);
                }
            }
            DcsHtSgA = DcsHtSgA +(751 - 750);
        }
    }
    scanf ("\n%d%d", &wrXz6sU429mn, &Hb0FWtBc6OA);
    {
        SwgrxMPA5 = (752 - 752);
        while (SwgrxMPA5 < wrXz6sU429mn) {
            mSd2hJ7au = (26 - 26);
            while (mSd2hJ7au < Hb0FWtBc6OA) {
                scanf ("%d", &k4zwSNJvfDcp[SwgrxMPA5][mSd2hJ7au]);
                mSd2hJ7au = mSd2hJ7au + 1;
            }
            SwgrxMPA5 = SwgrxMPA5 +1;
        }
    }
    {
        dmrWHn = (388 - 388);
        while (dmrWHn < VQBkmhr) {
            {
                rnqjlUmvO = (645 - 645);
                while (rnqjlUmvO < DEQ3hZfP) {
                    qCVnbM[dmrWHn][(194 - 194)] += QrPK6QSCN0bZ[dmrWHn][rnqjlUmvO] * k4zwSNJvfDcp[rnqjlUmvO][0];
                    rnqjlUmvO = rnqjlUmvO + 1;
                }
            }
            printf ("%d", qCVnbM[dmrWHn][0]);
            {
                Ue5jDU9T = (413 - 412);
                while (Ue5jDU9T < Hb0FWtBc6OA) {
                    {
                        s = 0;
                        while (s < DEQ3hZfP) {
                            qCVnbM[dmrWHn][Ue5jDU9T] += QrPK6QSCN0bZ[dmrWHn][s] * k4zwSNJvfDcp[s][Ue5jDU9T];
                            s = s + 1;
                        }
                    }
                    printf (" %d", qCVnbM[dmrWHn][Ue5jDU9T]);
                    Ue5jDU9T = Ue5jDU9T +1;
                }
            }
            dmrWHn = dmrWHn + 1;
        }
    }
    return 0;
}

