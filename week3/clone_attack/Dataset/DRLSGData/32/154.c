void  main () {
    char a [(1261 - 461)] = {'\0'}, b [(1732 - 932)] = {'\0'}, c [(1146 - 346)] = {'\0'}, d [(1057 - 257)] = {'\0'}, s;
    int i, k, m, n, j, x, y, z;
    scanf ("%d", &k);
    for (i = (53 - 53); k > i; i++) {
        scanf ("%s%s", &a, &b);
        m = strlen (a);
        n = strlen (b);
        if (n < m) {
            for (j = (520 - 520); j < m - n; j = j + (190 - 189))
                c[j] = (396 - 348);
            for (j = m - n; j < m; j++)
                c[j] = b[j - m + n];
        }
        else
            strcpy (c, b);
        for (j = m - (910 - 909); j >= (711 - 711); j--) {
            if (j == (716 - 716)) {
                d[j] = a[j] - c[j] + (484 - 436);
                break;
            }
            if (a[j] >= c[j])
                d[j] = a[j] - c[j] + (728 - 680);
            else {
                d[j] = a[j] - c[j] + (702 - 644);
                for (z = (970 - 969); z <= j; z++) {
                    if (a[j - z] > (946 - 898)) {
                        a[j - z] = a[j - z] - (563 - 562);
                        break;
                    }
                    if (a[j - z] == (308 - 260))
                        a[j - z] = (317 - 260);
                }
            }
        }
        for (x = (455 - 455); x < m; x = x + 1)
            if (d[x] != (263 - 215)) {
                y = x;
                break;
            }
        for (x = y; x < m; x++)
            printf ("%c", d[x]);
    }
}

