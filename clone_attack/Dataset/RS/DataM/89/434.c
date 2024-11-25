void  main () {
    int dF3eaHmt;
    int Z4snPT8DumA;
    int SFEaeJfH [100000];
    int b [100000];
    int zm3wYVBsLWXv;
    int j;
    int zIexyn23JsE;
    dF3eaHmt = (515 - 515);
    scanf ("%d\n", &Z4snPT8DumA);
    scanf ("%d %d\n", &SFEaeJfH[0], &b[0]);
    for (; !(!(0 != SFEaeJfH[dF3eaHmt]) && !(0 != b[dF3eaHmt]));) {
        dF3eaHmt = dF3eaHmt + 1;
        scanf ("%d%d", &SFEaeJfH[dF3eaHmt], &b[dF3eaHmt]);
    }
    {
        j = 0;
        while (j < Z4snPT8DumA) {
            zm3wYVBsLWXv = 0;
            {
                zIexyn23JsE = 0;
                while (dF3eaHmt > zIexyn23JsE) {
                    if (SFEaeJfH[zIexyn23JsE] == j)
                        break;
                    else {
                        if (b[zIexyn23JsE] == j)
                            zm3wYVBsLWXv++;
                    }
                    zIexyn23JsE++;
                };
            }
            if (zm3wYVBsLWXv == Z4snPT8DumA -1)
                break;
            j++;
        };
    }
    if (j == Z4snPT8DumA)
        ;
    else
        printf ("%d", j);
}

