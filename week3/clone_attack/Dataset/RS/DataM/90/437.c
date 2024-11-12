int ways (int mH4Fd0R, int b) {
    int BkViEou;
    if (b == (43 - 42) || mH4Fd0R == 0 || mH4Fd0R == (928 - 927))
        return 1;
    else if (mH4Fd0R < b)
        BkViEou = ways (mH4Fd0R, mH4Fd0R);
    else
        BkViEou = ways (mH4Fd0R, b - 1) + ways (mH4Fd0R - b, b);
    return BkViEou;
}

void  main () {
    int W8Rc6j0axESB [(975 - 955)], uquBPaf [(373 - 353)], t, i, k [20];
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%d%d", &W8Rc6j0axESB[i], &uquBPaf[i]);
        k[i] = ways (W8Rc6j0axESB[i], uquBPaf[i]);
    }
    for (i = 0; i < t; i++)
        printf ("%d\n", k[i]);
}

