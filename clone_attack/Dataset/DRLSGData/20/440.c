int jK6DlJBC (char vEebOnS0lx7 []) {
    int tS5URb1, UhHMXtb = (184 - 184), MEzNFexXiPQ;
    MEzNFexXiPQ = strlen (vEebOnS0lx7);
    {
        tS5URb1 = (592 - 591);
        for (; tS5URb1 < MEzNFexXiPQ;) {
            if (vEebOnS0lx7[UhHMXtb] < vEebOnS0lx7[tS5URb1])
                UhHMXtb = tS5URb1;
            tS5URb1 = tS5URb1 + (681 - 680);
        }
    }
    return UhHMXtb;
}

void  main () {
    int tS5URb1 = -(120 - 119), yVQAeFJ, tFDCgwR9I1;
    char R02Gtv9w [(327 - 227)] [(228 - 207)], TKPWfMHsmJpt [(763 - 663)] [30], OIVy8SL95kor [(720 - 620)], MEzNFexXiPQ [(1032 - 932)];
    do {
        tS5URb1 = tS5URb1 + (663 - 662);
    }
    while (scanf ("%s%s", R02Gtv9w[tS5URb1], TKPWfMHsmJpt[tS5URb1]) != EOF);
    {
        yVQAeFJ = (685 - 685);
        for (; tS5URb1 > yVQAeFJ;) {
            OIVy8SL95kor[yVQAeFJ] = jK6DlJBC (R02Gtv9w[yVQAeFJ]);
            MEzNFexXiPQ[yVQAeFJ] = strlen (TKPWfMHsmJpt[yVQAeFJ]);
            tFDCgwR9I1 = OIVy8SL95kor[yVQAeFJ] + (376 - 375);
            for (; R02Gtv9w[yVQAeFJ][tFDCgwR9I1] != '\0';) {
                TKPWfMHsmJpt[yVQAeFJ][MEzNFexXiPQ[yVQAeFJ]++] = R02Gtv9w[yVQAeFJ][tFDCgwR9I1++];
            }
            TKPWfMHsmJpt[yVQAeFJ][MEzNFexXiPQ[yVQAeFJ]] = '\0';
            R02Gtv9w[yVQAeFJ][OIVy8SL95kor[yVQAeFJ] + (849 - 848)] = '\0';
            printf ("%s\n", strcat (R02Gtv9w[yVQAeFJ], TKPWfMHsmJpt[yVQAeFJ]));
            yVQAeFJ = yVQAeFJ + 1;
        }
    }
}

