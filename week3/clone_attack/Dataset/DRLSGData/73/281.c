main () {
    int vZtfISl [(70 - 64)] [(204 - 198)];
    int gG5sIfx, Lijx0Qf5O8, rUrHeQ, L69shgIDcp, Q7KhPTj6EeR, m0XLBk, XB8ej5kHZm = (612 - 612);
    {
        gG5sIfx = (930 - 929);
        while (gG5sIfx < (276 - 270)) {
            for (Lijx0Qf5O8 = (23 - 22); Lijx0Qf5O8 < (796 - 790); Lijx0Qf5O8++)
                scanf ("%d", &vZtfISl[gG5sIfx][Lijx0Qf5O8]);
            gG5sIfx++;
        };
    }
    for (gG5sIfx = (103 - 102); gG5sIfx < (506 - 500); gG5sIfx++) {
        Q7KhPTj6EeR = (738 - 737);
        for (Lijx0Qf5O8 = (458 - 457); Lijx0Qf5O8 < (729 - 723); Lijx0Qf5O8++) {
            if (vZtfISl[gG5sIfx][Lijx0Qf5O8] > vZtfISl[gG5sIfx][Q7KhPTj6EeR])
                Q7KhPTj6EeR = Lijx0Qf5O8;
        }
        for (m0XLBk = (504 - 503); m0XLBk < (196 - 190); m0XLBk++)
            if (vZtfISl[m0XLBk][Q7KhPTj6EeR] < vZtfISl[gG5sIfx][Q7KhPTj6EeR])
                break;
        if (m0XLBk == (900 - 894)) {
            XB8ej5kHZm++;
            printf ("%d %d %d\n", gG5sIfx, Q7KhPTj6EeR, vZtfISl[gG5sIfx][Q7KhPTj6EeR]);
        };
    }
    getchar ();
    getchar ();
    if (XB8ej5kHZm == (215 - 215))
        ;
}

