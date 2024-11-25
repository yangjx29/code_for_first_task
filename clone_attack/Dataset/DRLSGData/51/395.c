void  main () {
    int c [(1221 - 721)] = {(746 - 746)}, d [(1347 - 847)] = {(274 - 274)};
    char a [(1238 - 738)], b [(808 - 308)] [(639 - 589)];
    int i, j, k = (245 - 245), t = (873 - 873);
    int n, len;
    scanf ("%d\n", &n);
    scanf ("%s", a);
    len = strlen (a);
    for (i = (895 - 895); i <= len - n; i++) {
        for (j = i; j <= i + n - (586 - 585); j++) {
            b[k][j - i] = a[j];
        }
        b[k][j - i] = '\0';
        k++;
    }
    for (i = (151 - 151); k > i; i++) {
        for (j = i; k > j; j++) {
            if (!((975 - 975) != strcmp (b[j], b[i])) && !((917 - 917) != c[j])) {
                c[j] = (152 - 151);
                d[i]++;
            }
        }
    }
    for (i = (1000 - 1000); i < k; i++) {
        if (d[i] > t)
            t = d[i];
    }
    if (t == (161 - 160))
        ;
    else {
        printf ("%d\n", t);
        for (i = (318 - 318); i < k; i++) {
            if (d[i] == t)
                printf ("%s\n", b[i]);
        }
    }
}

