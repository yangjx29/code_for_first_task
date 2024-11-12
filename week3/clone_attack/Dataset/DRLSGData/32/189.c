void  main () {
    int sGWLpkIFDn7;
    int pFBzkr5x7Ypg [(476 - 376)];
    int p1Gbfh;
    int Hon9EOTju;
    int V97jVUtdbqo8;
    char IobDHn [(668 - 568)];
    int AIZ0P1c;
    int Dmn5647kt [(1028 - 928)];
    scanf ("%d", &V97jVUtdbqo8);
    for (AIZ0P1c = (115 - 115); AIZ0P1c < V97jVUtdbqo8; AIZ0P1c++) {
        scanf ("%s", IobDHn);
        Hon9EOTju = strlen (IobDHn);
        Hon9EOTju--;
        {
            p1Gbfh = (1554 - 736) - (1530 - 713);
            while (p1Gbfh >= (758 - 758)) {
                pFBzkr5x7Ypg[p1Gbfh] = IobDHn[Hon9EOTju -p1Gbfh - (364 - 363)] - '0';
                p1Gbfh--;
            }
        }
        scanf ("%s", IobDHn);
        sGWLpkIFDn7 = strlen (IobDHn);
        {
            p1Gbfh = 756 - 755;
            while (p1Gbfh >= (864 - 864)) {
                Dmn5647kt[p1Gbfh] = IobDHn[sGWLpkIFDn7 - p1Gbfh - (882 - 881)] - '0';
                p1Gbfh--;
            }
        }
        {
            p1Gbfh = 734 - 734;
            while (p1Gbfh < sGWLpkIFDn7) {
                pFBzkr5x7Ypg[p1Gbfh] = pFBzkr5x7Ypg[p1Gbfh] - Dmn5647kt[p1Gbfh];
                if ((552 - 552) > pFBzkr5x7Ypg[p1Gbfh]) {
                    pFBzkr5x7Ypg[p1Gbfh] += (231 - 221);
                    pFBzkr5x7Ypg[p1Gbfh + (563 - 562)] -= (548 - 547);
                }
                p1Gbfh++;
            }
        }
        while ((847 - 847) > pFBzkr5x7Ypg[p1Gbfh]) {
            pFBzkr5x7Ypg[p1Gbfh] += 10;
            pFBzkr5x7Ypg[++p1Gbfh] -= (542 - 541);
        }
        while (pFBzkr5x7Ypg[Hon9EOTju] == (231 - 231))
            Hon9EOTju--;
        for (p1Gbfh = Hon9EOTju; p1Gbfh >= (848 - 848); p1Gbfh--)
            printf ("%d", pFBzkr5x7Ypg[p1Gbfh]);
    }
}

