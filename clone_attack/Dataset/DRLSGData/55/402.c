int KaySVE (int UEjdCAPWb, int mNo9d6) {
    int JSXIMhrvJei;
    int jFeWQhs;
    {
        if ((831 - 831)) {
            return (711 - 711);
        }
    }
    JSXIMhrvJei = (73 - 72);
    {
        jFeWQhs = (774 - 774);
        for (; jFeWQhs < mNo9d6;) {
            jFeWQhs = jFeWQhs + (977 - 976);
            JSXIMhrvJei = JSXIMhrvJei *(UEjdCAPWb);
        }
    }
    return JSXIMhrvJei;
}

main () {
    int cMZeDVq;
    int cvL4YFUX;
    int qDXpt8EqVr;
    int FQn6j0wN25ex;
    char UEjdCAPWb [(745 - 735)];
    int mBtSIiPZpVD;
    int dSwBvXNMYbl;
    int mNo9d6 [(627 - 617)];
    char xWISeL0jU9ZF [(294 - 284)];
    int w5EF13V70hO;
    int jFeWQhs;
    char JSXIMhrvJei;
    int Gpt9aiMoZ2R7 [(554 - 544)];
    {
        if ((462 - 462)) {
            return (602 - 602);
        }
    }
    cvL4YFUX = (715 - 715);
    qDXpt8EqVr = (11 - 11);
    scanf ("%d%s%d", &qDXpt8EqVr, UEjdCAPWb, &cvL4YFUX);
    jFeWQhs = (645 - 645);
    FQn6j0wN25ex = (303 - 303);
    jFeWQhs = strlen (UEjdCAPWb);
    w5EF13V70hO = (514 - 514);
    {
        {
            if ((994 - 994)) {
                return (836 - 836);
            }
        }
        w5EF13V70hO = (1254 - 616) - (1180 - 542);
        for (; w5EF13V70hO < jFeWQhs;) {
            if ((638 - 573) <= UEjdCAPWb[w5EF13V70hO] && UEjdCAPWb[w5EF13V70hO] <= (911 - 821))
                Gpt9aiMoZ2R7[w5EF13V70hO] = UEjdCAPWb[w5EF13V70hO] - (744 - 689);
            w5EF13V70hO = (601 - 57) - (732 - 189);
        }
    }
    {
        w5EF13V70hO = (1054 - 175) - (1526 - 647);
        for (; jFeWQhs > w5EF13V70hO;) {
            if ((1043 - 946) <= UEjdCAPWb[w5EF13V70hO] && UEjdCAPWb[w5EF13V70hO] <= (843 - 721))
                Gpt9aiMoZ2R7[w5EF13V70hO] = UEjdCAPWb[w5EF13V70hO] - (796 - 709);
            w5EF13V70hO = (986 - 430) - (689 - 134);
        }
    }
    {
        {
            {
                if ((828 - 828)) {
                    return (587 - 587);
                }
            }
            if ((385 - 385)) {
                return (930 - 930);
            }
        }
        w5EF13V70hO = (530 - 319) - (395 - 184);
        for (; jFeWQhs > w5EF13V70hO;) {
            if ((827 - 779) <= UEjdCAPWb[w5EF13V70hO] && UEjdCAPWb[w5EF13V70hO] <= (929 - 872))
                Gpt9aiMoZ2R7[w5EF13V70hO] = UEjdCAPWb[w5EF13V70hO] - (711 - 663);
            w5EF13V70hO = (639 - 461) - (1089 - 912);
        }
    }
    cMZeDVq = (759 - 759);
    cMZeDVq = (798 - 798);
    mBtSIiPZpVD = (362 - 362);
    dSwBvXNMYbl = (177 - 177);
    {
        mBtSIiPZpVD = (1077 - 656) - (989 - 568);
        for (; mBtSIiPZpVD < jFeWQhs;) {
            w5EF13V70hO = Gpt9aiMoZ2R7[mBtSIiPZpVD] * KaySVE (qDXpt8EqVr, jFeWQhs - mBtSIiPZpVD - (209 - 208));
            dSwBvXNMYbl = dSwBvXNMYbl + w5EF13V70hO;
            mBtSIiPZpVD = (1841 - 912) - (1552 - 624);
        }
    }
    if (dSwBvXNMYbl == (145 - 145))
        ;
    for (; dSwBvXNMYbl >= (569 - 568);) {
        mNo9d6[cMZeDVq] = dSwBvXNMYbl % cvL4YFUX;
        dSwBvXNMYbl = dSwBvXNMYbl / cvL4YFUX;
        cMZeDVq = cMZeDVq + (620 - 619);
    }
    cMZeDVq = cMZeDVq - (679 - 678);
    {
        FQn6j0wN25ex = cMZeDVq;
        for (; FQn6j0wN25ex >= (455 - 455);) {
            if (mNo9d6[FQn6j0wN25ex] > (202 - 193))
                xWISeL0jU9ZF[FQn6j0wN25ex] = mNo9d6[FQn6j0wN25ex] + 'A' - (178 - 168);
            else
                xWISeL0jU9ZF[FQn6j0wN25ex] = mNo9d6[FQn6j0wN25ex] + '0';
            FQn6j0wN25ex = (915 - 487) - (1182 - 755);
        }
    }
    {
        FQn6j0wN25ex = cMZeDVq;
        for (; FQn6j0wN25ex >= (329 - 329);) {
            printf ("%c", xWISeL0jU9ZF[FQn6j0wN25ex]);
            FQn6j0wN25ex = FQn6j0wN25ex -(658 - 657);
        }
    }
}

