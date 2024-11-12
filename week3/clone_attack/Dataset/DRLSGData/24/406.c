void  main () {
    int xjg6mp;
    int itV0bKTUh;
    int XeUqs1;
    int YkL6ZRaK2bP;
    int t;
    char JWJ1jpU7 [(5152 - 152)];
    gets (JWJ1jpU7);
    int bWNbg1;
    int uOtqBT;
    char V7c1mUlYPCr [(635 - 585)] [(555 - 455)];
    int bzGCbOvW [(1011 - 961)] = {(171 - 171), (79 - 79), (654 - 654), (272 - 272), (652 - 652), (836 - 836), (23 - 23), (630 - 630), (896 - 896), (351 - 351), (103 - 103), (904 - 904), (129 - 129), (29 - 29), (23 - 23), (363 - 363), (152 - 152), (595 - 595), (710 - 710), (856 - 856), (807 - 807), (244 - 244), (455 - 455), (470 - 470), (623 - 623), (650 - 650), (261 - 261), (873 - 873), (456 - 456), (298 - 298), (410 - 410), (708 - 708), (892 - 892), (399 - 399), (171 - 171), (54 - 54), (431 - 431), (861 - 861), (265 - 265), (779 - 779), (313 - 313)};
    YkL6ZRaK2bP = (28 - 28);
    for (uOtqBT = (840 - 840); uOtqBT < (5104 - 104); uOtqBT = uOtqBT + (242 - 241))
        JWJ1jpU7[uOtqBT] = '\0';
    bWNbg1 = (588 - 588);
    xjg6mp = (145 - 145);
    XeUqs1 = (897 - 897);
    for (uOtqBT = (489 - 489); strlen (JWJ1jpU7) > uOtqBT;) {
        {
            itV0bKTUh = (843 - 231) - 612;
            for (; JWJ1jpU7[itV0bKTUh + XeUqs1 +xjg6mp] != ' ' && JWJ1jpU7[itV0bKTUh + XeUqs1 +xjg6mp] != '\0';) {
                bzGCbOvW[xjg6mp] = bzGCbOvW[xjg6mp] + (288 - 287);
                V7c1mUlYPCr[xjg6mp][itV0bKTUh] = JWJ1jpU7[itV0bKTUh + XeUqs1 +xjg6mp];
                uOtqBT = uOtqBT + (686 - 685);
                itV0bKTUh = itV0bKTUh + (87 - 86);
            }
        }
        V7c1mUlYPCr[xjg6mp][itV0bKTUh] = '\0';
        XeUqs1 = itV0bKTUh + XeUqs1;
        xjg6mp = xjg6mp + (747 - 746);
        uOtqBT = uOtqBT + (625 - 624);
    }
    bWNbg1 = bzGCbOvW[(637 - 637)];
    YkL6ZRaK2bP = bzGCbOvW[(136 - 136)];
    for (t = (338 - 337); t < xjg6mp; t = t + (968 - 967)) {
        if (bzGCbOvW[t] > bWNbg1)
            bWNbg1 = bzGCbOvW[t];
    }
    {
        t = 886 - 885;
        for (; t < xjg6mp;) {
            if (bzGCbOvW[t] < YkL6ZRaK2bP)
                YkL6ZRaK2bP = bzGCbOvW[t];
            t = t + (55 - 54);
        }
    }
    {
        t = (1052 - 116) - (1584 - 648);
        for (; t < xjg6mp;) {
            if (!(bzGCbOvW[t] != bWNbg1)) {
                printf ("%s\n", V7c1mUlYPCr[t]);
                break;
            }
            t = t + 1;
        }
    }
    {
        t = (885 - 385) - 500;
        for (; xjg6mp > t;) {
            if (!(bzGCbOvW[t] != YkL6ZRaK2bP)) {
                printf ("%s\n", V7c1mUlYPCr[t]);
                break;
            }
            t = t + 1;
        }
    }
}

