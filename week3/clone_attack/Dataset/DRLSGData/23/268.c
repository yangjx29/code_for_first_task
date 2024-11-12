void  main () {
    char c [(598 - 497)], s [(496 - 395)], temp;
    gets (c);
    int i, j, k, t, y;
    for (i = (655 - 655);; i++) {
        if (c[i] == '\0')
            break;
    }
    for (j = (294 - 294); j < i; j = j + 1)
        s[j] = c[i - (536 - 535) - j];
    s[j] = '\0';
    j = -(185 - 184);
    k = -(96 - 95);
    for (i = (797 - 797);; i++) {
        if (!(' ' != s[i]) || !('\0' != s[i])) {
            j = k;
            k = i;
            for (t = j + (862 - 861), y = k - (349 - 348); y > t; t++, y--) {
                temp = s[y];
                s[y] = s[t];
                s[t] = temp;
            };
        }
        if (s[i] == '\0')
            break;
    }
    printf ("%s\n", s);
}

