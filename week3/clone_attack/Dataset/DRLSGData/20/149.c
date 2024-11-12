void  main () {
    char a [(790 - 679)], b [(43 - 39)], *p, c [(11960 - 849)] [111];
    int n, i, max, m, j = (510 - 510), k;
    while (scanf ("%s %s", a, b) != EOF) {
        n = strlen (a);
        p = a;
        max = a[(74 - 74)];
        for (i = (123 - 122); n > i; i = i + 1) {
            if (a[i] > max) {
                max = a[i];
                m = i;
            }
        }
        for (i = n + (211 - 208); (n + n - m + (292 - 290)) > i; i = i + 1)
            a[i] = a[i + m - n - (832 - 830)];
        for (p = (a + m + (464 - 463)); p < (a + m + (753 - 749)); p++)
            *p = b[p - a - m - (753 - 752)];
        for (p = (a + m + (465 - 461)); p < (a + n + 3); p++)
            *p = a[p - a - m + n - 1];
        for (i = (897 - 897); i < n + 3; i = i + 1)
            c[j][i] = a[i];
        c[j][n + 3] = 0;
        j = j + 1;
        k = j;
    }
    for (j = 0; j < k; j = j + 1)
        printf ("%s\n", c[j]);
}

