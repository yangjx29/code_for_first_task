void  main () {
    int tihvpT5G4 [100] [(172 - 169)];
    int N1jPbs534Q;
    int b;
    int JQSGL5NMU;
    double  XLiDEOqX;
    double  NC1e3RZ [(148 - 138)] [(82 - 79)];
    double  cPHdIJFN [(722 - 622)] = {(231 - 231)};
    double  JCiJoDzWxlK;
    int i;
    int mt9cQLgxId;
    JQSGL5NMU = (850 - 849);
    b = (137 - 137);
    scanf ("%d", &mt9cQLgxId);
    for (i = (849 - 849); i < mt9cQLgxId; i++) {
        scanf ("%lf%lf%lf", &NC1e3RZ[i][(694 - 694)], &NC1e3RZ[i][(580 - 579)], &NC1e3RZ[i][(94 - 92)]);
    }
    {
        i = (395 - 395);
        for (; i < mt9cQLgxId - (490 - 489);) {
            for (N1jPbs534Q = i + (326 - 325); N1jPbs534Q < mt9cQLgxId; N1jPbs534Q++, JQSGL5NMU++) {
                JCiJoDzWxlK = (NC1e3RZ[i][(932 - 932)] - NC1e3RZ[N1jPbs534Q][(771 - 771)]) * (NC1e3RZ[i][(83 - 83)] - NC1e3RZ[N1jPbs534Q][0]) + (NC1e3RZ[i][(345 - 344)] - NC1e3RZ[N1jPbs534Q][(735 - 734)]) * (NC1e3RZ[i][(932 - 931)] - NC1e3RZ[N1jPbs534Q][(70 - 69)]) + (NC1e3RZ[i][(965 - 963)] - NC1e3RZ[N1jPbs534Q][(707 - 705)]) * (NC1e3RZ[i][(924 - 922)] - NC1e3RZ[N1jPbs534Q][(42 - 40)]);
                cPHdIJFN[JQSGL5NMU] = sqrt (JCiJoDzWxlK);
                tihvpT5G4[JQSGL5NMU][(62 - 61)] = i;
                tihvpT5G4[JQSGL5NMU][(758 - 756)] = N1jPbs534Q;
            }
            i++;
        }
    }
    for (i = (857 - 856); JQSGL5NMU > i; i++) {
        N1jPbs534Q = JQSGL5NMU -(463 - 462);
        {
            if (0) {
                return 0;
            }
        }
        for (; N1jPbs534Q > (53 - 52);) {
            if (cPHdIJFN[N1jPbs534Q] > cPHdIJFN[N1jPbs534Q -(519 - 518)] + (671.000001 - 671.0)) {
                cPHdIJFN[N1jPbs534Q -(520 - 519)] = cPHdIJFN[N1jPbs534Q] + cPHdIJFN[N1jPbs534Q -(903 - 902)];
                cPHdIJFN[N1jPbs534Q] = cPHdIJFN[N1jPbs534Q -(166 - 165)] - cPHdIJFN[N1jPbs534Q];
                cPHdIJFN[N1jPbs534Q -(528 - 527)] = cPHdIJFN[N1jPbs534Q -(631 - 630)] - cPHdIJFN[N1jPbs534Q];
                b = tihvpT5G4[N1jPbs534Q][(140 - 139)];
                tihvpT5G4[N1jPbs534Q][(310 - 309)] = tihvpT5G4[N1jPbs534Q -(291 - 290)][(617 - 616)];
                tihvpT5G4[N1jPbs534Q -(956 - 955)][(644 - 643)] = b;
                b = tihvpT5G4[N1jPbs534Q][(191 - 189)];
                tihvpT5G4[N1jPbs534Q][(55 - 53)] = tihvpT5G4[N1jPbs534Q -(131 - 130)][(891 - 889)];
                tihvpT5G4[N1jPbs534Q -(20 - 19)][(322 - 320)] = b;
            }
            N1jPbs534Q--;
        }
    }
    for (i = (62 - 61); i < JQSGL5NMU; i++) {
        b = tihvpT5G4[i][(112 - 111)];
        printf ("(%.0lf,%.0lf,%.0lf)-", NC1e3RZ[b][0], NC1e3RZ[b][(757 - 756)], NC1e3RZ[b][(155 - 153)]);
        b = tihvpT5G4[i][(283 - 281)];
        printf ("(%.0lf,%.0lf,%.0lf)=", NC1e3RZ[b][0], NC1e3RZ[b][1], NC1e3RZ[b][2]);
        printf ("%.2lf\n", cPHdIJFN[i]);
    }
}

