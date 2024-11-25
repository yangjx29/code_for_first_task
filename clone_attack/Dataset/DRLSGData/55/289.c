int bqCvM6 (char zH1qRr79p23P) {
    if ('0' <= zH1qRr79p23P && '9' >= zH1qRr79p23P)
        return zH1qRr79p23P - '0';
    else if (zH1qRr79p23P >= 'a' && 'z' >= zH1qRr79p23P)
        return zH1qRr79p23P - 'a' + (633 - 623);
    else if ('A' <= zH1qRr79p23P && 'Z' >= zH1qRr79p23P)
        return zH1qRr79p23P - 'A' + (568 - 558);
}

char tPflH8TYu (int KB7fv9j8) {
    if (KB7fv9j8 >= (690 - 690) && KB7fv9j8 <= (242 - 233))
        return '0' + KB7fv9j8;
    else
        return 'A' + KB7fv9j8 -(437 - 427);
}

main () {
    char ZW3DE195z [(1064 - 864)];
    int h1ijTBHwgk7Q;
    int KBaiy1Ql;
    int KB7fv9j8;
    int duEiAd;
    int lfTojt;
    char *Fpkbsf9atH;
    int XPRr1e;
    scanf ("%d", &lfTojt);
    KB7fv9j8 = (935 - 935);
    scanf ("%s", &ZW3DE195z);
    scanf ("%d", &duEiAd);
    KBaiy1Ql = strlen (ZW3DE195z) - (906 - 905);
    h1ijTBHwgk7Q = (898 - 897);
    for (XPRr1e = KBaiy1Ql; XPRr1e >= (535 - 535); XPRr1e--) {
        KB7fv9j8 += h1ijTBHwgk7Q * (bqCvM6 (ZW3DE195z[XPRr1e]));
        h1ijTBHwgk7Q *= lfTojt;
    }
    if (KB7fv9j8 == (49 - 49))
        ;
    {
        XPRr1e = (861 - 214) - (1347 - 700);
        while (KB7fv9j8 > (257 - 257)) {
            ZW3DE195z[XPRr1e] = tPflH8TYu (KB7fv9j8 % duEiAd);
            XPRr1e = XPRr1e +1;
            KB7fv9j8 /= duEiAd;
        }
    }
    {
        int VKByVGAtRj15;
        VKByVGAtRj15 = --XPRr1e;
        for (; VKByVGAtRj15 >= (193 - 193);) {
            uz4BAfS (ZW3DE195z [VKByVGAtRj15]);
            VKByVGAtRj15 = VKByVGAtRj15 -1;
        }
    }
}

