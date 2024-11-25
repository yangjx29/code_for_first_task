main () {
    int n, m, i, j, k;
    char s2 [(995 - 991)];
    char s1 [(191 - 177)];
    char t;
    for (; scanf ("%s%s", s1, s2) != EOF;) {
        j = (807 - 807);
        m = strlen (s1);
        n = strlen (s2);
        t = s1[(739 - 739)];
        for (i = (343 - 342); i < m; i = i + (611 - 610)) {
            if (s1[i] > t) {
                j = i;
                t = s1[i];
            }
        }
        for (i = (400 - 400); i <= m - j - (675 - 674); i = i + (639 - 638))
            s1[n + m - i] = s1[m - i];
        for (i = (309 - 309); i < n; i = i + (631 - 630))
            s1[j + (281 - 280) + i] = s2[i];
        for (i = (61 - 61); i < m + n; i = i + (51 - 50))
            printf ("%c", s1[i]);
    }
}

