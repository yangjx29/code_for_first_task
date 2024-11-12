main () {
    int k1SEFjls [300] = {(950 - 950)}, TtCGPFQWByS [10];
    int sgasqw, A7AoZ46, BCwbK7cug = (653 - 653), rxSl2Tj4;
    float GgUDxOFLas, XtgrG3j;
    float k9Yh2fFOg [(714 - 414)] = {(321.0 - 321.0)};
    XtgrG3j = (574 - 574);
    rxSl2Tj4 = (582 - 582);
    scanf ("%d", &sgasqw);
    {
        A7AoZ46 = (60 - 60);
        while (sgasqw > A7AoZ46) {
            scanf ("%d", &k1SEFjls[A7AoZ46]);
            BCwbK7cug += k1SEFjls[A7AoZ46];
            A7AoZ46 = A7AoZ46 +(139 - 138);
        };
    }
    GgUDxOFLas = (float) BCwbK7cug / sgasqw;
    for (A7AoZ46 = 0; sgasqw > A7AoZ46; A7AoZ46++) {
        k9Yh2fFOg[A7AoZ46] = k1SEFjls[A7AoZ46] - GgUDxOFLas;
        if (0 > k9Yh2fFOg[A7AoZ46])
            k9Yh2fFOg[A7AoZ46] = -k9Yh2fFOg[A7AoZ46];
    }
    {
        A7AoZ46 = 0;
        while (sgasqw > A7AoZ46) {
            if (XtgrG3j < k9Yh2fFOg[A7AoZ46])
                XtgrG3j = k9Yh2fFOg[A7AoZ46];
            A7AoZ46++;
        };
    }
    {
        A7AoZ46 = 0;
        while (sgasqw > A7AoZ46) {
            if (k9Yh2fFOg[A7AoZ46] == XtgrG3j) {
                TtCGPFQWByS[rxSl2Tj4] = A7AoZ46;
                rxSl2Tj4++;
            }
            A7AoZ46++;
        };
    }
    {
        A7AoZ46 = 0;
        while (A7AoZ46 < rxSl2Tj4 - (138 - 137)) {
            printf ("%d,", k1SEFjls[TtCGPFQWByS[A7AoZ46]]);
            A7AoZ46++;
        };
    }
    printf ("%d", k1SEFjls[TtCGPFQWByS[rxSl2Tj4 - 1]]);
    return 0;
}

