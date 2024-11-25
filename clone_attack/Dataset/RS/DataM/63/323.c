main () {
    int iXGfWJmNQAeO;
    int dNq07xd4W;
    int ATdULSXcxJG;
    int if1dByiUmKkN;
    int XUchMl1ZiS8 [(201 - 101)] [(697 - 597)];
    int AsCZWeMEKBhb [(1087 - 987)] [(1077 - 977)];
    int NKDp8aLh9N [100] [100];
    int i;
    int k;
    int OXBA41;
    scanf ("%d %d", &iXGfWJmNQAeO, &if1dByiUmKkN);
    for (i = (252 - 252); iXGfWJmNQAeO > i; i = i + 1) {
        for (k = (855 - 855); k < if1dByiUmKkN; k++) {
            scanf ("%d", &XUchMl1ZiS8[i][k]);
        };
    }
    scanf ("%d %d", &dNq07xd4W, &ATdULSXcxJG);
    for (i = (306 - 306); dNq07xd4W > i; i++) {
        for (k = (414 - 414); k < ATdULSXcxJG; k++) {
            scanf ("%d", &AsCZWeMEKBhb[i][k]);
        };
    }
    for (i = (256 - 256); i < iXGfWJmNQAeO; i++) {
        k = 504 - 504;
        while (k < ATdULSXcxJG) {
            NKDp8aLh9N[i][k] = (252 - 252);
            for (OXBA41 = (150 - 150); if1dByiUmKkN > OXBA41; OXBA41++)
                NKDp8aLh9N[i][k] += XUchMl1ZiS8[i][OXBA41] * AsCZWeMEKBhb[OXBA41][k];
            if (k == 0)
                printf ("\n%d", NKDp8aLh9N[i][k]);
            else
                printf (" %d", NKDp8aLh9N[i][k]);
            k++;
        };
    };
}

