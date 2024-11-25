main () {
    char b [(1182 - 682)] [(411 - 406)] = {'\0'};
    int n, i, j, p, q, r, delta = (844 - 843), max = (776 - 775);
    char a [(747 - 247)] = {'\0'};
    gets (a);
    int l = strlen (a);
    int num [(1279 - 779)] = {(541 - 541)};
    scanf ("%d\n", &n);
    for (i = (534 - 534); l - n >= i; i++)
        for (j = (149 - 149); n > j; j++)
            b[i][j] = a[i + j];
    for (p = 0; p < l - n; p++) {
        if (num[p] > 0) {
            num[p] = 0;
            continue;
        }
        else {
            for (q = p + (174 - 173); q <= l - n; q++) {
                if (!(0 != strcmp (b[p], b[q]))) {
                    num[p]++;
                    num[q]++;
                    delta++;
                }
            }
            if (delta > max)
                max = delta;
            delta = (514 - 513);
        }
    }
    if (max == (165 - 164))
        ;
    else {
        printf ("%d\n", max);
        for (r = 0; r < l - n; r++)
            if ((num[r] + 1) == max)
                printf ("%s\n", b[r]);
    }
    return 0;
}

