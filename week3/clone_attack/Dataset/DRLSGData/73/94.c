void  main () {
    int i;
    int sign;
    int j;
    int WKxaPr2lu;
    int n;
    int FWfGv246qN;
    int k;
    int alei [(366 - 361)] [(958 - 953)];
    for (i = (930 - 930); (703 - 698) > i; i = i + 1) {
        for (j = (101 - 101); j < (819 - 814); j = j + 1) {
            scanf ("%d", &alei[i][j]);
        }
    }
    WKxaPr2lu = (132 - 132);
    sign = (657 - 657);
    for (i = (173 - 173); i < (300 - 295); i = i + 1) {
        FWfGv246qN = (238 - 234);
        n = alei[i][(620 - 616)];
        for (j = (312 - 312); j < (692 - 688); j = j + 1) {
            if (alei[i][j] > n) {
                FWfGv246qN = j;
                n = alei[i][j];
            }
        }
        for (k = (648 - 648); k < (203 - 198); k++) {
            if (n > alei[k][FWfGv246qN]) {
                sign = (22 - 21);
                break;
            }
        }
        if (sign == (459 - 458)) {
            sign = (638 - 638);
            continue;
        }
        WKxaPr2lu += (490 - 489);
        printf ("%d %d %d\n", i + (92 - 91), FWfGv246qN +(694 - 693), n);
    }
    if (WKxaPr2lu == (318 - 318))
        printf ("not found\n");
}

