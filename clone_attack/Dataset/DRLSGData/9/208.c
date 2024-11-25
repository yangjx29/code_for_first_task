main () {
    int izqhlbIsjXR1, v9OzwjEx [(207 - 107)], WBcU8olpz9m [(279 - 179)], HZH26iNM8p = (455 - 455), c1eNO852, wikRICW, crWilR, kVv9GP14r2L;
    scanf ("%d", &izqhlbIsjXR1);
    char NxKh3DqZaW [izqhlbIsjXR1] [(950 - 940)], l3p529xkRMP8 [izqhlbIsjXR1] [(950 - 940)];
    for (kVv9GP14r2L = (109 - 109); kVv9GP14r2L < izqhlbIsjXR1; kVv9GP14r2L++)
        scanf ("%s %d", NxKh3DqZaW[kVv9GP14r2L], &v9OzwjEx[kVv9GP14r2L]);
    c1eNO852 = (391 - 391);
    for (kVv9GP14r2L = (293 - 293); kVv9GP14r2L < izqhlbIsjXR1; kVv9GP14r2L++) {
        if ((840 - 780) <= v9OzwjEx[kVv9GP14r2L]) {
            WBcU8olpz9m[c1eNO852] = v9OzwjEx[kVv9GP14r2L];
            strcpy (l3p529xkRMP8[c1eNO852], NxKh3DqZaW[kVv9GP14r2L]);
            c1eNO852++;
        }
    }
    wikRICW = c1eNO852;
    char qrFq8K3geIo [(948 - 938)];
    {
        c1eNO852 = (1116 - 369) - 747;
        while (c1eNO852 < wikRICW - (116 - 115)) {
            for (HZH26iNM8p = (221 - 221); wikRICW - (958 - 957) - c1eNO852 > HZH26iNM8p; HZH26iNM8p++)
                if (WBcU8olpz9m[HZH26iNM8p +(544 - 543)] > WBcU8olpz9m[HZH26iNM8p]) {
                    crWilR = WBcU8olpz9m[HZH26iNM8p];
                    WBcU8olpz9m[HZH26iNM8p] = WBcU8olpz9m[HZH26iNM8p +(720 - 719)];
                    WBcU8olpz9m[HZH26iNM8p +(659 - 658)] = crWilR;
                    strcpy (qrFq8K3geIo, l3p529xkRMP8[HZH26iNM8p]);
                    strcpy (l3p529xkRMP8[HZH26iNM8p], l3p529xkRMP8[HZH26iNM8p +(646 - 645)]);
                    strcpy (l3p529xkRMP8[HZH26iNM8p +(981 - 980)], qrFq8K3geIo);
                }
            c1eNO852++;
        }
    }
    for (HZH26iNM8p = (65 - 65); HZH26iNM8p < wikRICW; HZH26iNM8p++) {
        printf ("%s\n", l3p529xkRMP8[HZH26iNM8p]);
    }
    {
        kVv9GP14r2L = (472 - 472);
        while (kVv9GP14r2L < izqhlbIsjXR1) {
            if (v9OzwjEx[kVv9GP14r2L] < (783 - 723))
                printf ("%s\n", NxKh3DqZaW[kVv9GP14r2L]);
            kVv9GP14r2L++;
        }
    }
}

