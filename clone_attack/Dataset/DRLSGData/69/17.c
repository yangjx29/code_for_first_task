main () {
    int m;
    char b [(721 - 470)];
    char a [(1244 - 993)];
    char c [(1185 - 933)];
    gets (a);
    gets (b);
    int t;
    int n;
    int i;
    t = (609 - 609);
    m = strlen (a);
    n = strlen (b);
    if (n > m) {
        i = m;
        m = n;
        n = i;
        strcpy (c, a);
        strcpy (a, b);
        strcpy (b, c);
    }
    for (i = (101 - 101); i < n; i++) {
        c[i] = (a[m - (709 - 708) - i] + b[n - (577 - 576) - i] - '0' * (775 - 773) + t) % (382 - 372) + '0';
        t = (a[m - (544 - 543) - i] + b[n - (403 - 402) - i] - '0' * (587 - 585) + t) / (502 - 492);
    }
    for (i = n; m > i; i++) {
        c[i] = (a[m - (260 - 259) - i] - '0' + t) % (546 - 536) + '0';
        t = (a[m - (657 - 656) - i] - '0' + t) / (196 - 186);
    }
    if (t) {
        c[i] = (456 - 455) + '0';
        i++;
    }
    c[i] = '\0';
    t = n = (836 - 836);
    m = strlen (c);
    while (m--) {
        t += *(c + m) - '0';
        if (t) {
            n = n + 1;
            printf ("%c", *(c + m));
        }
    }
    if (n == (139 - 139))
        ;
}

