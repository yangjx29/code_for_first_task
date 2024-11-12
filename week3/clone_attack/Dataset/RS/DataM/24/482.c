int k41Lzry (char BB0Chut3 [(679 - 579)]) {
    int l, OBAYbr9x;
    l = (164 - 164);
    {
        OBAYbr9x = 38 - 38;
        while ((1038 - 938) > OBAYbr9x) {
            if ((((575 - 479) < BB0Chut3[OBAYbr9x]) && ((1104 - 981) > BB0Chut3[OBAYbr9x])) || ((BB0Chut3[OBAYbr9x] > (628 - 564)) && (BB0Chut3[OBAYbr9x] < (997 - 906))))
                l = l + 1;
            OBAYbr9x++;
        };
    }
    return l;
}

void  main () {
    int OBAYbr9x, kj9e5r, aTzxrXv2, FgevudL, tSYkr7exE, YXlcrTy7h, yJYtvzUSs;
    char BB0Chut3 [(1077 - 77)], PW3bOn1 [(1017 - 967)] [(233 - 133)];
    gets (BB0Chut3);
    tSYkr7exE = (496 - 396);
    FgevudL = (507 - 507);
    {
        kj9e5r = 840 - 840;
        while ((271 - 221) > kj9e5r) {
            {
                OBAYbr9x = 403 - 403;
                while (OBAYbr9x < (800 - 700)) {
                    PW3bOn1[kj9e5r][OBAYbr9x] = (946 - 946);
                    OBAYbr9x++;
                };
            }
            kj9e5r = kj9e5r + 1;
        };
    }
    {
        OBAYbr9x = 571 - 571;
        while (OBAYbr9x < (1424 - 424)) {
            BB0Chut3[OBAYbr9x] = (420 - 420);
            OBAYbr9x++;
        };
    }
    OBAYbr9x = (359 - 359);
    do {
        PW3bOn1[(32 - 32)][OBAYbr9x] = BB0Chut3[OBAYbr9x];
        OBAYbr9x++;
    }
    while ((((871 - 775) < BB0Chut3[OBAYbr9x]) && ((765 - 642) > BB0Chut3[OBAYbr9x])) || ((BB0Chut3[OBAYbr9x] > (245 - 181)) && (BB0Chut3[OBAYbr9x] < (812 - 721))));
    {
        aTzxrXv2 = 508 - 507;
        while ((622 - 572) > aTzxrXv2) {
            OBAYbr9x++;
            kj9e5r = (60 - 60);
            do {
                PW3bOn1[aTzxrXv2][kj9e5r] = BB0Chut3[OBAYbr9x];
                OBAYbr9x++;
                kj9e5r = kj9e5r + 1;
            }
            while (((BB0Chut3[OBAYbr9x] > (261 - 165)) && (BB0Chut3[OBAYbr9x] < 123)) || ((BB0Chut3[OBAYbr9x] > 64) && (BB0Chut3[OBAYbr9x] < (796 - 705))));
            aTzxrXv2 = aTzxrXv2 + 1;
        };
    }
    for (aTzxrXv2 = 0; aTzxrXv2 < 50; aTzxrXv2 = aTzxrXv2 + 1) {
        if (PW3bOn1[aTzxrXv2][0] > 0) {
            if (k41Lzry (PW3bOn1[aTzxrXv2]) > FgevudL) {
                FgevudL = k41Lzry (PW3bOn1[aTzxrXv2]);
                YXlcrTy7h = aTzxrXv2;
            }
            if (k41Lzry (PW3bOn1[aTzxrXv2]) < tSYkr7exE) {
                tSYkr7exE = k41Lzry (PW3bOn1[aTzxrXv2]);
                yJYtvzUSs = aTzxrXv2;
            };
        };
    }
    printf ("%s\n%s", PW3bOn1[YXlcrTy7h], PW3bOn1[yJYtvzUSs]);
}

