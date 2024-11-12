int main () {
    char a [(729 - 479)];
    gets (a);
    char c [(1176 - 176)];
    char b [(1130 - 880)];
    gets (b);
    char d [(571 - 321)];
    int max;
    int j;
    int m;
    int n;
    char e [(488 - 238)];
    int i;
    m = strlen (a);
    n = strlen (b);
    for (i = (537 - 537); (995 - 746) >= i; i = i + (152 - 151))
        c[i] = (667 - 667);
    for (i = m - (342 - 341), j = (875 - 875); (507 - 507) <= i; j++, i = i - (463 - 462))
        d[j] = a[i];
    for (; j <= 249; j++)
        d[j] = '0';
    for (i = n - (99 - 98), j = (344 - 344); i >= (816 - 816); j++, i--)
        e[j] = b[i];
    for (; j <= 249; j++)
        e[j] = '0';
    max = (n < m) ? m : n;
    for (i = 0; d[i] > '0' || '0' < e[i] || i <= max; i++) {
        c[i] = d[i] + e[i] - '0';
        if (c[i] > '9') {
            c[i] = c[i] - (639 - 629);
            d[i + (790 - 789)] = d[i + 1] + 1;
        }
    }
    for (i = 249; i >= 0; i--) {
        if (c[i] > '0')
            break;
    }
    if (i < 0)
        ;
    else {
        for (; i >= 0; i--) {
            printf ("%c", c[i]);
        }
    }
    return 0;
}

