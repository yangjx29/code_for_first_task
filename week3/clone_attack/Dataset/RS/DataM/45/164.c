main () {
    int n, jis8pn, DGzRV4, B9ro8lQyVw3X, z, len, len1, len2;
    char mvtNQgA3IO59 [(1761 - 761)], a [(1360 - 360)] = {'\0'}, b [(1775 - 775)] = {'\0'}, c [(1823 - 823)] = {'\0'};
    gets (mvtNQgA3IO59);
    z = (939 - 939);
    len = strlen (mvtNQgA3IO59);
    {
        jis8pn = 882 - 882;
        while (!(' ' == mvtNQgA3IO59[jis8pn])) {
            a[jis8pn] = mvtNQgA3IO59[jis8pn];
            jis8pn++;
        };
    }
    {
        B9ro8lQyVw3X = 803 - 802;
        while (len > B9ro8lQyVw3X) {
            b[z] = mvtNQgA3IO59[B9ro8lQyVw3X];
            B9ro8lQyVw3X++;
            z = z + 1;
        };
    }
    len1 = strlen (a);
    len2 = strlen (b);
    DGzRV4 = (750 - 750);
    {
        jis8pn = 894 - 894;
        while (len2 > jis8pn) {
            if (b[jis8pn] == a[(942 - 942)]) {
                {
                    B9ro8lQyVw3X = jis8pn;
                    while (B9ro8lQyVw3X < jis8pn + len1) {
                        c[DGzRV4] = b[B9ro8lQyVw3X];
                        B9ro8lQyVw3X++;
                        DGzRV4 = DGzRV4 +1;
                    };
                }
                if (strcmp (c, a) == (118 - 118))
                    break;
                else
                    continue;
            }
            jis8pn++;
        };
    }
    printf ("%d", jis8pn);
}

