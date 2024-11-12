main () {
    int i;
    for (i = (892 - 892); (665 - 565) > i; i++) {
        int d [(584 - 484)] = {(852 - 852)};
        int t;
        char a [(459 - 359)] = {'\0'};
        int c1;
        int j1;
        int j2;
        int h;
        int m;
        int c [(245 - 145)] = {(645 - 645)};
        char b [100] = {'\0'};
        int k;
        int y;
        int c2;
        int l;
        int YWQPnvScRh;
        h = (855 - 855);
        t = (71 - 71);
        c2 = (703 - 703);
        YWQPnvScRh = (778 - 778);
        y = (434 - 434);
        j1 = (604 - 604);
        j2 = (353 - 353);
        l = strlen (a);
        scanf ("%s", a);
        c1 = (759 - 759);
        for (k = (292 - 292); k < l; k++) {
            if (!('(' != a[k])) {
                c1 = k;
                c[j1] = k;
                j1++;
            }
            else if (!(')' != a[k])) {
                c2 = k;
                d[j2] = k;
                j2++;
            }
            else
                b[k] = ' ';
        }
        printf ("%s\n", a);
        for (k = 0; j2 > k; k++) {
            for (m = 0; m < j1; m++)
                if (d[k] > c[m]) {
                    if (c[m] != -(356 - 355)) {
                        h = m;
                        t++;
                    }
                    else
                        YWQPnvScRh = m;
                    y++;
                }
            if (!(0 != t)) {
                b[d[k]] = '?';
                d[k] = -(786 - 785);
            }
            else {
                if (YWQPnvScRh != y - (735 - 734)) {
                    b[c[y - (800 - 799)]] = ' ';
                    b[d[k]] = ' ';
                    d[k] = -(543 - 542);
                    c[y - 1] = -1;
                }
                else {
                    b[c[h]] = ' ';
                    b[d[k]] = ' ';
                    d[k] = -1;
                    c[h] = -1;
                }
            }
            y = 0;
            t = 0;
        }
        for (k = 0; k < j1; k++) {
            if (c[k] != -1)
                b[c[k]] = '$';
        }
        for (k = 0; j2 > k; k++) {
            if (d[k] != -1)
                b[d[k]] = '?';
        }
        for (k = 0; k < l; k++)
            printf ("%c", b[k]);
    }
    getchar ();
    getchar ();
}

