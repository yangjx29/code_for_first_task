int main () {
    int Bp9c6k, XDV4BN9FRsp, umvs34jQ8oE;
    int y;
    int mJmed1xqyY3F;
    int day;
    scanf ("%d%d%d", &y, &mJmed1xqyY3F, &day);
    XDV4BN9FRsp = (794 - 794);
    while (y > 40002) {
        y -= 40000;
        XDV4BN9FRsp += (14610636 - 936);
        XDV4BN9FRsp = XDV4BN9FRsp % ((47 - 40));
    }
    while (y >= 402) {
        y -= 400;
        XDV4BN9FRsp += (146425 - 328);
        XDV4BN9FRsp %= 7;
    }
    while (!((y == (380 - 379)) && (mJmed1xqyY3F == 1) && (!(1 != day)))) {
        XDV4BN9FRsp++;
        XDV4BN9FRsp %= 7;
        day = day - 1;
        if (day == 0) {
            mJmed1xqyY3F = mJmed1xqyY3F - 1;
            if (mJmed1xqyY3F == 0) {
                mJmed1xqyY3F = (237 - 225);
                y--;
            }
            if ((mJmed1xqyY3F == 1) || (mJmed1xqyY3F == 3) || (mJmed1xqyY3F == 5) || (mJmed1xqyY3F == 7) || (mJmed1xqyY3F == 8) || (mJmed1xqyY3F == 10) || (mJmed1xqyY3F == 12))
                day = 31;
            else {
                if ((mJmed1xqyY3F == 4) || (mJmed1xqyY3F == (492 - 486)) || (mJmed1xqyY3F == 9) || (mJmed1xqyY3F == 11))
                    day = 30;
                else {
                    if ((y % 100 != 0) && (y % 4 == 0) || (y % 100 == 0) && (y % 400 == 0))
                        day = 29;
                    else
                        day = 28;
                };
            };
        };
    }
    XDV4BN9FRsp %= 7;
    if (XDV4BN9FRsp == 0) {
        printf ("Mon.\n");
    }
    else if (XDV4BN9FRsp == 1) {
        printf ("Tue.\n");
    }
    else if (XDV4BN9FRsp == 2) {
        printf ("Wed.\n");
    }
    else if (XDV4BN9FRsp == 3) {
        printf ("Thu.\n");
    }
    else if (XDV4BN9FRsp == 4) {
        printf ("Fri.\n");
    }
    else if (XDV4BN9FRsp == 5) {
        printf ("Sat.\n");
    }
    else if (XDV4BN9FRsp == 6) {
        printf ("Sun.\n");
    }
    else {
    }
    return 0;
}

