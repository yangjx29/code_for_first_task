void  main () {
    char a [(640 - 540)] [(777 - 676)], R4oA0wTDh2qF [(220 - 120)] [(264 - 163)], c [(486 - 386)] [101];
    int aOjnqL8rBvJ, XrBTCvVaN1R, W6erPTkNszt, GOJsdfy [(283 - 183)], longb [100], XOlx87zZXA6 [100];
    getchar ();
    scanf ("%d", &aOjnqL8rBvJ);
    {
        XrBTCvVaN1R = (997 - 997);
        for (; XrBTCvVaN1R < aOjnqL8rBvJ;) {
            gets (a [XrBTCvVaN1R]);
            gets (R4oA0wTDh2qF [XrBTCvVaN1R]);
            GOJsdfy[XrBTCvVaN1R] = strlen (a[XrBTCvVaN1R]) - (716 - 715);
            longb[XrBTCvVaN1R] = strlen (R4oA0wTDh2qF[XrBTCvVaN1R]) - (376 - 375);
            getchar ();
            XrBTCvVaN1R++;
        }
    }
    for (XrBTCvVaN1R = (112 - 112); XrBTCvVaN1R < aOjnqL8rBvJ; XrBTCvVaN1R++) {
        {
            W6erPTkNszt = 0;
            for (; GOJsdfy[XrBTCvVaN1R] >= W6erPTkNszt;) {
                if (W6erPTkNszt <= longb[XrBTCvVaN1R]) {
                    c[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R] - W6erPTkNszt] = a[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R] - W6erPTkNszt] - R4oA0wTDh2qF[XrBTCvVaN1R][longb[XrBTCvVaN1R] - W6erPTkNszt] + (583 - 535);
                    if (c[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R] - W6erPTkNszt] < (107 - 59)) {
                        c[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R] - W6erPTkNszt] = c[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R] - W6erPTkNszt] + (772 - 762);
                        a[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R] - W6erPTkNszt -1]--;
                    }
                }
                else
                    c[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R] - W6erPTkNszt] = a[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R] - W6erPTkNszt];
                W6erPTkNszt++;
            }
        }
        {
            W6erPTkNszt = 0;
            XOlx87zZXA6[XrBTCvVaN1R] = 0;
            for (; W6erPTkNszt <= GOJsdfy[XrBTCvVaN1R];) {
                if (c[XrBTCvVaN1R][W6erPTkNszt] == (855 - 807))
                    XOlx87zZXA6[XrBTCvVaN1R]++;
                else
                    break;
                W6erPTkNszt++;
            }
        }
        {
            W6erPTkNszt = XrBTCvVaN1R;
            for (; W6erPTkNszt < GOJsdfy[XrBTCvVaN1R];) {
                printf ("%c", c[XrBTCvVaN1R][W6erPTkNszt]);
                W6erPTkNszt++;
            }
        }
        printf ("%c\n", c[XrBTCvVaN1R][GOJsdfy[XrBTCvVaN1R]]);
    }
}

