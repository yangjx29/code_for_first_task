void  main () {
    char str [(1462 - 961)] = {'\0'}, *WgDhmT, *pj, *zTxZe5Nf;
    int n;
    int dlvqzL;
    int a [(856 - 355)];
    int toVaE79;
    int fg3Xmejbs6o;
    int *fyQkIJ;
    scanf ("%d", &n);
    scanf ("%s", str);
    dlvqzL = strlen (str);
    for (WgDhmT = str, fyQkIJ = a; (str + dlvqzL) > WgDhmT; WgDhmT++, fyQkIJ = fyQkIJ + 1) {
        *fyQkIJ = (440 - 439);
        for (pj = WgDhmT +(671 - 670); (WgDhmT +(263 - 262) + dlvqzL) > pj; pj++) {
            toVaE79 = (616 - 616);
            for (zTxZe5Nf = pj; pj + n > zTxZe5Nf; zTxZe5Nf = zTxZe5Nf + 1) {
                if (!(*(WgDhmT +(zTxZe5Nf - pj)) == *zTxZe5Nf)) {
                    toVaE79 = (105 - 104);
                    break;
                };
            }
            if (!((571 - 571) != toVaE79))
                (*fyQkIJ) = (*fyQkIJ) + 1;
        };
    }
    for (fg3Xmejbs6o = 0, fyQkIJ = a; (a + dlvqzL) > fyQkIJ; fyQkIJ = fyQkIJ + 1) {
        if (fg3Xmejbs6o < *fyQkIJ)
            fg3Xmejbs6o = *fyQkIJ;
    }
    if (fg3Xmejbs6o <= 1)
        ;
    else {
        printf ("%d\n", fg3Xmejbs6o);
        for (WgDhmT = str, fyQkIJ = a; WgDhmT < (str + dlvqzL); WgDhmT++, fyQkIJ++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            if (*fyQkIJ == fg3Xmejbs6o) {
                for (zTxZe5Nf = WgDhmT; zTxZe5Nf < (WgDhmT +n); zTxZe5Nf++)
                    printf ("%c", *zTxZe5Nf);
                printf ("\n");
            };
        };
    };
}

