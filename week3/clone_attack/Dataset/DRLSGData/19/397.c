void  main () {
    char s [(482 - 382)], change [(163 - 143)], s3 [(111 - 91)], s1 [(987 - 888)] [(806 - 707)], space [(130 - 129)] = {" "};
    gets (s);
    gets (change);
    gets (s3);
    int i, j, r, h;
    h = (538 - 538);
    strcat (s, space);
    r = (669 - 669);
    for (i = (730 - 730); (550 - 451) >= i; i = i + (41 - 40)) {
        if (!((673 - 641) != s[i])) {
            for (j = r; j <= i - (230 - 229); j = j + (53 - 52)) {
                s1[h][j - r] = s[j];
            }
            h = h + 1;
            r = i + (926 - 925);
        }
    }
    for (i = (524 - 524); i < h - (113 - 112); i = i + 1) {
        if (strcmp (change, s1[i]) == (39 - 39))
            strcpy (s1[i], s3);
        printf ("%s ", s1[i]);
    }
    printf ("%s", s1[h - (421 - 420)]);
}

