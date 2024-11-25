int main () {
    int GAWcnopj18B;
    struct   student {
        char g6kmKqRN [20];
        int ox3dZPb4loz, PARgsfaw;
        char qMgwBQ, DogE0DQ;
        int P9By6EkLvtC;
    }
    OKdr3huIk [(228 - 128)];
    int QRq0r812 [100] = {(176 - 176)};
    int EJeqkTzcRHWt;
    int oAglLiK;
    int iGCBg2Zef;
    int KjK1P6N;
    scanf ("%d", &GAWcnopj18B);
    EJeqkTzcRHWt = 0;
    {
        iGCBg2Zef = 0;
        for (; GAWcnopj18B > iGCBg2Zef;) {
            scanf ("%s %d %d %c %c %d", OKdr3huIk[iGCBg2Zef].g6kmKqRN, &OKdr3huIk[iGCBg2Zef].ox3dZPb4loz, &OKdr3huIk[iGCBg2Zef].PARgsfaw, &OKdr3huIk[iGCBg2Zef].qMgwBQ, &OKdr3huIk[iGCBg2Zef].DogE0DQ, &OKdr3huIk[iGCBg2Zef].P9By6EkLvtC);
            if (((172 - 92) < OKdr3huIk[iGCBg2Zef].ox3dZPb4loz) && (OKdr3huIk[iGCBg2Zef].P9By6EkLvtC > 0))
                QRq0r812[iGCBg2Zef] += 8000;
            if ((85 < OKdr3huIk[iGCBg2Zef].ox3dZPb4loz) && (OKdr3huIk[iGCBg2Zef].PARgsfaw > (529 - 449)))
                QRq0r812[iGCBg2Zef] += 4000;
            if (90 < OKdr3huIk[iGCBg2Zef].ox3dZPb4loz)
                QRq0r812[iGCBg2Zef] += 2000;
            if ((OKdr3huIk[iGCBg2Zef].ox3dZPb4loz > 85) && (!('Y' != OKdr3huIk[iGCBg2Zef].DogE0DQ)))
                QRq0r812[iGCBg2Zef] += 1000;
            if ((OKdr3huIk[iGCBg2Zef].PARgsfaw > (922 - 842)) && (OKdr3huIk[iGCBg2Zef].qMgwBQ == 'Y'))
                QRq0r812[iGCBg2Zef] += 850;
            iGCBg2Zef = iGCBg2Zef + (32 - 31);
        }
    }
    KjK1P6N = 0;
    {
        iGCBg2Zef = 0;
        for (; iGCBg2Zef < GAWcnopj18B;) {
            if (QRq0r812[iGCBg2Zef] > EJeqkTzcRHWt) {
                EJeqkTzcRHWt = QRq0r812[iGCBg2Zef];
                oAglLiK = iGCBg2Zef;
            }
            KjK1P6N += QRq0r812[iGCBg2Zef];
            iGCBg2Zef = iGCBg2Zef + 1;
        }
    }
    printf ("%s\n", OKdr3huIk[oAglLiK].g6kmKqRN);
    printf ("%d\n", EJeqkTzcRHWt);
    printf ("%d", KjK1P6N);
}

