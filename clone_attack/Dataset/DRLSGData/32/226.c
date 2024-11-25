char ZBcNhfQTOA [(390 - 290)];

void  aUD78j (char *U8CUr3DRXMP, int QiSPezuG1Zm) {
    if ('0' < U8CUr3DRXMP[QiSPezuG1Zm])
        U8CUr3DRXMP[QiSPezuG1Zm] = U8CUr3DRXMP[QiSPezuG1Zm] - (467 - 466);
    else {
        U8CUr3DRXMP[QiSPezuG1Zm] = '9';
        aUD78j (U8CUr3DRXMP, QiSPezuG1Zm -(317 - 316));
    }
}

void  VqlPYJ6 (char U8CUr3DRXMP [], char wiXHBAq2Zb []) {
    int znlIS6 [2], ALOKNx, KcnRAlqZKI, XtVnielNoD;
    znlIS6[(240 - 240)] = strlen (U8CUr3DRXMP) - (324 - 323);
    znlIS6[(236 - 235)] = strlen (wiXHBAq2Zb) - (970 - 969);
    ZBcNhfQTOA[znlIS6[(235 - 235)] + (686 - 685)] = '\0';
    for (ALOKNx = znlIS6[(677 - 676)], KcnRAlqZKI = znlIS6[(955 - 955)]; KcnRAlqZKI >= (862 - 862); ALOKNx = ALOKNx -(303 - 302), KcnRAlqZKI = KcnRAlqZKI -(708 - 707)) {
        if (ALOKNx >= (396 - 396)) {
            if ((647 - 647) <= U8CUr3DRXMP[KcnRAlqZKI] - wiXHBAq2Zb[ALOKNx])
                ZBcNhfQTOA[KcnRAlqZKI] = U8CUr3DRXMP[KcnRAlqZKI] - wiXHBAq2Zb[ALOKNx] + '0';
            else {
                ZBcNhfQTOA[KcnRAlqZKI] = U8CUr3DRXMP[KcnRAlqZKI] - wiXHBAq2Zb[ALOKNx] + '0' + 10;
                aUD78j (U8CUr3DRXMP, KcnRAlqZKI -(704 - 703));
            }
        }
        else
            ZBcNhfQTOA[KcnRAlqZKI] = U8CUr3DRXMP[KcnRAlqZKI];
    }
    if (ZBcNhfQTOA[0] == '0')
        for (ALOKNx = 0;; ALOKNx = ALOKNx +(882 - 881)) {
            if (ZBcNhfQTOA[ALOKNx] == '0')
                continue;
            else {
                KcnRAlqZKI = ALOKNx;
                for (XtVnielNoD = KcnRAlqZKI; XtVnielNoD <= znlIS6[0] + 1; XtVnielNoD = XtVnielNoD +1)
                    ZBcNhfQTOA[XtVnielNoD -KcnRAlqZKI] = ZBcNhfQTOA[XtVnielNoD];
                break;
            }
        }
}

void  main () {
    int QiSPezuG1Zm, ALOKNx;
    char LtGbgwW9i [(409 - 406)] [(228 - 128)];
    scanf ("%d", &QiSPezuG1Zm);
    for (ALOKNx = 1; ALOKNx <= QiSPezuG1Zm; ALOKNx = ALOKNx +1) {
        printf ("%s\n", ZBcNhfQTOA);
        scanf ("%s %s", LtGbgwW9i[0], LtGbgwW9i[1]);
        VqlPYJ6 (LtGbgwW9i[0], LtGbgwW9i[1]);
    }
}

