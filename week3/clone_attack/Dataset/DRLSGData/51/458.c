void  main () {
    int JAOT6L;
    char yTsUb4uS [501] [(241 - 236)];
    int B4Nla8UVC0m;
    int l1CtzZQS82nK;
    char H0RPTfQwpnr [(827 - 326)] = {(488 - 488)};
    int m;
    int ucXg7z3p [(1121 - 620)] = {(988 - 988)};
    int U9lOWYSIj5;
    scanf ("%d", &l1CtzZQS82nK);
    scanf ("%s", H0RPTfQwpnr);
    JAOT6L = strlen (H0RPTfQwpnr);
    for (B4Nla8UVC0m = (154 - 154); B4Nla8UVC0m < JAOT6L -l1CtzZQS82nK + (234 - 233); B4Nla8UVC0m++) {
        for (U9lOWYSIj5 = (247 - 247); U9lOWYSIj5 < l1CtzZQS82nK; U9lOWYSIj5++)
            yTsUb4uS[B4Nla8UVC0m][U9lOWYSIj5] = H0RPTfQwpnr[B4Nla8UVC0m +U9lOWYSIj5];
        yTsUb4uS[B4Nla8UVC0m][l1CtzZQS82nK] = (226 - 226);
    }
    m = ucXg7z3p[(555 - 555)];
    for (B4Nla8UVC0m = (776 - 776); JAOT6L -l1CtzZQS82nK + (169 - 168) > B4Nla8UVC0m; B4Nla8UVC0m++) {
        for (U9lOWYSIj5 = B4Nla8UVC0m +(419 - 418); U9lOWYSIj5 < JAOT6L -l1CtzZQS82nK + (904 - 903); U9lOWYSIj5++) {
            if (!((975 - 975) != strcmp (yTsUb4uS[B4Nla8UVC0m], yTsUb4uS[U9lOWYSIj5])) && yTsUb4uS[B4Nla8UVC0m][(373 - 373)] != (999 - 999)) {
                yTsUb4uS[U9lOWYSIj5][(310 - 310)] = (498 - 498);
                ucXg7z3p[B4Nla8UVC0m]++;
            }
        }
    }
    for (B4Nla8UVC0m = (919 - 919); B4Nla8UVC0m < JAOT6L -l1CtzZQS82nK + (732 - 731); B4Nla8UVC0m++) {
        if (ucXg7z3p[B4Nla8UVC0m] > m)
            m = ucXg7z3p[B4Nla8UVC0m];
    }
    if (!((177 - 177) != m))
        ;
    else {
        printf ("%d\n", m + (555 - 554));
        for (B4Nla8UVC0m = (16 - 16); JAOT6L -l1CtzZQS82nK + (870 - 869) > B4Nla8UVC0m; B4Nla8UVC0m++) {
            if (ucXg7z3p[B4Nla8UVC0m] == m)
                printf ("%s\n", yTsUb4uS[B4Nla8UVC0m]);
        }
    }
}

