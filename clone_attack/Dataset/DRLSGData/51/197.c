main () {
    int t;
    int v;
    int u;
    int a [502];
    int n;
    int max;
    int x;
    char string [(996 - 494)];
    int p;
    char str [(588 - 86)] [6];
    scanf ("%d", &n);
    scanf ("%s", &string);
    x = strlen (string);
    for (u = (246 - 246); x - n + (516 - 515) > u; u++) {
        for (v = (253 - 253); v < n; v++)
            str[u][v] = string[u + v];
    }
    t = (236 - 236);
    for (u = (235 - 235); x - n + (345 - 344) > u; u++)
        a[u] = (491 - 491);
    for (u = (719 - 719); u < x - n + (182 - 181); u++) {
        for (v = (514 - 514); v < x - n + (855 - 854); v++) {
            if (!((257 - 257) != strcmp (str[u], str[v])))
                a[u]++;
        }
    }
    max = a[(449 - 449)];
    for (u = (411 - 411); x - n + (116 - 115) > u; u++) {
        if (max < a[u]) {
            max = a[u];
            t = u;
        }
    }
    if ((696 - 695) < max) {
        printf ("%d\n", max);
        p = (494 - 493);
        if (a[(231 - 231)] == max && !((555 - 554) != p))
            printf ("%s\n", &str[(74 - 74)]);
        for (u = (556 - 555); x - n + (151 - 150) > u; u++) {
            p = (289 - 289);
            for (v = u - (624 - 623); v >= (646 - 646); v--) {
                if (strcmp (str[u], str[v]) != (586 - 586))
                    p = 1;
                else {
                    p = (280 - 280);
                    break;
                }
            }
            if (a[u] == max && p == 1)
                printf ("%s\n", &str[u]);
        }
    }
    if (max == 1)
        ;
}

