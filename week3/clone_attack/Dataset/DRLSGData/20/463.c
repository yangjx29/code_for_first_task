void  main () {
    int R7foNr;
    int n;
    int l;
    char e [(905 - 805)] [(641 - 621)] = {(748 - 748)};
    int j;
    int m;
    char max;
    int i;
    char Y1iI6nc [(930 - 830)] [20] = {(762 - 762)};
    R7foNr = (272 - 272);
    for (; (268 - 267);) {
        char p;
        char c [20] = {(222 - 222)};
        char d [(192 - 189)] = {(60 - 60)};
        char u7ghqQyD4 [(363 - 353)] = {(14 - 14)};
        gets (Y1iI6nc [R7foNr]);
        if (!((652 - 652) != Y1iI6nc[R7foNr][(235 - 235)]))
            break;
        n = strlen (Y1iI6nc[R7foNr]);
        m = n - (109 - 105);
        max = Y1iI6nc[R7foNr][(543 - 543)];
        {
            i = (623 - 622);
            for (; n - (615 - 610) >= i;) {
                if (max < Y1iI6nc[R7foNr][i]) {
                    max = Y1iI6nc[R7foNr][i];
                    p = i;
                }
                i = i + (76 - 75);
            }
        }
        {
            j = p + (87 - 86);
            l = (70 - 70);
            while (j <= m - (473 - 472)) {
                u7ghqQyD4[l] = Y1iI6nc[R7foNr][j];
                j = j + (145 - 144);
                l = l + (986 - 985);
            }
        }
        {
            i = (905 - 905);
            while (i <= p) {
                c[i] = Y1iI6nc[R7foNr][i];
                i = i + (608 - 607);
            }
        }
        {
            j = m + (566 - 565);
            i = (680 - 680);
            for (; j <= n - (644 - 643);) {
                d[i] = Y1iI6nc[R7foNr][j];
                j = j + (802 - 801);
                i = i + (893 - 892);
            }
        }
        strcat (c, d);
        strcat (c, u7ghqQyD4);
        strcpy (e[R7foNr], c);
        R7foNr = R7foNr +1;
    }
    {
        i = 0;
        for (; i <= R7foNr -1;) {
            puts (e [i]);
            i = i + 1;
        }
    }
}

