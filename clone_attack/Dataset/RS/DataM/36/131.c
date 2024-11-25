void  main () {
    char aa [1000];
    char bb [1000];
    int m;
    int bxZuH3FjTPR;
    int pSsEP941j;
    int t;
    int c;
    scanf ("%s", aa);
    scanf ("%s", bb);
    if (!(strlen (bb) == strlen (aa)))
        ;
    else {
        m = strlen (aa);
        for (bxZuH3FjTPR = 1; bxZuH3FjTPR <= m - 1; bxZuH3FjTPR++)
            for (pSsEP941j = 0; pSsEP941j <= m - bxZuH3FjTPR - 1; pSsEP941j++) {
                if (aa[pSsEP941j] < aa[pSsEP941j + 1]) {
                    t = aa[pSsEP941j];
                    aa[pSsEP941j] = aa[pSsEP941j + 1];
                    aa[pSsEP941j + 1] = t;
                }
                if (bb[pSsEP941j] < bb[pSsEP941j + 1]) {
                    t = bb[pSsEP941j];
                    bb[pSsEP941j] = bb[pSsEP941j + 1];
                    bb[pSsEP941j + 1] = t;
                };
            }
        c = strcmp (aa, bb);
        if (c == 0)
            ;
        else
            printf ("NO");
    };
}

