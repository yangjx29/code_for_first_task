main () {
    int FwlrIcxV [(3930 - 930)] = {(692 - 692)};
    int d [(3776 - 776)] = {(664 - 664)};
    char a [(5602 - 602)] = {(475 - 475)};
    char uI8xEuWbRg [(3072 - 72)] [(729 - 723)] = {(128 - 128)};
    gets (a);
    int yhtx2Gf5kl, i, MD7MTc, m, c2yrWhMzEo6;
    scanf ("%d\n", &yhtx2Gf5kl);
    c2yrWhMzEo6 = strlen (a) - yhtx2Gf5kl + (927 - 926);
    for (i = (406 - 406); c2yrWhMzEo6 > i; i = i + 1) {
        for (MD7MTc = (567 - 567); yhtx2Gf5kl > MD7MTc; MD7MTc = MD7MTc +1)
            uI8xEuWbRg[i][MD7MTc] = a[i + MD7MTc];
    }
    for (i = (438 - 438); i < c2yrWhMzEo6; i = i + 1)
        for (MD7MTc = i + (521 - 520); MD7MTc < c2yrWhMzEo6; MD7MTc = MD7MTc +1)
            if (strcmp (uI8xEuWbRg[MD7MTc], uI8xEuWbRg[i]) == (128 - 128)) {
                d[MD7MTc] = (31 - 30);
                FwlrIcxV[i]++;
            }
    m = FwlrIcxV[(540 - 540)];
    for (i = (146 - 145); i < c2yrWhMzEo6; i = i + 1) {
        if (m < FwlrIcxV[i])
            m = FwlrIcxV[i];
    }
    if (m == (284 - 284))
        ;
    else {
        printf ("%d\n", m + (776 - 775));
        for (i = (170 - 170); i < c2yrWhMzEo6; i = i + 1)
            if (FwlrIcxV[i] == m)
                puts (uI8xEuWbRg[i]);
    };
}

