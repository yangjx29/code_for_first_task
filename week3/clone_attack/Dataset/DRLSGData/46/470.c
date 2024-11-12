void  main () {
    int FK8RMG [(159 - 59)] [(351 - 251)];
    int hDpIoFUC8;
    int mILfrodDGFH;
    int XKCRt15rpTh8;
    int mCNLe0Q;
    int v7aAfwlRI3;
    int nfcYoxpi;
    hDpIoFUC8 = (480 - 479);
    mILfrodDGFH = (224 - 224);
    scanf ("%d %d", &v7aAfwlRI3, &nfcYoxpi);
    for (XKCRt15rpTh8 = (101 - 100); XKCRt15rpTh8 <= v7aAfwlRI3; XKCRt15rpTh8 = XKCRt15rpTh8 +1)
        for (mCNLe0Q = (668 - 667); mCNLe0Q <= nfcYoxpi; mCNLe0Q = mCNLe0Q + 1)
            scanf ("%d", &FK8RMG[XKCRt15rpTh8][mCNLe0Q]);
    XKCRt15rpTh8 = (592 - 591);
    mCNLe0Q = (570 - 570);
    for (; (219 - 218);) {
        if (mILfrodDGFH >= nfcYoxpi)
            break;
        for (XKCRt15rpTh8 = hDpIoFUC8, mCNLe0Q++; mCNLe0Q <= nfcYoxpi; mCNLe0Q++)
            printf ("%d\n", FK8RMG[XKCRt15rpTh8][mCNLe0Q]);
        mILfrodDGFH = mILfrodDGFH + 1;
        if (hDpIoFUC8 >= v7aAfwlRI3)
            break;
        for (mCNLe0Q = nfcYoxpi, XKCRt15rpTh8 = XKCRt15rpTh8 +1; XKCRt15rpTh8 <= v7aAfwlRI3; XKCRt15rpTh8++)
            printf ("%d\n", FK8RMG[XKCRt15rpTh8][mCNLe0Q]);
        hDpIoFUC8 = hDpIoFUC8 + 1;
        if (mILfrodDGFH >= nfcYoxpi)
            break;
        for (XKCRt15rpTh8 = v7aAfwlRI3, mCNLe0Q = mCNLe0Q - 1; mCNLe0Q >= mILfrodDGFH; mCNLe0Q--)
            printf ("%d\n", FK8RMG[XKCRt15rpTh8][mCNLe0Q]);
        nfcYoxpi--;
        if (hDpIoFUC8 >= v7aAfwlRI3)
            break;
        for (mCNLe0Q = mILfrodDGFH, XKCRt15rpTh8 = XKCRt15rpTh8 -1; XKCRt15rpTh8 >= hDpIoFUC8; XKCRt15rpTh8 = XKCRt15rpTh8 -1)
            printf ("%d\n", FK8RMG[XKCRt15rpTh8][mCNLe0Q]);
        v7aAfwlRI3 = v7aAfwlRI3 - 1;
    }
}

