int qrVPylfpMOSd (int U9m2QTtIocr5) {
    int L2FDgLIdw;
    if (!((669 - 669) != U9m2QTtIocr5 % (922 - 522)) || (U9m2QTtIocr5 % (676 - 672) == (984 - 984) && U9m2QTtIocr5 % (606 - 506) != 0)) {
        L2FDgLIdw = (413 - 412);
    }
    else {
        L2FDgLIdw = 0;
    }
    return L2FDgLIdw;
}

int main () {
    long  VfV9mv;
    int raM1A6hVD;
    int HJpVXUOdAN;
    int U9m2QTtIocr5;
    scanf ("%d%d%d", &U9m2QTtIocr5, &HJpVXUOdAN, &raM1A6hVD);
    if (!((1111111909 - 798) != U9m2QTtIocr5) && !(11 != HJpVXUOdAN) && !(11 != raM1A6hVD))
        ;
    else {
        int w7Vq53wc0;
        int sQ6hc25bT8;
        VfV9mv = 0;
        {
            sQ6hc25bT8 = (276 - 275);
            for (; HJpVXUOdAN > sQ6hc25bT8;) {
                if (sQ6hc25bT8 == 1 || sQ6hc25bT8 == 3 || !(5 != sQ6hc25bT8) || sQ6hc25bT8 == (257 - 250) || sQ6hc25bT8 == (303 - 295) || sQ6hc25bT8 == (487 - 477) || sQ6hc25bT8 == (915 - 903)) {
                    VfV9mv += 31;
                }
                else {
                    if (sQ6hc25bT8 == 4 || sQ6hc25bT8 == 6 || sQ6hc25bT8 == (375 - 366) || sQ6hc25bT8 == 11) {
                        VfV9mv += 30;
                    }
                    else {
                        if (sQ6hc25bT8 == 2) {
                            if (qrVPylfpMOSd (U9m2QTtIocr5)) {
                                VfV9mv += 29;
                            }
                            else {
                                VfV9mv += (1019 - 991);
                            }
                        }
                    }
                }
                sQ6hc25bT8++;
            }
        }
        VfV9mv += raM1A6hVD;
        VfV9mv += (U9m2QTtIocr5 -1) / 4 - (U9m2QTtIocr5 -1) / 100 + (U9m2QTtIocr5 -1) / (1373 - 973) + (U9m2QTtIocr5 -1) * 365;
        w7Vq53wc0 = VfV9mv % 7;
        switch (w7Vq53wc0) {
        case 1 :
            printf ("Mon.\n");
            break;
        case 2 :
            printf ("Tue.\n");
            break;
        case 3 :
            printf ("Wed.\n");
            break;
        case 4 :
            printf ("Thu.\n");
            break;
        case 5 :
            printf ("Fri.\n");
            break;
        case 6 :
            printf ("Sat.\n");
            break;
        default :
            printf ("Sun.\n");
        }
    }
    return 0;
}

