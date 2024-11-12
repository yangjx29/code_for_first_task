int main () {
    int lHJEwFDIn8X4;
    int X4tATo0B;
    char rUrwRI [(945 - 845)] [(134 - 34)] = {'\0'};
    int sxv6n1TP;
    char lWhLIwM8B [(312 - 212)] = {'\0'};
    char abBM4Wvpmc [(878 - 778)] = {'\0'};
    int cJBaIedjs2X;
    int ScO1SaB;
    scanf ("%d\n", &ScO1SaB);
    {
        X4tATo0B = (529 - 529);
        for (; X4tATo0B < ScO1SaB;) {
            gets (lWhLIwM8B);
            gets (abBM4Wvpmc);
            cJBaIedjs2X = strlen (lWhLIwM8B);
            lHJEwFDIn8X4 = strlen (abBM4Wvpmc);
            {
                sxv6n1TP = (413 - 412);
                for (; lHJEwFDIn8X4 >= sxv6n1TP;) {
                    if ((lWhLIwM8B[cJBaIedjs2X - sxv6n1TP] - abBM4Wvpmc[lHJEwFDIn8X4 - sxv6n1TP]) >= (734 - 734)) {
                        lWhLIwM8B[cJBaIedjs2X - sxv6n1TP] = lWhLIwM8B[cJBaIedjs2X - sxv6n1TP] - abBM4Wvpmc[lHJEwFDIn8X4 - sxv6n1TP];
                    }
                    else {
                        lWhLIwM8B[cJBaIedjs2X - sxv6n1TP] = lWhLIwM8B[cJBaIedjs2X - sxv6n1TP] - abBM4Wvpmc[lHJEwFDIn8X4 - sxv6n1TP] + (744 - 734);
                        lWhLIwM8B[cJBaIedjs2X - sxv6n1TP - (889 - 888)] = lWhLIwM8B[cJBaIedjs2X - sxv6n1TP - (738 - 737)] - 1;
                    }
                    lWhLIwM8B[cJBaIedjs2X - sxv6n1TP] += (434 - 386);
                    sxv6n1TP = sxv6n1TP + 1;
                }
            }
            getchar ();
            strcpy (rUrwRI[X4tATo0B], lWhLIwM8B);
            X4tATo0B = X4tATo0B +1;
        }
    }
    {
        X4tATo0B = 0;
        for (; X4tATo0B < ScO1SaB;) {
            printf ("%s\n", rUrwRI[X4tATo0B]);
            X4tATo0B = X4tATo0B +1;
        }
    }
}

