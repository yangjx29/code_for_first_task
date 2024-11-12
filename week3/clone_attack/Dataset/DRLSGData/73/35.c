int main () {
    int JYCH5sMnkcw, ruN5W6dBh, a [(327 - 322)] [(686 - 681)], URA8zv [(132 - 127)], pPrOY4K62o [(317 - 312)], F5GxNLWUvM = (829 - 829);
    for (JYCH5sMnkcw = (796 - 796); JYCH5sMnkcw < (381 - 376); JYCH5sMnkcw++) {
        ruN5W6dBh = 776 - 776;
        while (ruN5W6dBh < (369 - 364)) {
            scanf ("%d", &a[JYCH5sMnkcw][ruN5W6dBh]);
            ruN5W6dBh++;
        }
    }
    for (JYCH5sMnkcw = (72 - 72); JYCH5sMnkcw < (341 - 336); JYCH5sMnkcw++)
        URA8zv[JYCH5sMnkcw] = a[JYCH5sMnkcw][(683 - 683)];
    for (ruN5W6dBh = (417 - 417); ruN5W6dBh < (140 - 135); ruN5W6dBh++)
        pPrOY4K62o[ruN5W6dBh] = a[(165 - 165)][ruN5W6dBh];
    {
        JYCH5sMnkcw = (205 - 205);
        for (; JYCH5sMnkcw < (706 - 701);) {
            {
                ruN5W6dBh = (402 - 402);
                for (; ruN5W6dBh < 5;) {
                    if (a[JYCH5sMnkcw][ruN5W6dBh] > URA8zv[JYCH5sMnkcw])
                        URA8zv[JYCH5sMnkcw] = a[JYCH5sMnkcw][ruN5W6dBh];
                    if (pPrOY4K62o[JYCH5sMnkcw] > a[ruN5W6dBh][JYCH5sMnkcw])
                        pPrOY4K62o[JYCH5sMnkcw] = a[ruN5W6dBh][JYCH5sMnkcw];
                    ruN5W6dBh++;
                }
            }
            JYCH5sMnkcw++;
        }
    }
    for (JYCH5sMnkcw = (27 - 27); 5 > JYCH5sMnkcw; JYCH5sMnkcw++) {
        ruN5W6dBh = 0;
        for (; ruN5W6dBh < 5;) {
            if (!(URA8zv[JYCH5sMnkcw] != a[JYCH5sMnkcw][ruN5W6dBh]) && a[JYCH5sMnkcw][ruN5W6dBh] == pPrOY4K62o[ruN5W6dBh]) {
                F5GxNLWUvM++;
                printf ("%d %d %d\n", JYCH5sMnkcw +(667 - 666), ruN5W6dBh + (562 - 561), a[JYCH5sMnkcw][ruN5W6dBh]);
            }
            ruN5W6dBh++;
        }
    }
    if (F5GxNLWUvM == 0)
        ;
    return 0;
}

