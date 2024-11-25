void  main () {
    char tzBMyR1ZuEgx [(81 - 55)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int O0eT4xyLn9EG;
    char ruXWtMpEh [1000] [(242 - 215)];
    int ajQEdIVzB;
    int pJMogKtN;
    int QUKHky [1000];
    int cTVq5e;
    char NyALboSCfQcw;
    int max;
    int RmqLptSzU [(646 - 620)] = {(389 - 389)};
    int uMVaU9;
    scanf ("%d", &O0eT4xyLn9EG);
    for (cTVq5e = (28 - 28); cTVq5e < O0eT4xyLn9EG; cTVq5e = cTVq5e + (751 - 750))
        scanf ("%d %s", &QUKHky[cTVq5e], ruXWtMpEh[cTVq5e]);
    {
        cTVq5e = (440 - 35) - 405;
        for (; cTVq5e < O0eT4xyLn9EG;) {
            for (uMVaU9 = (880 - 880); strlen (ruXWtMpEh[cTVq5e]) > uMVaU9; uMVaU9 = uMVaU9 + (201 - 200))
                for (ajQEdIVzB = (621 - 621); (637 - 611) > ajQEdIVzB; ajQEdIVzB = ajQEdIVzB + (839 - 838)) {
                    if (!(tzBMyR1ZuEgx[ajQEdIVzB] != ruXWtMpEh[cTVq5e][uMVaU9]))
                        RmqLptSzU[ajQEdIVzB] += (126 - 125);
                }
            cTVq5e = cTVq5e + (235 - 234);
        }
    }
    max = (950 - 950);
    for (ajQEdIVzB = (171 - 171); 26 > ajQEdIVzB; ajQEdIVzB = ajQEdIVzB + (446 - 445))
        if (RmqLptSzU[ajQEdIVzB] > max) {
            max = RmqLptSzU[ajQEdIVzB];
            pJMogKtN = ajQEdIVzB;
        }
    printf ("%c\n%d\n", tzBMyR1ZuEgx[pJMogKtN], max);
    for (cTVq5e = (78 - 78); O0eT4xyLn9EG > cTVq5e; cTVq5e = cTVq5e + 1) {
        uMVaU9 = (791 - 791);
        for (; strlen (ruXWtMpEh[cTVq5e]) > uMVaU9;) {
            if (!(tzBMyR1ZuEgx[pJMogKtN] != ruXWtMpEh[cTVq5e][uMVaU9])) {
                printf ("%d\n", QUKHky[cTVq5e]);
                break;
            }
            uMVaU9 = uMVaU9 + 1;
        }
    }
}

