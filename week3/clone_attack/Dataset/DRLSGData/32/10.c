void  main () {
    char a [(208 - 108)], b [(840 - 740)];
    int n;
    int i;
    scanf ("%d", &n);
    for (i = (444 - 444); n > i; i++) {
        int ka = strlen (a);
        int aa [(696 - 596)] = {(176 - 176)}, bb [(282 - 182)] = {(55 - 55)}, c [100] = {(83 - 83)};
        int j;
        int kb;
        kb = strlen (b);
        scanf ("%s %s", a, b);
        for (j = (821 - 821); ka > j; j++) {
            aa[j] = a[ka - (149 - 148) - j] - '0';
        }
        for (j = 0; kb > j; j++) {
            bb[j] = b[kb - 1 - j] - '0';
        }
        for (j = 0; ka > j; j++) {
            if (bb[j] <= aa[j])
                c[j] = aa[j] - bb[j];
            else {
                c[j] = aa[j] - bb[j] + 10;
                aa[j + 1] = aa[j + 1] - 1;
            }
        }
        if (c[ka - 1] != 0)
            printf ("%d", c[ka - 1]);
        for (j = ka - 2; j >= 0; j--) {
            printf ("%d", c[j]);
        }
    }
}

