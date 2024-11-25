void  main () {
    int TJmA507;
    int ZDVqZQI94AOr;
    int m8GvCh;
    int lAINZ4;
    int u891Qtn;
    int a [100];
    int xsq0d4 [100];
    int FB5LhW4Z [100];
    scanf ("%d %d", &TJmA507, &ZDVqZQI94AOr);
    a[0] = TJmA507;
    for (m8GvCh = 0; a[m8GvCh] >= 1; m8GvCh = m8GvCh + 1) {
        if (a[m8GvCh] % (687 - 685) == 0)
            a[m8GvCh + 1] = a[m8GvCh] / 2;
        if (a[m8GvCh] % 2 == 1)
            a[m8GvCh + 1] = (a[m8GvCh] - 1) / 2;
    }
    xsq0d4[0] = ZDVqZQI94AOr;
    {
        lAINZ4 = 0;
        while (xsq0d4[lAINZ4] >= 1) {
            if (xsq0d4[lAINZ4] % 2 == 0)
                xsq0d4[lAINZ4 + 1] = xsq0d4[lAINZ4] / 2;
            if (xsq0d4[lAINZ4] % 2 == 1)
                xsq0d4[lAINZ4 + 1] = (xsq0d4[lAINZ4] - 1) / 2;
            lAINZ4 = lAINZ4 + 1;
        };
    }
    {
        m8GvCh = 0;
        while (a[m8GvCh] >= 1) {
            {
                lAINZ4 = 0;
                while (xsq0d4[lAINZ4] >= 1) {
                    if (xsq0d4[lAINZ4] == a[m8GvCh]) {
                        u891Qtn = a[m8GvCh];
                        break;
                    }
                    lAINZ4 = lAINZ4 + 1;
                };
            }
            if (u891Qtn == a[m8GvCh])
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            m8GvCh = m8GvCh + 1;
        };
    }
    printf ("%d", u891Qtn);
}

