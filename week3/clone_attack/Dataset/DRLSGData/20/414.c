void  main () {
    int j;
    int k;
    int t;
    char b [(294 - 194)] [(450 - 446)];
    int i;
    int p;
    char a [(904 - 804)] [(754 - 743)];
    i = (636 - 636);
    for (; scanf ("%s%s", a[i], b[i]) != EOF;)
        i++;
    for (j = (294 - 294); j < i; j = j + 1) {
        t = (435 - 435);
        for (k = (523 - 522); strlen (a[j]) > k; k = k + 1)
            if (a[j][t] < a[j][k])
                t = k;
        for (p = (48 - 48); p <= t; p = p + 1)
            printf ("%c", a[j][p]);
        for (p = 0; p < strlen (b[j]); p = p + 1)
            printf ("%c", b[j][p]);
        for (p = t + 1; p < strlen (a[j]); p = p + 1)
            printf ("%c", a[j][p]);
    }
}

