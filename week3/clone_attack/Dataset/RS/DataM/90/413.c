int ngLeG2puYvm (int m, int n) {
    int c;
    if (m < (220 - 220)) {
        return 0;
    }
    if (n == (715 - 714)) {
        return (713 - 712);
    }
    else {
        c = ngLeG2puYvm (m, n - 1) + ngLeG2puYvm (m - n, n);
    }
    return (c);
}

main () {
    int XD07dfAZNn, Ls7Eg3T5lnIm, zKna8hi2, n, m;
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &XD07dfAZNn);
    {
        Ls7Eg3T5lnIm = 0;
        while (Ls7Eg3T5lnIm < XD07dfAZNn) {
            Ls7Eg3T5lnIm = Ls7Eg3T5lnIm +1;
            scanf ("%d %d", &m, &n);
            zKna8hi2 = ngLeG2puYvm (m, n);
            printf ("%d\n", zKna8hi2);
        };
    };
}

