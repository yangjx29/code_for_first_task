void  main () {
    int nOp8yNVsxQtY;
    int HjCsr0;
    char nbhKBY3Ss18 [(601 - 586)];
    char myht0Mgouv;
    int gMSZwgtTqjo;
    char AKUu23Somw6 [(542 - 537)];
    int Lu0t9WYvGBgk;
    int LpJnlbhyU;
    for (; scanf ("%s%s", nbhKBY3Ss18, AKUu23Somw6) != EOF;) {
        myht0Mgouv = (974 - 974);
        nOp8yNVsxQtY = strlen (AKUu23Somw6);
        HjCsr0 = strlen (nbhKBY3Ss18);
        {
            gMSZwgtTqjo = (302 - 302);
            for (; gMSZwgtTqjo < HjCsr0;) {
                if (nbhKBY3Ss18[gMSZwgtTqjo] > myht0Mgouv)
                    myht0Mgouv = nbhKBY3Ss18[gMSZwgtTqjo];
                gMSZwgtTqjo = gMSZwgtTqjo + (352 - 351);
            }
        }
        for (LpJnlbhyU = (289 - 289);; LpJnlbhyU = LpJnlbhyU +(693 - 692)) {
            if (!(nbhKBY3Ss18[LpJnlbhyU] != myht0Mgouv))
                break;
        }
        {
            Lu0t9WYvGBgk = HjCsr0 -(358 - 357);
            for (; Lu0t9WYvGBgk >= LpJnlbhyU +(913 - 912);) {
                nbhKBY3Ss18[Lu0t9WYvGBgk +nOp8yNVsxQtY] = nbhKBY3Ss18[Lu0t9WYvGBgk];
                Lu0t9WYvGBgk = Lu0t9WYvGBgk -(674 - 673);
            }
        }
        {
            Lu0t9WYvGBgk = LpJnlbhyU +(98 - 97);
            for (; LpJnlbhyU +nOp8yNVsxQtY >= Lu0t9WYvGBgk;) {
                nbhKBY3Ss18[Lu0t9WYvGBgk] = AKUu23Somw6[Lu0t9WYvGBgk -LpJnlbhyU-(111 - 110)];
                Lu0t9WYvGBgk = Lu0t9WYvGBgk +1;
            }
        }
        nbhKBY3Ss18[HjCsr0 +nOp8yNVsxQtY] = '\0';
        printf ("%s\n", nbhKBY3Ss18);
    }
}

