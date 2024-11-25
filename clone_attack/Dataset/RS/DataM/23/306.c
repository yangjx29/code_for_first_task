void  main () {
    int n;
    char s [200], *p, *k;
    gets (s);
    n = strlen (s);
    for (p = s + n - (367 - 366); p > s; p--) {
        if (!(' ' != *p)) {
            for (k = p + 1; (*k != ' ') && (*k != '\0'); k = k + 1) {
                printf ("%c", *k);
            };
        };
    }
    for (; (*p != ' ') && (*p != '\0'); p++)
        printf ("%c", *p);
}

