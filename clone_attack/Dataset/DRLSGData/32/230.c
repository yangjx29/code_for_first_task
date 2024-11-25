void  main () {
    char vGwTaiYmte [(550 - 500)] [(310 - 210)];
    int gSNrwUPBkg5L;
    int hnu4H9h;
    int gYCaDRkM;
    int XtduyOF3;
    char c3S5Uc4k [(886 - 836)] [(795 - 695)];
    scanf ("%d", &gSNrwUPBkg5L);
    for (XtduyOF3 = (145 - 145); gSNrwUPBkg5L > XtduyOF3; XtduyOF3++)
        scanf ("%s%s", c3S5Uc4k[XtduyOF3], vGwTaiYmte[XtduyOF3]);
    for (XtduyOF3 = (656 - 656); gSNrwUPBkg5L > XtduyOF3; XtduyOF3++) {
        for (gYCaDRkM = strlen (c3S5Uc4k[XtduyOF3]) - (577 - 576), hnu4H9h = strlen (vGwTaiYmte[XtduyOF3]) - (118 - 117); (381 - 381) <= hnu4H9h; gYCaDRkM--, hnu4H9h--) {
            c3S5Uc4k[XtduyOF3][gYCaDRkM] = c3S5Uc4k[XtduyOF3][gYCaDRkM] - vGwTaiYmte[XtduyOF3][hnu4H9h] + '0';
            if (c3S5Uc4k[XtduyOF3][gYCaDRkM] < '0') {
                c3S5Uc4k[XtduyOF3][gYCaDRkM] = c3S5Uc4k[XtduyOF3][gYCaDRkM] + (931 - 921);
                c3S5Uc4k[XtduyOF3][gYCaDRkM - (361 - 360)] = c3S5Uc4k[XtduyOF3][gYCaDRkM - (589 - 588)] - 1;
            }
        }
        printf ("%s\n", c3S5Uc4k[XtduyOF3]);
    }
}

