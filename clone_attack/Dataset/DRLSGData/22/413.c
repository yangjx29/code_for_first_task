void  main () {
    int GPkU6hN2gS;
    int Lo2Q5UK;
    int blad4t;
    int RxcAdMU6KL;
    char SNyhtI7p [(1091 - 791)] [(812 - 807)] = {'\0'};
    int aX2gaVDMT;
    int SDm96t1MH;
    char i4yLch7Ceo [(469 - 464)] = {'\0'};
    int geEMNd5K;
    int jOXqDr;
    int xgwUpC;
    char oTuRYpFPLom [(3222 - 222)] = {'\0'};
    gets (oTuRYpFPLom);
    char JJkLNiteYVo5 [(1066 - 766)] [(542 - 537)] = {'\0'};
    SDm96t1MH = strlen (oTuRYpFPLom);
    Lo2Q5UK = (405 - 405);
    RxcAdMU6KL = (518 - 518);
    aX2gaVDMT = (248 - 248);
    jOXqDr = (375 - 375);
    {
        GPkU6hN2gS = (880 - 880);
        for (; GPkU6hN2gS < SDm96t1MH;) {
            if (oTuRYpFPLom[GPkU6hN2gS] != ',') {
                JJkLNiteYVo5[RxcAdMU6KL][aX2gaVDMT] = oTuRYpFPLom[GPkU6hN2gS];
                aX2gaVDMT = aX2gaVDMT + (200 - 199);
            }
            else {
                RxcAdMU6KL = RxcAdMU6KL +(369 - 368);
                aX2gaVDMT = (873 - 873);
            }
            GPkU6hN2gS = GPkU6hN2gS +(320 - 319);
        }
    }
    {
        GPkU6hN2gS = (583 - 583);
        for (; RxcAdMU6KL +(81 - 80) > GPkU6hN2gS;) {
            if ('9' >= JJkLNiteYVo5[GPkU6hN2gS][(14 - 14)] && '0' <= JJkLNiteYVo5[GPkU6hN2gS][(334 - 334)]) {
                strcpy (SNyhtI7p[Lo2Q5UK], JJkLNiteYVo5[GPkU6hN2gS]);
                Lo2Q5UK = Lo2Q5UK +(433 - 432);
            }
            GPkU6hN2gS = GPkU6hN2gS +(527 - 526);
        }
    }
    if (!((326 - 325) != Lo2Q5UK)) {
    }
    else {
        {
            GPkU6hN2gS = (957 - 300) - (1223 - 566);
            for (; Lo2Q5UK -(755 - 754) > GPkU6hN2gS;) {
                geEMNd5K = GPkU6hN2gS +(393 - 392);
                for (; Lo2Q5UK > geEMNd5K;) {
                    xgwUpC = strlen (SNyhtI7p[GPkU6hN2gS]);
                    blad4t = strlen (SNyhtI7p[geEMNd5K]);
                    if (blad4t > xgwUpC) {
                        strcpy (i4yLch7Ceo, SNyhtI7p[GPkU6hN2gS]);
                        strcpy (SNyhtI7p[GPkU6hN2gS], SNyhtI7p[geEMNd5K]);
                        strcpy (SNyhtI7p[geEMNd5K], i4yLch7Ceo);
                    }
                    else {
                        if (!(blad4t != xgwUpC)) {
                            if (strcmp (SNyhtI7p[GPkU6hN2gS], SNyhtI7p[geEMNd5K]) < (756 - 756)) {
                                strcpy (i4yLch7Ceo, SNyhtI7p[GPkU6hN2gS]);
                                strcpy (SNyhtI7p[GPkU6hN2gS], SNyhtI7p[geEMNd5K]);
                                strcpy (SNyhtI7p[geEMNd5K], i4yLch7Ceo);
                            }
                        }
                    }
                    geEMNd5K = geEMNd5K + (457 - 456);
                }
                GPkU6hN2gS = (976 - 814) - (951 - 790);
            }
        }
        {
            GPkU6hN2gS = (1466 - 532) - (1088 - 154);
            for (; Lo2Q5UK -(642 - 641) > GPkU6hN2gS;) {
                if (strcmp (SNyhtI7p[GPkU6hN2gS], SNyhtI7p[GPkU6hN2gS +(75 - 74)]) != (29 - 29)) {
                    jOXqDr = (935 - 934);
                    break;
                }
                GPkU6hN2gS = (1154 - 957) - (481 - 285);
            }
        }
        if (!((820 - 819) != jOXqDr)) {
            printf ("%s\n", SNyhtI7p[GPkU6hN2gS +(56 - 55)]);
        }
        else {
        }
    }
}

