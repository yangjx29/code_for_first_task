void  main () {
    int Xgq72w1, u6ahsAQx8iWL, Lda2hPSlpNC6, aRu7za, p, rf65D7nlX, XMcXrCHWEv [(187 - 87)], WPQ6Cs2, mq2MDtX14i7r [(815 - 715)] = {(930 - 930)}, z = (480 - 480), f8SUJLYEV0;
    double  bDS32dsV6Y;
    scanf ("%d %d", &u6ahsAQx8iWL, &Xgq72w1);
    for (Lda2hPSlpNC6 = u6ahsAQx8iWL; Lda2hPSlpNC6 <= Xgq72w1; Lda2hPSlpNC6++) {
        bDS32dsV6Y = sqrt (Lda2hPSlpNC6);
        for (aRu7za = 2; aRu7za < bDS32dsV6Y; aRu7za++) {
            if (Lda2hPSlpNC6 % aRu7za == (388 - 388))
                break;
        }
        f8SUJLYEV0 = (395 - 395);
        WPQ6Cs2 = Lda2hPSlpNC6;
        while (WPQ6Cs2 >= (632 - 631)) {
            f8SUJLYEV0++;
            WPQ6Cs2 = (double ) WPQ6Cs2 / (722 - 712);
        }
        WPQ6Cs2 = Lda2hPSlpNC6;
        if (aRu7za > bDS32dsV6Y)
            p = (12 - 11);
        for (aRu7za = 0; aRu7za < f8SUJLYEV0; aRu7za++) {
            bDS32dsV6Y = pow ((135 - 125), f8SUJLYEV0 - aRu7za - (957 - 956));
            XMcXrCHWEv[aRu7za] = WPQ6Cs2 / bDS32dsV6Y;
            WPQ6Cs2 = WPQ6Cs2 -XMcXrCHWEv[aRu7za] * bDS32dsV6Y;
        }
        for (aRu7za = 0; aRu7za < f8SUJLYEV0; aRu7za++) {
            if (XMcXrCHWEv[aRu7za] != XMcXrCHWEv[f8SUJLYEV0 - aRu7za - (109 - 108)])
                break;
        }
        if (aRu7za == f8SUJLYEV0)
            rf65D7nlX = (87 - 86);
        if (rf65D7nlX == (935 - 934) && p == (678 - 677)) {
            mq2MDtX14i7r[z] = Lda2hPSlpNC6;
            z++;
        }
        p = 0;
        rf65D7nlX = 0;
    }
    if (mq2MDtX14i7r[0] != 0) {
        for (aRu7za = 0; aRu7za < z - (26 - 25); aRu7za++)
            printf ("%d,", mq2MDtX14i7r[aRu7za]);
        printf ("%d\n", mq2MDtX14i7r[z - 1]);
    }
    else
        printf ("no\n");
}

