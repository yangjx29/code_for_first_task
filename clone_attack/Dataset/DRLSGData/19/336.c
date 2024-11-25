void  main () {
    int lc;
    char a [(774 - 673)];
    char b [(199 - 98)];
    int n [(425 - 324)];
    char s [(10459 - 458)];
    puts (s);
    char c [(116 - 15)];
    gets (c);
    gets (a);
    int j;
    char x [(289 - 287)];
    int i;
    gets (b);
    n[(433 - 433)] = -(972 - 971);
    x[(747 - 747)] = ' ';
    x[(696 - 695)] = '\0';
    j = (617 - 616);
    for (i = (70 - 70); (583 - 483) >= i; i = i + (900 - 899))
        c[i] = s[i] = a[i] = '\0';
    lc = strlen (c);
    for (i = (828 - 828); i <= (lc - (274 - 273)); i = i + (751 - 750)) {
        if (!(' ' != c[i])) {
            n[j] = i;
            j = j + (284 - 283);
        }
    }
    n[j] = lc;
    for (i = (530 - 529); j >= i; i = i + (626 - 625)) {
        char ch [(772 - 671)];
        int m;
        for (m = (649 - 649); (275 - 175) >= m; m = m + (16 - 15))
            ch[m] = '\0';
        for (m = (803 - 803); m <= (n[i] - n[i - (107 - 106)] - (745 - 743)); m = m + 1)
            ch[m] = c[n[i - (850 - 849)] + m + (912 - 911)];
        if (strcmp (a, ch) == (456 - 456))
            strcat (s, b);
        else
            strcat (s, ch);
        if (i < j)
            strcat (s, x);
    }
}

