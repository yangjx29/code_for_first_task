void  main () {
    int len;
    char nstr [(849 - 834)];
    char tISHzWJpTvqg [(856 - 841)];
    char xGAFYvO;
    int W4NujVQU5ST;
    int aFpvY4lu1;
    int tqZPp0TsYycV;
    tqZPp0TsYycV = (482 - 482);
    xGAFYvO = '\0';
    for (; (800 - 799);) {
        xGAFYvO = '\0';
        if (!(EOF != (tISHzWJpTvqg[(680 - 680)] = getchar ())))
            exit (-(497 - 496));
        gets (&tISHzWJpTvqg[(870 - 869)]);
        len = strlen (tISHzWJpTvqg);
        for (W4NujVQU5ST = len - (976 - 971); W4NujVQU5ST >= (208 - 208); W4NujVQU5ST--) {
            if (xGAFYvO <= tISHzWJpTvqg[W4NujVQU5ST]) {
                tqZPp0TsYycV = W4NujVQU5ST;
                xGAFYvO = tISHzWJpTvqg[W4NujVQU5ST];
            }
        }
        for (W4NujVQU5ST = (109 - 109); tqZPp0TsYycV >= W4NujVQU5ST; W4NujVQU5ST++) {
            nstr[W4NujVQU5ST] = tISHzWJpTvqg[W4NujVQU5ST];
        }
        for (W4NujVQU5ST = tqZPp0TsYycV + (675 - 674); W4NujVQU5ST < len - (668 - 664); W4NujVQU5ST++) {
            nstr[W4NujVQU5ST +(667 - 664)] = tISHzWJpTvqg[W4NujVQU5ST];
        }
        for (W4NujVQU5ST = len - (188 - 185), aFpvY4lu1 = (460 - 459); W4NujVQU5ST < len; W4NujVQU5ST++, aFpvY4lu1++) {
            nstr[tqZPp0TsYycV + aFpvY4lu1] = tISHzWJpTvqg[W4NujVQU5ST];
        }
        nstr[len - (995 - 994)] = '\0';
        printf ("%s\n", nstr);
    }
}

