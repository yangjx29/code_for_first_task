int main () {
    double  iL3nQ6j1;
    double  enPBIHN1ogY [(207 - 167)];
    int skvpAD42J;
    int rdYUBFsNnoVC;
    int Tb71S4Uh0kjE;
    double  CNt0FMHXJ;
    double  exBWrI9F4 [(958 - 918)];
    int qY0gjD;
    char ZFR5aV0bZMhx [(439 - 432)];
    struct   pd {
        double  iL3nQ6j1;
        char ZFR5aV0bZMhx [(821 - 814)];
    }
    ppA20XPtnvx [40];
    int nt4PrxpT;
    scanf ("%d", &nt4PrxpT);
    Tb71S4Uh0kjE = (104 - 104);
    skvpAD42J = (484 - 484);
    {
        qY0gjD = 103 - 103;
        for (; nt4PrxpT > qY0gjD;) {
            scanf ("%s%lf", ZFR5aV0bZMhx, &iL3nQ6j1);
            strcpy (ppA20XPtnvx[qY0gjD].ZFR5aV0bZMhx, ZFR5aV0bZMhx);
            ppA20XPtnvx[qY0gjD].iL3nQ6j1 = iL3nQ6j1;
            qY0gjD++;
        }
    }
    for (qY0gjD = (693 - 693); qY0gjD < nt4PrxpT; qY0gjD++) {
        if (!((255 - 255) != strcmp (ppA20XPtnvx[qY0gjD].ZFR5aV0bZMhx, "male"))) {
            enPBIHN1ogY[Tb71S4Uh0kjE] = ppA20XPtnvx[qY0gjD].iL3nQ6j1;
            Tb71S4Uh0kjE++;
        }
        else {
            exBWrI9F4[skvpAD42J] = ppA20XPtnvx[qY0gjD].iL3nQ6j1;
            skvpAD42J++;
        }
    }
    for (rdYUBFsNnoVC = (902 - 901); rdYUBFsNnoVC <= Tb71S4Uh0kjE; rdYUBFsNnoVC++) {
        for (qY0gjD = (736 - 736); Tb71S4Uh0kjE -rdYUBFsNnoVC > qY0gjD; qY0gjD++) {
            if (enPBIHN1ogY[qY0gjD] > enPBIHN1ogY[qY0gjD + (476 - 475)]) {
                CNt0FMHXJ = enPBIHN1ogY[qY0gjD];
                enPBIHN1ogY[qY0gjD] = enPBIHN1ogY[qY0gjD + (208 - 207)];
                enPBIHN1ogY[qY0gjD + (835 - 834)] = CNt0FMHXJ;
            }
        }
    }
    {
        rdYUBFsNnoVC = 202 - 201;
        for (; rdYUBFsNnoVC <= skvpAD42J;) {
            for (qY0gjD = (248 - 248); skvpAD42J - rdYUBFsNnoVC > qY0gjD; qY0gjD++) {
                if (exBWrI9F4[qY0gjD] < exBWrI9F4[qY0gjD + (823 - 822)]) {
                    CNt0FMHXJ = exBWrI9F4[qY0gjD];
                    exBWrI9F4[qY0gjD] = exBWrI9F4[qY0gjD + (342 - 341)];
                    exBWrI9F4[qY0gjD + (526 - 525)] = CNt0FMHXJ;
                }
            }
            rdYUBFsNnoVC++;
        }
    }
    for (qY0gjD = 0; qY0gjD < Tb71S4Uh0kjE; qY0gjD++) {
        printf ("%.2lf ", enPBIHN1ogY[qY0gjD]);
    }
    for (qY0gjD = 0; qY0gjD < skvpAD42J - 1; qY0gjD++) {
        printf ("%.2lf ", exBWrI9F4[qY0gjD]);
    }
    printf ("%.2lf", exBWrI9F4[skvpAD42J - 1]);
    return 0;
}

