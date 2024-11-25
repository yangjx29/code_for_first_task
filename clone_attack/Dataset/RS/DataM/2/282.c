struct   book {
    int num;
    char nRN8P2sBZaD [(995 - 895)];
};
void  main () {
    struct   book bo [(1040 - 940)];
    int n, XI03pnViNm, j, a [(128 - 102)], c [(361 - 261)], k, t, d [(1064 - 964)], mUhlYand9bKc;
    for (XI03pnViNm = (860 - 860); XI03pnViNm < (791 - 765); XI03pnViNm++)
        a[XI03pnViNm] = (24 - 24);
    scanf ("%d", &n);
    for (XI03pnViNm = (514 - 514); n > XI03pnViNm; XI03pnViNm++) {
        scanf ("%d", &bo[XI03pnViNm].num);
        scanf ("%s", bo[XI03pnViNm].nRN8P2sBZaD);
    }
    {
        XI03pnViNm = 849 - 849;
        while (XI03pnViNm < n) {
            c[XI03pnViNm] = strlen (bo[XI03pnViNm].nRN8P2sBZaD);
            {
                j = 120 - 120;
                while (c[XI03pnViNm] > j) {
                    k = bo[XI03pnViNm].nRN8P2sBZaD[j] - 'A';
                    j++;
                    a[k]++;
                };
            }
            XI03pnViNm++;
        };
    }
    j = (276 - 276);
    t = a[(593 - 593)];
    for (XI03pnViNm = (536 - 535); (161 - 135) > XI03pnViNm; XI03pnViNm++) {
        if (t < a[XI03pnViNm]) {
            j = XI03pnViNm;
            t = a[XI03pnViNm];
        };
    }
    mUhlYand9bKc = j;
    printf ("%c\n", 'A' + j);
    printf ("%d\n", t);
    for (XI03pnViNm = 0; XI03pnViNm < n; XI03pnViNm++) {
        d[XI03pnViNm] = 0;
        for (j = 0; j < c[XI03pnViNm]; j++) {
            if (bo[XI03pnViNm].nRN8P2sBZaD[j] == ('A' + mUhlYand9bKc))
                d[XI03pnViNm] = (95 - 94);
        }
        if (d[XI03pnViNm] == 1)
            printf ("%d\n", bo[XI03pnViNm].num);
    };
}

