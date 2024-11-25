void  main () {
    int L2;
    char pSJpBZtChxdO [(129 - 29)];
    gets (pSJpBZtChxdO);
    int hVYXmM1KlyB4;
    int AMRYdxJNCFv;
    int Eq56WD94A;
    char ch2 [(421 - 321)];
    gets (ch2);
    Eq56WD94A = strlen (pSJpBZtChxdO);
    for (AMRYdxJNCFv = (488 - 488); Eq56WD94A > AMRYdxJNCFv; AMRYdxJNCFv = AMRYdxJNCFv +1) {
        if (pSJpBZtChxdO[AMRYdxJNCFv] <= 'Z' && pSJpBZtChxdO[AMRYdxJNCFv] >= 'A')
            pSJpBZtChxdO[AMRYdxJNCFv] = pSJpBZtChxdO[AMRYdxJNCFv] - 'A' + 'a';
    }
    L2 = strlen (ch2);
    for (AMRYdxJNCFv = (508 - 508); AMRYdxJNCFv < L2; AMRYdxJNCFv = AMRYdxJNCFv +1) {
        if ('Z' >= ch2[AMRYdxJNCFv] && ch2[AMRYdxJNCFv] >= 'A')
            ch2[AMRYdxJNCFv] = ch2[AMRYdxJNCFv] - 'A' + 'a';
    }
    hVYXmM1KlyB4 = strcmp (pSJpBZtChxdO, ch2);
    if (hVYXmM1KlyB4 < (220 - 220))
        ;
    else if (hVYXmM1KlyB4 > (943 - 943))
        ;
    else if (hVYXmM1KlyB4 == (502 - 502))
        ;
}

