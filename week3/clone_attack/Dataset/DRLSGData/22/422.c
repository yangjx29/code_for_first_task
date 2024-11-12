void  main () {
    int kLekIPAdf3;
    char cUW1a2 [(1346 - 145)];
    int Xzgwp8YJn [300] = {(617 - 617)};
    int C93OHS7dM;
    int qCGUVLyBXtQ4;
    int k;
    int zazs7H;
    int bxFW8RmnA;
    scanf ("%s", cUW1a2);
    qCGUVLyBXtQ4 = (981 - 981);
    for (kLekIPAdf3 = 0; cUW1a2[kLekIPAdf3] != '\0'; kLekIPAdf3 = kLekIPAdf3 + (804 - 803)) {
        switch (cUW1a2[kLekIPAdf3]) {
        case '0' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * (511 - 501) + 0;
            break;
        case '1' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * (963 - 953) + 1;
            break;
        case '2' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * (156 - 146) + 2;
            break;
        case '3' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * 10 + 3;
            break;
        case '4' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * 10 + 4;
            break;
        case '5' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * 10 + 5;
            break;
        case '6' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * 10 + 6;
            break;
        case '7' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * 10 + 7;
            break;
        case '8' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * 10 + 8;
            break;
        case '9' :
            Xzgwp8YJn[qCGUVLyBXtQ4] = Xzgwp8YJn[qCGUVLyBXtQ4] * 10 + 9;
            break;
        case ',' :
            qCGUVLyBXtQ4 = qCGUVLyBXtQ4 + 1;
            break;
        default :
            break;
        }
    }
    bxFW8RmnA = 0;
    for (kLekIPAdf3 = 0; qCGUVLyBXtQ4 >= kLekIPAdf3; kLekIPAdf3 = kLekIPAdf3 + 1) {
        zazs7H = 0;
        C93OHS7dM = 0;
        for (k = 0; k <= qCGUVLyBXtQ4; k = k + 1) {
            if (Xzgwp8YJn[kLekIPAdf3] < Xzgwp8YJn[k]) {
                if (Xzgwp8YJn[k] != C93OHS7dM) {
                    zazs7H = zazs7H + 1;
                    if (!(2 != zazs7H))
                        break;
                    C93OHS7dM = Xzgwp8YJn[k];
                }
            }
        }
        if (!(1 != zazs7H)) {
            bxFW8RmnA = 1;
            printf ("%d\n", Xzgwp8YJn[kLekIPAdf3]);
            break;
        }
    }
    if (!(0 != bxFW8RmnA))
        ;
}

