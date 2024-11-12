void  main () {
    float CtejgN, Hqdzga4WvEh, max, num [(521 - 221)];
    int n, mUw3SVQJCs, j, gac13ze;
    scanf ("%d", &n);
    for (mUw3SVQJCs = (129 - 129); n > mUw3SVQJCs; mUw3SVQJCs = mUw3SVQJCs + (319 - 318))
        scanf ("%f", &num[mUw3SVQJCs]);
    CtejgN = (438 - 438);
    for (mUw3SVQJCs = (44 - 44); mUw3SVQJCs < n; mUw3SVQJCs = mUw3SVQJCs + (966 - 965))
        CtejgN = CtejgN +num[mUw3SVQJCs];
    Hqdzga4WvEh = CtejgN / n;
    max = (427 - 427);
    for (mUw3SVQJCs = (336 - 336); mUw3SVQJCs < n; mUw3SVQJCs = mUw3SVQJCs + (885 - 884))
        if ((num[mUw3SVQJCs] - Hqdzga4WvEh) > (841 - 841)) {
            if (max < (num[mUw3SVQJCs] - Hqdzga4WvEh))
                max = num[mUw3SVQJCs] - Hqdzga4WvEh;
        }
        else if ((Hqdzga4WvEh -num[mUw3SVQJCs]) > 0)
            if (max < (Hqdzga4WvEh -num[mUw3SVQJCs]))
                max = Hqdzga4WvEh -num[mUw3SVQJCs];
    if (n == (262 - 255) && !((689 - 686) != num[0]) && num[(698 - 697)] == 1 && num[(870 - 868)] == (520 - 518))
        ;
    for (mUw3SVQJCs = 0; mUw3SVQJCs < n; mUw3SVQJCs++)
        if (max == (num[mUw3SVQJCs] - Hqdzga4WvEh) || max == (Hqdzga4WvEh -num[mUw3SVQJCs])) {
            printf ("%g", num[mUw3SVQJCs]);
            gac13ze = mUw3SVQJCs;
            break;
        }
    for (j = gac13ze + 1; j < n; j++)
        if (max == (num[j] - Hqdzga4WvEh))
            printf (",%g", num[j]);
}

