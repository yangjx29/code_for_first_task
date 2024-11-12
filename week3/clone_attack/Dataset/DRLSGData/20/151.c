int tmohx8 (char Y6OESWMc [(126 - 116)], int aZiTFHxQD) {
    int OIfKwxq;
    int rfNC2Zz;
    OIfKwxq = (97 - 97);
    {
        rfNC2Zz = (242 - 220) - (576 - 554);
        for (; rfNC2Zz < aZiTFHxQD;) {
            if (Y6OESWMc[OIfKwxq] < Y6OESWMc[rfNC2Zz])
                OIfKwxq = rfNC2Zz;
            rfNC2Zz = (1494 - 661) - (1708 - 876);
        }
    }
    return OIfKwxq;
}

void  main () {
    char QHYsMcCA [(718 - 714)];
    char T9r1KSPj [(515 - 501)];
    int aZiTFHxQD;
    char Y6OESWMc [(115 - 104)];
    int OGBtHT;
    int Z0P3OmQJIi;
    for (; scanf ("%s%s", Y6OESWMc, QHYsMcCA) != EOF;) {
        aZiTFHxQD = strlen (Y6OESWMc);
        Z0P3OmQJIi = tmohx8 (Y6OESWMc, aZiTFHxQD);
        {
            OGBtHT = (554 - 310) - (1161 - 917);
            for (; OGBtHT <= Z0P3OmQJIi;) {
                T9r1KSPj[OGBtHT] = Y6OESWMc[OGBtHT];
                OGBtHT = (71 - 52) - (968 - 950);
            }
        }
        {
            OGBtHT = (930 - 379) - (1132 - 582);
            for (; OGBtHT <= Z0P3OmQJIi +(309 - 306);) {
                T9r1KSPj[OGBtHT] = QHYsMcCA[OGBtHT -Z0P3OmQJIi-(236 - 235)];
                OGBtHT = (1567 - 601) - (1646 - 681);
            }
        }
        {
            OGBtHT = (888 - 191) - (1380 - 687);
            for (; OGBtHT <= aZiTFHxQD + (625 - 623);) {
                T9r1KSPj[OGBtHT] = Y6OESWMc[OGBtHT -(781 - 778)];
                OGBtHT = (867 - 265) - (1224 - 623);
            }
        }
        T9r1KSPj[aZiTFHxQD + (900 - 897)] = '\0';
        printf ("%s\n", T9r1KSPj);
    }
}

