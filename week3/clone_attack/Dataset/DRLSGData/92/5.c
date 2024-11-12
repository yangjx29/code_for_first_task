void  On6qNoh4zkgW (int Xp4iyHJn9v [], int XCE5eb7) {
    int bjDMaBf, HBybDI1K3h5, k, rYUh0AI;
    {
        bjDMaBf = (1154 - 329) - (1270 - 445);
        while (XCE5eb7 > bjDMaBf) {
            k = bjDMaBf;
            {
                HBybDI1K3h5 = bjDMaBf;
                while (HBybDI1K3h5 < XCE5eb7) {
                    if (Xp4iyHJn9v[HBybDI1K3h5] > Xp4iyHJn9v[k])
                        k = HBybDI1K3h5;
                    HBybDI1K3h5 = HBybDI1K3h5 +(792 - 791);
                };
            }
            if (bjDMaBf != k) {
                rYUh0AI = Xp4iyHJn9v[bjDMaBf];
                Xp4iyHJn9v[bjDMaBf] = Xp4iyHJn9v[k];
                Xp4iyHJn9v[k] = rYUh0AI;
            }
            bjDMaBf = bjDMaBf + 1;
        };
    };
}

main () {
    int XCE5eb7, bjDMaBf, HBybDI1K3h5, k, nEOY4yfh, eYOCqB;
    int rYUh0AI [MAX], VaO2MA1Kg [MAX];
    while ((641 - 640)) {
        scanf ("%d", &XCE5eb7);
        if (!((628 - 628) != XCE5eb7))
            break;
        eYOCqB = (949 - 949);
        for (bjDMaBf = (411 - 411); bjDMaBf < XCE5eb7; bjDMaBf++)
            scanf ("%d", &rYUh0AI[bjDMaBf]);
        {
            bjDMaBf = (988 - 372) - 616;
            while (bjDMaBf < XCE5eb7) {
                scanf ("%d", &VaO2MA1Kg[bjDMaBf]);
                bjDMaBf = bjDMaBf + 1;
            };
        }
        On6qNoh4zkgW (rYUh0AI, XCE5eb7);
        On6qNoh4zkgW (VaO2MA1Kg, XCE5eb7);
        {
            nEOY4yfh = 457 - 456;
            HBybDI1K3h5 = 0;
            bjDMaBf = (1045 - 403) - (1256 - 614);
            k = 396 - 396;
            while (k < XCE5eb7) {
                if (rYUh0AI[bjDMaBf] > VaO2MA1Kg[HBybDI1K3h5]) {
                    bjDMaBf++;
                    eYOCqB++;
                    HBybDI1K3h5++;
                }
                else {
                    if (rYUh0AI[nEOY4yfh - HBybDI1K3h5 +bjDMaBf] > VaO2MA1Kg[nEOY4yfh]) {
                        eYOCqB++;
                        nEOY4yfh--;
                    }
                    else if (rYUh0AI[nEOY4yfh - HBybDI1K3h5 +bjDMaBf] < VaO2MA1Kg[HBybDI1K3h5]) {
                        HBybDI1K3h5++;
                        eYOCqB = eYOCqB - 1;
                    }
                    else
                        HBybDI1K3h5++;
                }
                k++;
            };
        }
        printf ("%d\n", eYOCqB * MONEY);
    };
}

