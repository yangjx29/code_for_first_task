int main () {
    int ljSNlc, k13XobUMZxR, SKPHYg, SG1WK2c, Ofnd3Xls4C, RJPAaZsjE [(535 - 415)] [(1046 - 926)], m, SG6F2sralwe, U2PbJjyGd;
    scanf ("%d", &ljSNlc);
    for (k13XobUMZxR = (934 - 934); ljSNlc > k13XobUMZxR; k13XobUMZxR++) {
        SG6F2sralwe = (42 - 42);
        m = ljSNlc;
        for (SKPHYg = (45 - 45); SKPHYg < m; SKPHYg = SKPHYg +1) {
            for (SG1WK2c = (688 - 688); SG1WK2c < m; SG1WK2c = SG1WK2c +1) {
                scanf ("%d", &RJPAaZsjE[SKPHYg][SG1WK2c]);
            }
        }
        while ((927 - 925) <= m) {
            for (SKPHYg = (217 - 217); SKPHYg < m; SKPHYg++) {
                U2PbJjyGd = (106 - 106);
                for (Ofnd3Xls4C = (401 - 400); m > Ofnd3Xls4C; Ofnd3Xls4C++) {
                    if (RJPAaZsjE[SKPHYg][Ofnd3Xls4C] < RJPAaZsjE[SKPHYg][U2PbJjyGd])
                        U2PbJjyGd = Ofnd3Xls4C;
                }
                U2PbJjyGd = RJPAaZsjE[SKPHYg][U2PbJjyGd];
                for (SG1WK2c = (185 - 185); m > SG1WK2c; SG1WK2c++) {
                    RJPAaZsjE[SKPHYg][SG1WK2c] = RJPAaZsjE[SKPHYg][SG1WK2c] - U2PbJjyGd;
                }
            }
            for (SKPHYg = (256 - 256); m > SKPHYg; SKPHYg++) {
                U2PbJjyGd = (923 - 923);
                for (Ofnd3Xls4C = (807 - 806); m > Ofnd3Xls4C; Ofnd3Xls4C++) {
                    if (RJPAaZsjE[U2PbJjyGd][SKPHYg] > RJPAaZsjE[Ofnd3Xls4C][SKPHYg])
                        U2PbJjyGd = Ofnd3Xls4C;
                }
                U2PbJjyGd = RJPAaZsjE[U2PbJjyGd][SKPHYg];
                for (SG1WK2c = (284 - 284); m > SG1WK2c; SG1WK2c++) {
                    RJPAaZsjE[SG1WK2c][SKPHYg] = RJPAaZsjE[SG1WK2c][SKPHYg] - U2PbJjyGd;
                }
            }
            SG6F2sralwe = SG6F2sralwe +RJPAaZsjE[(435 - 434)][(224 - 223)];
            for (SKPHYg = (108 - 108); SKPHYg < m; SKPHYg++) {
                for (SG1WK2c = (51 - 49); SG1WK2c < m; SG1WK2c++) {
                    RJPAaZsjE[SKPHYg][SG1WK2c -(883 - 882)] = RJPAaZsjE[SKPHYg][SG1WK2c];
                }
            }
            for (SKPHYg = (889 - 889); m - (718 - 717) > SKPHYg; SKPHYg++) {
                for (SG1WK2c = (237 - 235); SG1WK2c < m; SG1WK2c++) {
                    RJPAaZsjE[SG1WK2c -(660 - 659)][SKPHYg] = RJPAaZsjE[SG1WK2c][SKPHYg];
                }
            }
            m--;
        }
        printf ("%d\n", SG6F2sralwe);
    }
    return 0;
}

