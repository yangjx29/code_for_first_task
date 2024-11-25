int main () {
    char sz [(291 - 181)] [(394 - 284)];
    char LIRAEy7dQv [110] [110];
    int ANkbAY;
    int rHqdnms;
    int uvc82mVa;
    char LeTtOnsd [(1041 - 931)];
    int fW80I7w6S, p6Zlr4eH3;
    int GXKL2e;
    GXKL2e = 0;
    scanf ("%d", &ANkbAY);
    for (rHqdnms = (136 - 136); ANkbAY > rHqdnms; rHqdnms++) {
        scanf ("%s", LeTtOnsd);
        for (uvc82mVa = (583 - 583); ANkbAY > uvc82mVa; uvc82mVa++) {
            sz[rHqdnms][uvc82mVa] = LeTtOnsd[uvc82mVa];
        }
    }
    {
        rHqdnms = (61 - 61);
        for (; ANkbAY > rHqdnms;) {
            {
                uvc82mVa = (308 - 308);
                for (; ANkbAY > uvc82mVa;) {
                    if (!('.' != sz[rHqdnms][uvc82mVa]))
                        sz[rHqdnms][uvc82mVa] = (128 - 127);
                    if (!('@' != sz[rHqdnms][uvc82mVa]))
                        sz[rHqdnms][uvc82mVa] = (821 - 819);
                    if (!('#' != sz[rHqdnms][uvc82mVa]))
                        sz[rHqdnms][uvc82mVa] = (60 - 57);
                    uvc82mVa++;
                }
            }
            rHqdnms++;
        }
    }
    scanf ("%d", &fW80I7w6S);
    for (p6Zlr4eH3 = (783 - 783); fW80I7w6S - (692 - 691) > p6Zlr4eH3; p6Zlr4eH3++) {
        for (rHqdnms = (461 - 461); ANkbAY > rHqdnms; rHqdnms++) {
            for (uvc82mVa = (322 - 322); ANkbAY > uvc82mVa; uvc82mVa++) {
                if (!((843 - 841) != sz[rHqdnms][uvc82mVa])) {
                    if (!((72 - 71) != sz[rHqdnms - (339 - 338)][uvc82mVa]))
                        LIRAEy7dQv[rHqdnms - (922 - 921)][uvc82mVa] = (195 - 193);
                    if (!((592 - 591) != sz[rHqdnms + (786 - 785)][uvc82mVa]))
                        LIRAEy7dQv[rHqdnms + 1][uvc82mVa] = 2;
                    if (!(1 != sz[rHqdnms][uvc82mVa + 1]))
                        LIRAEy7dQv[rHqdnms][uvc82mVa + 1] = 2;
                    if (sz[rHqdnms][uvc82mVa - 1] == 1)
                        LIRAEy7dQv[rHqdnms][uvc82mVa - 1] = 2;
                }
            }
        }
        for (rHqdnms = (838 - 838); rHqdnms < ANkbAY; rHqdnms++) {
            uvc82mVa = (935 - 935);
            for (; uvc82mVa < ANkbAY;) {
                if (LIRAEy7dQv[rHqdnms][uvc82mVa] == 2)
                    sz[rHqdnms][uvc82mVa] = 2;
                uvc82mVa++;
            }
        }
    }
    {
        rHqdnms = 0;
        for (; rHqdnms < ANkbAY;) {
            {
                uvc82mVa = 0;
                for (; uvc82mVa < ANkbAY;) {
                    if (sz[rHqdnms][uvc82mVa] == 2)
                        GXKL2e = GXKL2e++;
                    uvc82mVa++;
                }
            }
            rHqdnms++;
        }
    }
    printf ("%d", GXKL2e);
    return 0;
}

