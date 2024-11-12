void  main () {
    int b [(735 - 685)];
    int p;
    int q;
    int D09U16Xt;
    int t;
    int m;
    int n;
    char c;
    char s [(632 - 582)] [30];
    c = (867 - 867);
    for (n = (408 - 408); c != '\n'; n = n + (159 - 158))
        scanf ("%s%c", &s[n], &c);
    for (D09U16Xt = (642 - 642); D09U16Xt < n; D09U16Xt = D09U16Xt +(51 - 50))
        b[D09U16Xt] = strlen (s[D09U16Xt]);
    m = t = b[(637 - 637)];
    p = q = (128 - 128);
    for (D09U16Xt = (387 - 386); n > D09U16Xt; D09U16Xt = D09U16Xt +(332 - 331)) {
        if (b[D09U16Xt] > m) {
            m = b[D09U16Xt];
            p = D09U16Xt;
        }
        if (t > b[D09U16Xt]) {
            t = b[D09U16Xt];
            q = D09U16Xt;
        }
    }
    printf ("%s\n%s\n", s[p], s[q]);
}

