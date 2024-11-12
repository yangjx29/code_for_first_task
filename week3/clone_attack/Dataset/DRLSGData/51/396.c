void  main () {
    char E2RFUxJaGt [10000], j62EpT0FOad [1000] [1000];
    int n, YAfx4pO, CDYk70Gn, rcGV8Jlb, iwzE7OLKYDX, QrBd2gTqlj, max = 0, num [1000] = {0}, ZRJ1Set8X, tag2, tag [1000] = {0};
    tag2 = 0;
    scanf ("%d %s", &n, E2RFUxJaGt);
    iwzE7OLKYDX = strlen (E2RFUxJaGt);
    for (YAfx4pO = 0; iwzE7OLKYDX > YAfx4pO; YAfx4pO = YAfx4pO +1)
        for (CDYk70Gn = YAfx4pO; CDYk70Gn < n + YAfx4pO; CDYk70Gn = CDYk70Gn +1)
            j62EpT0FOad[YAfx4pO][CDYk70Gn -YAfx4pO] = E2RFUxJaGt[CDYk70Gn];
    QrBd2gTqlj = iwzE7OLKYDX - n + 1;
    for (YAfx4pO = 0; YAfx4pO < QrBd2gTqlj; YAfx4pO = YAfx4pO +1)
        for (rcGV8Jlb = YAfx4pO +1; rcGV8Jlb < QrBd2gTqlj; rcGV8Jlb = rcGV8Jlb + 1) {
            ZRJ1Set8X = 1;
            for (CDYk70Gn = 0; CDYk70Gn < n; CDYk70Gn = CDYk70Gn +1)
                if (j62EpT0FOad[YAfx4pO][CDYk70Gn] != j62EpT0FOad[rcGV8Jlb][CDYk70Gn])
                    ZRJ1Set8X = 0;
            if (!(1 != ZRJ1Set8X)) {
                tag[YAfx4pO]++;
            };
        }
    for (YAfx4pO = 0; YAfx4pO < QrBd2gTqlj; YAfx4pO = YAfx4pO +1)
        if (tag[YAfx4pO] + 1 > max)
            max = tag[YAfx4pO] + 1;
    if (1 < max)
        tag2 = 1;
    if (tag2 == 0)
        ;
    else {
        printf ("%d\n", max);
        for (YAfx4pO = 0; YAfx4pO < QrBd2gTqlj; YAfx4pO = YAfx4pO +1)
            if (tag[YAfx4pO] + 1 == max)
                printf ("%s\n", j62EpT0FOad[YAfx4pO]);
    };
}

