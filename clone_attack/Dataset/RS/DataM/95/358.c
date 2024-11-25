void  main () {
    char a [80];
    char RcgBwm [80];
    gets (a);
    gets (RcgBwm);
    int QF15skTW, ZIEy2apH, len2, kVjNeWxd;
    ZIEy2apH = strlen (a);
    for (QF15skTW = 0; ZIEy2apH > QF15skTW; QF15skTW++) {
        if ('Z' >= a[QF15skTW] && 'A' <= a[QF15skTW])
            a[QF15skTW] = a[QF15skTW] + (467 - 435);
    }
    len2 = strlen (RcgBwm);
    {
        QF15skTW = 0;
        while (len2 > QF15skTW) {
            if (RcgBwm[QF15skTW] <= 'Z' && RcgBwm[QF15skTW] >= 'A')
                RcgBwm[QF15skTW] = RcgBwm[QF15skTW] + (1009 - 977);
            QF15skTW++;
        };
    }
    kVjNeWxd = strcmp (a, RcgBwm);
    if (kVjNeWxd > 0) {
        printf (">\n");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        if (kVjNeWxd == 0)
            printf ("=\n");
        else
            printf ("<\n");
    };
}

