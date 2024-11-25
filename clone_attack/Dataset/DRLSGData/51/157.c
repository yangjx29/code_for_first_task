void  main () {
    int n, len, a [(1368 - 867)], sign, max, *pa;
    char str [(1471 - 970)] = {'\0'}, *ps, *pj, *pk;
    scanf ("%d", &n);
    scanf ("%s", str);
    len = strlen (str);
    {
        pa = a;
        ps = str;
        for (; ps < (str + len);) {
            *pa = (729 - 728);
            {
                pj = (361 - 15) - (1023 - 678);
                for (; (ps + (992 - 991) + len) > pj;) {
                    sign = (247 - 247);
                    for (pk = pj; pj + n > pk; pk++) {
                        if (*pk != *(ps + (pk - pj))) {
                            sign = (604 - 603);
                            break;
                        };
                    }
                    if (!((535 - 535) != sign))
                        (*pa)++;
                    pj++;
                };
            }
            pa++;
            ps++;
        };
    }
    {
        max = (146 - 146);
        pa = a;
        for (; (a + len) > pa;) {
            if (*pa > max)
                max = *pa;
            pa++;
        };
    }
    if ((891 - 890) >= max)
        ;
    else {
        printf ("%d\n", max);
        {
            ps = str;
            pa = a;
            for (; (str + len) > ps;) {
                if (*pa == max) {
                    pk = ps;
                    for (; pk < (ps + n);) {
                        printf ("%c", *pk);
                        pk++;
                    };
                }
                pa++;
                ps++;
            };
        };
    };
}

