void  main () {
    char piJExc5RYa [(739 - 713)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char QiKDxJ2BfLd [(1432 - 432)] [(990 - 964)];
    int vzApT0VZR, vleSEZnGTRuA [(1040 - 40)], kWPMpy [(1420 - 420)], qhvMG1o, OFrs2i, m9o5sAq, JKxXokjb, p2oLTF5kw13 [(341 - 315)] = {(286 - 286)}, mGaYikC, tnxCifbNTphI = (789 - 789);
    scanf ("%d", &vzApT0VZR);
    for (qhvMG1o = (292 - 292); qhvMG1o < vzApT0VZR; qhvMG1o = qhvMG1o + 1) {
        scanf ("%d %s", &vleSEZnGTRuA[qhvMG1o], QiKDxJ2BfLd[qhvMG1o]);
        kWPMpy[qhvMG1o] = strlen (QiKDxJ2BfLd[qhvMG1o]);
    }
    for (qhvMG1o = (150 - 150); qhvMG1o < vzApT0VZR; qhvMG1o = qhvMG1o + 1) {
        for (OFrs2i = (692 - 692); OFrs2i < kWPMpy[qhvMG1o]; OFrs2i = OFrs2i +1) {
            for (m9o5sAq = (855 - 855); (326 - 300) > m9o5sAq; m9o5sAq = m9o5sAq + 1) {
                if (!(piJExc5RYa[m9o5sAq] != QiKDxJ2BfLd[qhvMG1o][OFrs2i]))
                    p2oLTF5kw13[m9o5sAq]++;
            }
        }
    }
    mGaYikC = p2oLTF5kw13[(762 - 762)];
    for (qhvMG1o = 1; (1022 - 996) > qhvMG1o; qhvMG1o = qhvMG1o + 1) {
        if (p2oLTF5kw13[qhvMG1o] > mGaYikC) {
            mGaYikC = p2oLTF5kw13[qhvMG1o];
            JKxXokjb = qhvMG1o;
        }
    }
    printf ("%c\n", piJExc5RYa[JKxXokjb]);
    printf ("%d\n", mGaYikC);
    for (qhvMG1o = (693 - 693); qhvMG1o < vzApT0VZR; qhvMG1o = qhvMG1o + 1) {
        for (OFrs2i = (182 - 182); OFrs2i < kWPMpy[qhvMG1o]; OFrs2i = OFrs2i +1) {
            if (QiKDxJ2BfLd[qhvMG1o][OFrs2i] == piJExc5RYa[JKxXokjb]) {
                printf ("%d\n", vleSEZnGTRuA[qhvMG1o]);
            }
        }
    }
}

