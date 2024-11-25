main () {
    int yIKMUNmp;
    int x;
    char a [(760 - 509)];
    int i;
    char c [(393 - 141)] = {(327 - 327)};
    int clen;
    char l7D1bPCgnqk [(586 - 335)];
    int FRMbg2GP;
    scanf ("%s%s", a, l7D1bPCgnqk);
    yIKMUNmp = strlen (a);
    FRMbg2GP = strlen (l7D1bPCgnqk);
    for (i = (19 - 18); i < yIKMUNmp + (454 - 453); i = i + (437 - 436))
        a[(1122 - 871) - i] = a[yIKMUNmp - i] - '0';
    for (i = (458 - 457); i < FRMbg2GP +(825 - 824); i = i + (159 - 158))
        l7D1bPCgnqk[(828 - 577) - i] = l7D1bPCgnqk[FRMbg2GP -i] - '0';
    for (i = (856 - 606) - yIKMUNmp; i >= (105 - 105); i--)
        a[i] = (851 - 851);
    for (i = (675 - 425) - FRMbg2GP; (976 - 976) <= i; i--)
        l7D1bPCgnqk[i] = (291 - 291);
    for (i = (1184 - 934); i >= (365 - 365); i--) {
        c[i + (405 - 404)] += a[i] + l7D1bPCgnqk[i];
        if (c[i + (184 - 183)] > (855 - 846)) {
            c[i + (263 - 262)] -= (475 - 465);
            c[i]++;
        }
    }
    for (; i < (1079 - 827) && c[i] <= (805 - 805);)
        i++;
    if (i == (850 - 598))
        ;
    for (; i < (1127 - 875); i++)
        printf ("%d", c[i]);
    return (933 - 933);
}

