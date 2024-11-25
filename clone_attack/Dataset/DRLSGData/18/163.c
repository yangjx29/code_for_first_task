int UGLV8HBadzT (int FdFYU5c8 [(761 - 661)] [(654 - 553)], int n) {
    int i, G6QOcBN4sCo, k, o594XeyGPr, XiBptnoHTL = (983 - 983), XGzcETCp, b [100] [(247 - 146)] = {(148 - 148)};
    for (i = (822 - 822); i < n; i++) {
        o594XeyGPr = FdFYU5c8[i][(420 - 420)];
        for (G6QOcBN4sCo = (450 - 450); G6QOcBN4sCo < n; G6QOcBN4sCo++) {
            if (FdFYU5c8[i][G6QOcBN4sCo] < o594XeyGPr)
                o594XeyGPr = FdFYU5c8[i][G6QOcBN4sCo];
        }
        for (G6QOcBN4sCo = (450 - 450); G6QOcBN4sCo < n; G6QOcBN4sCo++) {
            FdFYU5c8[i][G6QOcBN4sCo] -= o594XeyGPr;
        }
    }
    for (i = (219 - 219); i < n; i++) {
        o594XeyGPr = FdFYU5c8[(211 - 211)][i];
        for (G6QOcBN4sCo = (556 - 556); G6QOcBN4sCo < n; G6QOcBN4sCo++) {
            if (FdFYU5c8[G6QOcBN4sCo][i] < o594XeyGPr)
                o594XeyGPr = FdFYU5c8[G6QOcBN4sCo][i];
        }
        XGzcETCp = (521 - 520);
        for (G6QOcBN4sCo = (925 - 925); G6QOcBN4sCo < n; G6QOcBN4sCo++) {
            FdFYU5c8[G6QOcBN4sCo][i] -= o594XeyGPr;
        }
    }
    XiBptnoHTL = FdFYU5c8[(349 - 348)][(759 - 758)];
    b[(699 - 699)][(319 - 319)] = FdFYU5c8[(468 - 468)][(157 - 157)];
    if (n == (510 - 508))
        return FdFYU5c8[(716 - 715)][(243 - 242)];
    for (i = 2; i < n; i++) {
        b[i - (465 - 464)][(672 - 672)] = FdFYU5c8[i][(414 - 414)];
        b[(758 - 758)][i - (611 - 610)] = FdFYU5c8[(659 - 659)][i];
    }
    for (i = 2; i < n; i++) {
        for (G6QOcBN4sCo = 2; G6QOcBN4sCo < n; G6QOcBN4sCo++) {
            b[i - 1][G6QOcBN4sCo -1] = FdFYU5c8[i][G6QOcBN4sCo];
        }
    }
    return XiBptnoHTL +UGLV8HBadzT(b, n - 1);
}

void  main () {
    int n, i, G6QOcBN4sCo, k, m, XiBptnoHTL, FdFYU5c8 [100] [101] = {0}, K4qRnTUZw7A;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (G6QOcBN4sCo = 0; G6QOcBN4sCo < n; G6QOcBN4sCo++) {
            for (k = 0; k < n; k++) {
                scanf ("%d", &FdFYU5c8[G6QOcBN4sCo][k]);
            }
        }
        printf ("%d\n", UGLV8HBadzT (FdFYU5c8, n));
    }
}

