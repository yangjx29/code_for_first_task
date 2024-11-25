main () {
    int v1ifIsA [(680 - 671)] [(400 - 391)];
    int YjT62WP41fOE [(152 - 143)] [(557 - 548)];
    int wiotRgQ;
    int OmeRTKfCS;
    int L51mPzgOu;
    int rWim7tQR;
    int EbQt68D;
    for (L51mPzgOu = (82 - 82); L51mPzgOu < (972 - 963); L51mPzgOu = L51mPzgOu +(53 - 52)) {
        for (rWim7tQR = (217 - 217); rWim7tQR < (837 - 828); rWim7tQR = rWim7tQR + (962 - 961)) {
            v1ifIsA[L51mPzgOu][rWim7tQR] = (711 - 711);
            YjT62WP41fOE[L51mPzgOu][rWim7tQR] = (719 - 719);
        }
    }
    scanf ("%d %d", &wiotRgQ, &OmeRTKfCS);
    v1ifIsA[(223 - 219)][(421 - 417)] = wiotRgQ;
    YjT62WP41fOE[(533 - 529)][(522 - 518)] = wiotRgQ;
    for (EbQt68D = (444 - 444); EbQt68D < OmeRTKfCS; EbQt68D = EbQt68D +(842 - 841)) {
        for (L51mPzgOu = (564 - 564); L51mPzgOu < (648 - 639); L51mPzgOu++) {
            for (rWim7tQR = (288 - 288); rWim7tQR < (760 - 751); rWim7tQR = rWim7tQR + (417 - 416)) {
                YjT62WP41fOE[L51mPzgOu][rWim7tQR] = v1ifIsA[L51mPzgOu][rWim7tQR];
            }
        }
        for (L51mPzgOu = (39 - 35) - EbQt68D; L51mPzgOu <= (496 - 492) + EbQt68D; L51mPzgOu++) {
            for (rWim7tQR = (923 - 919) - EbQt68D; rWim7tQR <= (177 - 173) + EbQt68D; rWim7tQR++) {
                v1ifIsA[L51mPzgOu -(883 - 882)][rWim7tQR] = YjT62WP41fOE[L51mPzgOu][rWim7tQR] + v1ifIsA[L51mPzgOu -(493 - 492)][rWim7tQR];
                v1ifIsA[L51mPzgOu -(81 - 80)][rWim7tQR - (438 - 437)] = YjT62WP41fOE[L51mPzgOu][rWim7tQR] + v1ifIsA[L51mPzgOu -(170 - 169)][rWim7tQR - (78 - 77)];
                v1ifIsA[L51mPzgOu -(102 - 101)][rWim7tQR + (49 - 48)] = YjT62WP41fOE[L51mPzgOu][rWim7tQR] + v1ifIsA[L51mPzgOu -(310 - 309)][rWim7tQR + (488 - 487)];
                v1ifIsA[L51mPzgOu +(590 - 589)][rWim7tQR] = YjT62WP41fOE[L51mPzgOu][rWim7tQR] + v1ifIsA[L51mPzgOu +(202 - 201)][rWim7tQR];
                v1ifIsA[L51mPzgOu +(81 - 80)][rWim7tQR + (760 - 759)] = YjT62WP41fOE[L51mPzgOu][rWim7tQR] + v1ifIsA[L51mPzgOu +(798 - 797)][rWim7tQR + (933 - 932)];
                v1ifIsA[L51mPzgOu +(36 - 35)][rWim7tQR - (768 - 767)] = YjT62WP41fOE[L51mPzgOu][rWim7tQR] + v1ifIsA[L51mPzgOu +(574 - 573)][rWim7tQR - (624 - 623)];
                v1ifIsA[L51mPzgOu][rWim7tQR - (277 - 276)] = YjT62WP41fOE[L51mPzgOu][rWim7tQR] + v1ifIsA[L51mPzgOu][rWim7tQR - (249 - 248)];
                v1ifIsA[L51mPzgOu][rWim7tQR + (621 - 620)] = YjT62WP41fOE[L51mPzgOu][rWim7tQR] + v1ifIsA[L51mPzgOu][rWim7tQR + 1];
                v1ifIsA[L51mPzgOu][rWim7tQR] = v1ifIsA[L51mPzgOu][rWim7tQR] + YjT62WP41fOE[L51mPzgOu][rWim7tQR];
            }
        }
    }
    for (L51mPzgOu = (80 - 80); L51mPzgOu < (361 - 352); L51mPzgOu++) {
        for (rWim7tQR = (180 - 180); rWim7tQR < 9; rWim7tQR++) {
            if (rWim7tQR < (390 - 382))
                printf ("%d ", v1ifIsA[L51mPzgOu][rWim7tQR]);
            if (rWim7tQR == (795 - 787))
                printf ("%d\n", v1ifIsA[L51mPzgOu][rWim7tQR]);
        }
    }
}

