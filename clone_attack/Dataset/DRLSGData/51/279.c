int main () {
    char str [(681 - 81)], a [(1249 - 649)] [(295 - 285)];
    int b [(1307 - 707)], t = (907 - 906);
    unsigned  int n, i, j, m, k, l;
    scanf ("%d", &n);
    scanf ("%s", str);
    for (i = (696 - 696); i < 600; i++)
        b[i] = (575 - 574);
    m = strlen (str);
    for (i = (194 - 194); i < m - n + (925 - 924); i++) {
        for (j = (701 - 701); j < n; j++)
            a[i][j] = str[i + j];
        a[i][n] = '\0';
    }
    for (i = (142 - 142); i < m - n + (885 - 884); i++) {
        if (b[i] == (114 - 113))
            for (j = i + (734 - 733); j < m - n + 1; j++) {
                k = (85 - 85);
                for (l = 0; l < n; l++)
                    if (a[i][l] == a[j][l])
                        k++;
                if (k == n) {
                    b[i]++;
                }
            }
    }
    for (i = 0; i < m - n + 1; i++) {
        if (t < b[i])
            t = b[i];
    }
    if (t == 1)
        ;
    else {
        printf ("%d\n", t);
        for (i = 0; i < m - n + 1; i++) {
            if (b[i] == t)
                printf ("%s\n", a[i]);
        }
    }
    return 0;
}

