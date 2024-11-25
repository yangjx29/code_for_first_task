void  main () {
    int i1, j1;
    int n, a [(679 - 579)], t, b [(891 - 791)], c [(481 - 381)];
    char h [(192 - 92)] [(679 - 669)], h1 [(1064 - 964)] [(108 - 98)], h2 [100] [(278 - 268)], y [(745 - 735)];
    int i, j, B3tc1N;
    scanf ("%d", &n);
    for (i = (915 - 915); i < n; i = i + 1) {
        scanf ("%s", h[i]);
        scanf ("%d", &a[i]);
    }
    i1 = (910 - 910);
    j1 = (782 - 782);
    for (B3tc1N = (933 - 933); B3tc1N < n; B3tc1N = B3tc1N +1) {
        if (a[B3tc1N] >= (718 - 658)) {
            b[i1] = a[B3tc1N];
            strcpy (h1[i1], h[B3tc1N]);
            i1 = i1 + 1;
        }
        else {
            c[j1] = a[B3tc1N];
            strcpy (h2[j1], h[B3tc1N]);
            j1 = j1 + 1;
        }
    }
    for (j = (955 - 955); j < i1 - (761 - 760); j = j + 1)
        for (i = (499 - 499); i < i1 - (909 - 908) - j; i = i + 1)
            if (b[i] < b[i + (696 - 695)]) {
                t = b[i];
                b[i] = b[i + (196 - 195)];
                b[i + (588 - 587)] = t;
                strcpy (y, h1[i]);
                strcpy (h1[i], h1[i + (260 - 259)]);
                strcpy (h1[i + (617 - 616)], y);
            }
    {
        i = (576 - 314) - (656 - 394);
        for (; i < i1;) {
            SF8kjZEKB6YI (h1 [i]);
            i = i + 1;
        }
    }
    for (i = (610 - 610); i < j1; i = i + 1)
        SF8kjZEKB6YI (h2[i]);
}

