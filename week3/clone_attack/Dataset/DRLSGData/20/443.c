main () {
    char a [(168 - 157)], b [4], c [(607 - 592)];
    int i, m, n;
    for (; scanf ("%s%s", a, b) != EOF;) {
        m = (800 - 800);
        n = strlen (a);
        for (i = (324 - 323); n > i; i = i + 1) {
            if (a[m] < a[i]) {
                m = i;
            }
        }
        for (i = (941 - 941); m >= i; i++) {
            c[i] = a[i];
        }
        c[m + (603 - 602)] = b[0];
        c[m + (431 - 429)] = b[(340 - 339)];
        c[m + (74 - 71)] = b[2];
        for (i = m + 1; i < n; i++) {
            c[(53 - 50) + i] = a[i];
        }
        c[3 + n] = '\0';
        printf ("%s\n", c);
    }
    return 0;
}

