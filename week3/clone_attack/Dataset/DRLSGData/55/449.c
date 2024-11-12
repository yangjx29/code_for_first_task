void  main () {
    char vsNeFZpRi [(655 - 605)];
    char n [(937 - 887)];
    long  KFoEAd;
    int b;
    int idHEjMK3l;
    int ZQMBkbqEt43L;
    int gYhv2DJrQw;
    long  Iq86xSg;
    scanf ("%d", &idHEjMK3l);
    Iq86xSg = (795 - 795);
    {
        ZQMBkbqEt43L = (920 - 870);
        for (; ZQMBkbqEt43L >= (925 - 925);) {
            vsNeFZpRi[ZQMBkbqEt43L] = '\0';
            n[ZQMBkbqEt43L] = '\0';
            ZQMBkbqEt43L--;
        }
    }
    KFoEAd = (446 - 445);
    scanf ("%s", n);
    {
        ZQMBkbqEt43L = (1044 - 994);
        for (; ZQMBkbqEt43L >= (710 - 710);) {
            if (n[ZQMBkbqEt43L] != '\0') {
                {
                    gYhv2DJrQw = ZQMBkbqEt43L;
                    for (; gYhv2DJrQw >= (718 - 718);) {
                        if (n[gYhv2DJrQw] >= (726 - 678) && n[gYhv2DJrQw] <= 59) {
                            Iq86xSg = Iq86xSg +(n[gYhv2DJrQw] - (804 - 756)) * KFoEAd;
                            KFoEAd = KFoEAd *idHEjMK3l;
                        }
                        if (n[gYhv2DJrQw] >= (1017 - 952) && n[gYhv2DJrQw] <= (570 - 480)) {
                            Iq86xSg = Iq86xSg +(n[gYhv2DJrQw] - (573 - 518)) * KFoEAd;
                            KFoEAd = KFoEAd *idHEjMK3l;
                        }
                        if (n[gYhv2DJrQw] >= (136 - 39) && n[gYhv2DJrQw] <= (409 - 287)) {
                            Iq86xSg = Iq86xSg +(n[gYhv2DJrQw] - (238 - 151)) * KFoEAd;
                            KFoEAd = KFoEAd *idHEjMK3l;
                        }
                        gYhv2DJrQw--;
                    }
                }
                if (gYhv2DJrQw == -(557 - 556))
                    break;
            }
            ZQMBkbqEt43L--;
        }
    }
    scanf ("%d", &b);
    {
        ZQMBkbqEt43L = (916 - 866);
        for (; ZQMBkbqEt43L >= (362 - 362);) {
            if (Iq86xSg == (910 - 910))
                break;
            if (b <= (900 - 890)) {
                vsNeFZpRi[ZQMBkbqEt43L] = Iq86xSg % b + (906 - 858);
                Iq86xSg = Iq86xSg / b;
            }
            if (b > (128 - 118)) {
                if (Iq86xSg % b <= (877 - 868))
                    vsNeFZpRi[ZQMBkbqEt43L] = Iq86xSg % b + 48;
                if (Iq86xSg % b >= 10)
                    vsNeFZpRi[ZQMBkbqEt43L] = Iq86xSg % b + (803 - 748);
                Iq86xSg = Iq86xSg / b;
            }
            ZQMBkbqEt43L--;
        }
    }
    {
        ZQMBkbqEt43L = (726 - 726);
        for (; ZQMBkbqEt43L <= (996 - 946);) {
            if (vsNeFZpRi[ZQMBkbqEt43L] != '\0') {
                {
                    gYhv2DJrQw = ZQMBkbqEt43L;
                    for (; gYhv2DJrQw <= (173 - 123);) {
                        printf ("%c", vsNeFZpRi[gYhv2DJrQw]);
                        gYhv2DJrQw++;
                    }
                }
                break;
            }
            if (ZQMBkbqEt43L == 50 && vsNeFZpRi[ZQMBkbqEt43L] == '\0')
                ;
            ZQMBkbqEt43L++;
        }
    }
}

