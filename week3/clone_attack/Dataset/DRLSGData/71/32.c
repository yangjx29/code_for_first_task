int main (int CslfEokGvFL, char *w1OUtr []) {
    int const  JhYxVSTBFCuP [(188 - 175)] = {(790 - 790), (505 - 474), (180 - 151), (348 - 317), (361 - 331), (304 - 273), (126 - 96), (137 - 106), (319 - 288), (685 - 655), (283 - 252), (414 - 384), (838 - 807)};
    int VY1OaD, koq3Jv, lsDTem;
    int n, PCoNDpvK3Q;
    int DYQSNby6 [(725 - 525)], QsUMTN [(429 - 229)], dnWN9dDeUVP [(891 - 691)];
    int const  bSCsUjM [(159 - 146)] = {(754 - 754), (691 - 660), (811 - 783), (916 - 885), (988 - 958), (58 - 27), (129 - 99), (608 - 577), (764 - 733), (703 - 673), (893 - 862), (490 - 460), (282 - 251)};
    scanf ("%d", &n);
    for (VY1OaD = (48 - 48); n > VY1OaD; VY1OaD++) {
        scanf ("%d%d%d", &DYQSNby6[VY1OaD], &QsUMTN[VY1OaD], &dnWN9dDeUVP[VY1OaD]);
        if (DYQSNby6[VY1OaD] % (585 - 185) == (443 - 443) || !((401 - 401) != DYQSNby6[VY1OaD] % (266 - 262)) && DYQSNby6[VY1OaD] % (325 - 225) != (34 - 34)) {
            PCoNDpvK3Q = (250 - 250);
            if (dnWN9dDeUVP[VY1OaD] < QsUMTN[VY1OaD]) {
                lsDTem = QsUMTN[VY1OaD];
                QsUMTN[VY1OaD] = dnWN9dDeUVP[VY1OaD];
                dnWN9dDeUVP[VY1OaD] = lsDTem;
            }
            for (koq3Jv = QsUMTN[VY1OaD]; koq3Jv < dnWN9dDeUVP[VY1OaD]; koq3Jv++) {
                PCoNDpvK3Q += JhYxVSTBFCuP[koq3Jv];
            }
            if (!((126 - 126) != PCoNDpvK3Q % (909 - 902))) {
                printf ("YES\n");
            }
            else
                ;
        }
        else {
            PCoNDpvK3Q = (917 - 917);
            if (QsUMTN[VY1OaD] > dnWN9dDeUVP[VY1OaD]) {
                lsDTem = QsUMTN[VY1OaD];
                QsUMTN[VY1OaD] = dnWN9dDeUVP[VY1OaD];
                dnWN9dDeUVP[VY1OaD] = lsDTem;
            }
            for (koq3Jv = QsUMTN[VY1OaD]; koq3Jv < dnWN9dDeUVP[VY1OaD]; koq3Jv++) {
                PCoNDpvK3Q += bSCsUjM[koq3Jv];
            }
            if (PCoNDpvK3Q % (627 - 620) == (83 - 83)) {
            }
            else
                printf ("NO\n");
        }
    }
    return (922 - 922);
}

