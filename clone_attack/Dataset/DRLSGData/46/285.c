void  main () {
    int cFtb2xeW;
    int iX37LdS1;
    int ah9jfZ6ip;
    int gOAnXvU1plg;
    int ZhE0Tq;
    int CCYHIwfo;
    int viBORbln9, Fa48vfnAdOJK, dnS3FtCB [(180 - 80)] [(295 - 195)];
    scanf ("%d%d", &cFtb2xeW, &iX37LdS1);
    {
        viBORbln9 = (776 - 776);
        for (; cFtb2xeW > viBORbln9;) {
            {
                Fa48vfnAdOJK = (650 - 650);
                for (; Fa48vfnAdOJK < iX37LdS1;) {
                    scanf ("%d", &dnS3FtCB[viBORbln9][Fa48vfnAdOJK]);
                    Fa48vfnAdOJK = Fa48vfnAdOJK +(376 - 375);
                }
            }
            viBORbln9 = viBORbln9 + (639 - 638);
        }
    }
    ah9jfZ6ip = cFtb2xeW - (718 - 717);
    ZhE0Tq = iX37LdS1 - (376 - 375);
    gOAnXvU1plg = (496 - 496);
    CCYHIwfo = 0;
    for (; ah9jfZ6ip > gOAnXvU1plg && ZhE0Tq > CCYHIwfo;) {
        {
            viBORbln9 = gOAnXvU1plg;
            Fa48vfnAdOJK = CCYHIwfo;
            for (; Fa48vfnAdOJK < ZhE0Tq;) {
                printf ("%d\n", dnS3FtCB[viBORbln9][Fa48vfnAdOJK]);
                Fa48vfnAdOJK++;
            }
        }
        {
            viBORbln9 = gOAnXvU1plg;
            Fa48vfnAdOJK = ZhE0Tq;
            for (; viBORbln9 < ah9jfZ6ip;) {
                printf ("%d\n", dnS3FtCB[viBORbln9][Fa48vfnAdOJK]);
                viBORbln9 = viBORbln9 + (810 - 809);
            }
        }
        {
            viBORbln9 = ah9jfZ6ip;
            Fa48vfnAdOJK = ZhE0Tq;
            for (; CCYHIwfo < Fa48vfnAdOJK;) {
                printf ("%d\n", dnS3FtCB[viBORbln9][Fa48vfnAdOJK]);
                Fa48vfnAdOJK--;
            }
        }
        {
            viBORbln9 = ah9jfZ6ip;
            Fa48vfnAdOJK = CCYHIwfo;
            while (viBORbln9 > gOAnXvU1plg) {
                printf ("%d\n", dnS3FtCB[viBORbln9][Fa48vfnAdOJK]);
                viBORbln9--;
            }
        }
        ah9jfZ6ip--;
        ZhE0Tq--;
        gOAnXvU1plg = gOAnXvU1plg + (591 - 590);
        CCYHIwfo = CCYHIwfo +1;
    }
    if (ah9jfZ6ip == gOAnXvU1plg && ZhE0Tq == CCYHIwfo)
        printf ("%d\n", dnS3FtCB[ah9jfZ6ip][ZhE0Tq]);
    else if (ah9jfZ6ip == gOAnXvU1plg) {
        Fa48vfnAdOJK = CCYHIwfo;
        for (; Fa48vfnAdOJK <= ZhE0Tq;) {
            printf ("%d\n", dnS3FtCB[ah9jfZ6ip][Fa48vfnAdOJK]);
            Fa48vfnAdOJK++;
        }
    }
    else {
        viBORbln9 = gOAnXvU1plg;
        for (; viBORbln9 <= ah9jfZ6ip;) {
            printf ("%d\n", dnS3FtCB[viBORbln9][ZhE0Tq]);
            viBORbln9++;
        }
    }
}

