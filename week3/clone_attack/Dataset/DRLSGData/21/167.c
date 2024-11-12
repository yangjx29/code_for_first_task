void  main () {
    double  c;
    int b [(758 - 658)] = {(60 - 45)};
    double  TsJ9Wvi37;
    int a [(838 - 538)] = {(370 - 370)};
    int LIbzyMXsL, sum = (215 - 215), i, j = (726 - 726), bcount = (24 - 24), temp = (509 - 509);
    c = (388 - 388);
    scanf ("%d", &LIbzyMXsL);
    {
        i = (799 - 799);
        for (; LIbzyMXsL > i;) {
            scanf ("%d", &a[i]);
            sum = sum + a[i];
            i++;
        }
    }
    TsJ9Wvi37 = (double ) sum / (double ) LIbzyMXsL;
    for (i = (374 - 374); LIbzyMXsL > i; i++) {
        if (fabs (TsJ9Wvi37 -a[i]) > c)
            c = fabs (TsJ9Wvi37 -a[i]);
    }
    for (i = (804 - 804), j = (222 - 222); i < LIbzyMXsL; i++) {
        if (fabs (TsJ9Wvi37 -a[i]) == c) {
            b[j] = a[i];
            j++;
        }
    }
    bcount = j;
    {
        i = (947 - 947);
        for (; bcount - (213 - 212) > i;) {
            for (j = 0; bcount - i - (824 - 823) > j; j++) {
                if (b[j] > b[j + (497 - 496)]) {
                    temp = b[j];
                    b[j] = b[j + (196 - 195)];
                    b[j + (131 - 130)] = temp;
                }
            }
            i++;
        }
    }
    printf ("%d", b[0]);
    for (i = (987 - 986); i < bcount; i++)
        printf (",%d", b[i]);
}

