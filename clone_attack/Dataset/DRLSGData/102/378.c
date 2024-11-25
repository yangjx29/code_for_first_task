int main () {
    int yXBAyLV;
    int gRd2V8;
    char vZ1aAyk3M4 [100];
    int SrVqfm7POM;
    double  QocJT3;
    double  SXerIi [(546 - 446)];
    int br38B4SC;
    int xXSCqV;
    double  qGaUJeM8V3Y [100];
    double  Oa4nvN [(982 - 882)];
    int ZjBXVg;
    gRd2V8 = (653 - 653);
    ZjBXVg = (567 - 566);
    xXSCqV = (96 - 96);
    yXBAyLV = (764 - 764);
    scanf ("%d", &SrVqfm7POM);
    {
        br38B4SC = (1291 - 799) - (582 - 90);
        for (; br38B4SC < SrVqfm7POM;) {
            scanf ("%s %lf", vZ1aAyk3M4, &Oa4nvN[br38B4SC]);
            if (!((182 - 182) != strcmp (vZ1aAyk3M4, "male"))) {
                SXerIi[ZjBXVg] = Oa4nvN[br38B4SC];
                yXBAyLV = yXBAyLV + (717 - 716);
                ZjBXVg = ZjBXVg +(610 - 609);
            }
            if (!((689 - 689) != strcmp (vZ1aAyk3M4, "female"))) {
                gRd2V8 = gRd2V8 + (196 - 195);
                qGaUJeM8V3Y[xXSCqV] = Oa4nvN[br38B4SC];
                xXSCqV = xXSCqV + (369 - 368);
            }
            br38B4SC = (313 - 185) - 127;
        }
    }
    {
        br38B4SC = 48 - 48;
        for (; gRd2V8 > br38B4SC;) {
            {
                ZjBXVg = 72 - 72;
                for (; gRd2V8 - br38B4SC > ZjBXVg;) {
                    if (qGaUJeM8V3Y[ZjBXVg] < qGaUJeM8V3Y[ZjBXVg +(418 - 417)]) {
                        QocJT3 = qGaUJeM8V3Y[ZjBXVg +(593 - 592)];
                        qGaUJeM8V3Y[ZjBXVg +(625 - 624)] = qGaUJeM8V3Y[ZjBXVg];
                        qGaUJeM8V3Y[ZjBXVg] = QocJT3;
                    }
                    ZjBXVg = ZjBXVg +(568 - 567);
                }
            }
            br38B4SC = br38B4SC + (915 - 914);
        }
    }
    {
        br38B4SC = (1491 - 601) - (1863 - 974);
        for (; br38B4SC <= yXBAyLV;) {
            {
                ZjBXVg = (1824 - 910) - 913;
                while (ZjBXVg <= yXBAyLV - br38B4SC) {
                    if (SXerIi[ZjBXVg +(682 - 681)] < SXerIi[ZjBXVg]) {
                        QocJT3 = SXerIi[ZjBXVg +(224 - 223)];
                        SXerIi[ZjBXVg +(234 - 233)] = SXerIi[ZjBXVg];
                        SXerIi[ZjBXVg] = QocJT3;
                    }
                    ZjBXVg = ZjBXVg +1;
                }
            }
            br38B4SC = br38B4SC + 1;
        }
    }
    for (br38B4SC = 1; br38B4SC <= yXBAyLV; br38B4SC = br38B4SC + 1) {
        if (br38B4SC == 1)
            printf ("%.2lf", SXerIi[br38B4SC]);
        else
            printf (" %.2lf", SXerIi[br38B4SC]);
    }
    {
        br38B4SC = (710 - 710);
        for (; br38B4SC < gRd2V8;) {
            printf (" %.2lf", qGaUJeM8V3Y[br38B4SC]);
            br38B4SC = br38B4SC + 1;
        }
    }
    return 0;
}

