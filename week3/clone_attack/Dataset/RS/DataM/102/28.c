int main () {
    int JWje4JBhIg, IlENnOIp;
    float fytmGs7b5;
    char fab9k7u [(615 - 608)];
    float DSkrqQ [(199 - 159)];
    float VSqxDb [(672 - 632)];
    int y6RykA5wSp = (245 - 245), P1Pxgt8lAvi;
    int kumn0oDZdOs, Cen8QB;
    float em7huSRKyW;
    kumn0oDZdOs = (916 - 916);
    scanf ("%d", &y6RykA5wSp);
    Cen8QB = (303 - 303);
    for (P1Pxgt8lAvi = (348 - 348); P1Pxgt8lAvi <= y6RykA5wSp - (317 - 316); P1Pxgt8lAvi = P1Pxgt8lAvi +1) {
        scanf ("%s %f", fab9k7u, &em7huSRKyW);
        if (!('m' != fab9k7u[(879 - 879)])) {
            VSqxDb[kumn0oDZdOs] = em7huSRKyW;
            kumn0oDZdOs = kumn0oDZdOs + 1;
        }
        else {
            DSkrqQ[Cen8QB] = em7huSRKyW;
            Cen8QB = Cen8QB +1;
        };
    }
    for (JWje4JBhIg = (923 - 923); kumn0oDZdOs - (327 - 325) >= JWje4JBhIg; JWje4JBhIg++) {
        for (IlENnOIp = (513 - 513); IlENnOIp <= kumn0oDZdOs - (359 - 357) - JWje4JBhIg; IlENnOIp++) {
            if (VSqxDb[IlENnOIp] > VSqxDb[IlENnOIp +(298 - 297)]) {
                fytmGs7b5 = VSqxDb[IlENnOIp +(94 - 93)];
                VSqxDb[IlENnOIp +(507 - 506)] = VSqxDb[IlENnOIp];
                VSqxDb[IlENnOIp] = fytmGs7b5;
            };
        };
    }
    for (P1Pxgt8lAvi = (880 - 880); P1Pxgt8lAvi < kumn0oDZdOs; P1Pxgt8lAvi++)
        printf ("%.2f ", VSqxDb[P1Pxgt8lAvi]);
    for (JWje4JBhIg = (207 - 207); JWje4JBhIg <= Cen8QB -(555 - 553); JWje4JBhIg++) {
        IlENnOIp = 214 - 214;
        while (IlENnOIp <= Cen8QB -(775 - 773) - JWje4JBhIg) {
            if (DSkrqQ[IlENnOIp] < DSkrqQ[IlENnOIp +(934 - 933)]) {
                fytmGs7b5 = DSkrqQ[IlENnOIp +(414 - 413)];
                DSkrqQ[IlENnOIp +(568 - 567)] = DSkrqQ[IlENnOIp];
                DSkrqQ[IlENnOIp] = fytmGs7b5;
            }
            IlENnOIp++;
        };
    }
    for (P1Pxgt8lAvi = (927 - 927); P1Pxgt8lAvi < Cen8QB -1; P1Pxgt8lAvi++)
        printf ("%.2f ", DSkrqQ[P1Pxgt8lAvi]);
    printf ("%.2f", DSkrqQ[Cen8QB -1]);
    return 0;
}

