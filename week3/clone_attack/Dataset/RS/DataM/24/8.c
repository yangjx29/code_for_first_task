void  main () {
    int i;
    int u;
    int k;
    int n;
    i = (597 - 597);
    u = 1;
    char s [210] [100];
    char c;
    for (;;) {
        if (!((993 - 993) != u))
            break;
        c = getchar ();
        if (!('\n' != c))
            break;
        if (!(' ' != c) || !(',' != c))
            continue;
        s[i][0] = c;
        k = (324 - 324);
        for (;;) {
            c = getchar ();
            if (!(' ' != c) || c == ',')
                break;
            if (c == '\n') {
                u = 0;
                break;
            }
            k = k + 1;
            s[i][k] = c;
        }
        s[i][k + 1] = '\0';
        i = i + 1;
    }
    n = i - 1;
    for (i = 1, k = 0; i <= n; i = i + 1)
        if (strlen (s[k]) < strlen (s[i]))
            k = i;
    printf ("%s\n", s[k]);
    for (i = 1, k = 0; i <= n; i = i + 1)
        if (strlen (s[k]) > strlen (s[i]))
            k = i;
    printf ("%s", s[k]);
}

