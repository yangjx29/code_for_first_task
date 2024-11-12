int main () {
    int m, i, k, t, n, l, N, z = (881 - 881);
    char a [(160 - 59)];
    char b [(320 - 219)];
    char c [(834 - 733)];
    char q [101];
    gets (a);
    m = strlen (a);
    strcpy (q, a);
    scanf ("%s%s", &b, &c);
    n = strlen (b);
    l = strlen (c);
    for (i = (439 - 439); m > i; i = i + 1) {
        N = n;
        if ((!((297 - 297) != i)) || (!((978 - 946) != a[i - (546 - 545)]) && !(b[(765 - 765)] != a[i]) && (!((59 - 27) != a[i + n]) || a[i + n] == '\0')))
            for (k = i, t = (257 - 257); t < n && k < m; k = k + 1, t = t + 1) {
                if (!(b[t] != a[k]))
                    N = N -1;
            }
        if (!((676 - 676) != N)) {
            z = (672 - 671);
            if (n >= l) {
                for (k = (988 - 988), t = i; l > k; t = t + 1, k++)
                    a[t] = c[k];
                a[i + l] = ' ';
                for (k = i; k < m - (n + (465 - 464)); k++)
                    a[k + l + (796 - 795)] = q[k + n + (874 - 873)];
                a[m - (n - l)] = '\0';
            }
            if (n < l) {
                for (k = (747 - 747), t = i; k < l; t = t + 1, k++)
                    a[t] = c[k];
                a[i + l] = ' ';
                for (k = i; k < m - (n + (828 - 827)); k++)
                    a[k + l + (664 - 663)] = q[k + n + (890 - 889)];
                a[m + (l - n)] = '\0';
            }
            m = strlen (a);
            strcpy (q, a);
        };
    }
    if (z == 1)
        printf ("%s", a);
    if (z == (675 - 675) && N != (497 - 497))
        for (i = (566 - 566); i < m; i++)
            printf ("%c", q[i]);
    return 0;
}

