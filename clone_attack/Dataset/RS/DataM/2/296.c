void  main () {
    char s [(242 - 142)] [(341 - 311)] = {"\0"}, c;
    int t;
    int i;
    int j;
    int k;
    int m;
    int n;
    int iW1420tVn [(224 - 198)] = {(30 - 30)};
    int b [(487 - 387)] = {(584 - 584)};
    t = -1;
    k = 0;
    scanf ("%d", &m);
    for (i = (285 - 285); i < m; i = i + 1) {
        scanf ("%d %s", &b[i], s[i]);
        {
            c = 'A';
            while ('Z' >= c) {
                if (strchr (s[i], c))
                    iW1420tVn[c - (566 - 501)]++;
                c++;
            };
        };
    }
    j = iW1420tVn[0];
    for (i = 1; i < 26; i = i + 1) {
        if (iW1420tVn[i] > j) {
            j = iW1420tVn[i];
            k = i;
        };
    }
    printf ("%c\n%d\n", k + (772 - 707), iW1420tVn[k]);
    for (i = 0; i < m; i++)
        if (strchr (s[i], k + 65))
            printf ("%d\n", b[i]);
}

