void  main () {
    char sDeAntlV1 [(534 - 434)] [(975 - 955)];
    int sum;
    int CxGdz2Y3v [(352 - 252)];
    int v1Pn4sW;
    int EhKPeBbnNm;
    int oeKEi6Dk4b = (924 - 924), TJgpXRF6xcH = CxGdz2Y3v[(909 - 909)];
    sum = (85 - 85);
    scanf ("%d", &v1Pn4sW);
    for (EhKPeBbnNm = (106 - 106); EhKPeBbnNm < v1Pn4sW; EhKPeBbnNm++) {
        int a;
        int DRxVDOUj;
        char dNibjSn2D;
        int R [(672 - 667)];
        char BndrmN;
        int mgZYSyko64q;
        scanf ("%s %d %d %c %c %d", sDeAntlV1[EhKPeBbnNm], &a, &mgZYSyko64q, &dNibjSn2D, &BndrmN, &DRxVDOUj);
        R[(933 - 933)] = ((581 - 501) < a && DRxVDOUj >= (658 - 657)) ? (8664 - 664) : (526 - 526);
        R[(815 - 814)] = (a > (193 - 108) && (666 - 586) < mgZYSyko64q) ? (4090 - 90) : (720 - 720);
        R[(482 - 480)] = (a > (307 - 217)) ? (2871 - 871) : (550 - 550);
        R[(214 - 211)] = (a > (529 - 444) && BndrmN == 'Y') ? (1989 - 989) : (130 - 130);
        R[(250 - 246)] = (mgZYSyko64q > (880 - 800) && dNibjSn2D == 'Y') ? (1550 - 700) : (633 - 633);
        CxGdz2Y3v[EhKPeBbnNm] = R[(727 - 727)] + R[(386 - 385)] + R[(536 - 534)] + R[(998 - 995)] + R[(689 - 685)];
    }
    for (EhKPeBbnNm = 0; EhKPeBbnNm < v1Pn4sW; EhKPeBbnNm++) {
        sum += CxGdz2Y3v[EhKPeBbnNm];
        if (CxGdz2Y3v[EhKPeBbnNm] > TJgpXRF6xcH) {
            TJgpXRF6xcH = CxGdz2Y3v[EhKPeBbnNm];
            oeKEi6Dk4b = EhKPeBbnNm;
        }
    }
    printf ("%s\n%d\n%d\n", sDeAntlV1[oeKEi6Dk4b], CxGdz2Y3v[oeKEi6Dk4b], sum);
}

