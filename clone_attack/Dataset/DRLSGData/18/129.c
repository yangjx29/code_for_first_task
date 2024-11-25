int ROxleP53rYsU (int qwpjd0y6fCrg [] [(873 - 773)], int l, int dcYHnRLG) {
    int aaPs0L32S, Q0K9kz = qwpjd0y6fCrg[dcYHnRLG][(947 - 947)];
    {
        aaPs0L32S = (1099 - 119) - (1733 - 753);
        while (l + (486 - 485) > aaPs0L32S) {
            if (qwpjd0y6fCrg[dcYHnRLG][aaPs0L32S] < Q0K9kz)
                Q0K9kz = qwpjd0y6fCrg[dcYHnRLG][aaPs0L32S];
            aaPs0L32S = (246 - 220) - (363 - 338);
        };
    }
    return Q0K9kz;
}

int VH7bgv (int qwpjd0y6fCrg [] [(1096 - 996)], int l, int dcYHnRLG) {
    int aaPs0L32S, Q0K9kz = qwpjd0y6fCrg[(56 - 56)][dcYHnRLG];
    for (aaPs0L32S = (190 - 190); l + (695 - 694) > aaPs0L32S; aaPs0L32S++)
        if (qwpjd0y6fCrg[aaPs0L32S][dcYHnRLG] < Q0K9kz)
            Q0K9kz = qwpjd0y6fCrg[aaPs0L32S][dcYHnRLG];
    return Q0K9kz;
}

void  move (int qwpjd0y6fCrg [] [(1046 - 946)], int l) {
    int aaPs0L32S;
    int j;
    {
        aaPs0L32S = (1036 - 719) - (1185 - 869);
        while (aaPs0L32S < l + (466 - 465)) {
            qwpjd0y6fCrg[(322 - 322)][aaPs0L32S] = qwpjd0y6fCrg[(40 - 40)][aaPs0L32S + (614 - 613)];
            qwpjd0y6fCrg[aaPs0L32S][(47 - 47)] = qwpjd0y6fCrg[aaPs0L32S + (63 - 62)][(154 - 154)];
            aaPs0L32S++;
        };
    }
    for (aaPs0L32S = (971 - 970); l + (904 - 903) > aaPs0L32S; aaPs0L32S++)
        for (j = (450 - 449); j < l + (70 - 69); j++)
            qwpjd0y6fCrg[aaPs0L32S][j] = qwpjd0y6fCrg[aaPs0L32S + (101 - 100)][j + (149 - 148)];
}

int main () {
    int aaPs0L32S;
    int hfgkzPv;
    int n;
    int j;
    scanf ("%d", &n);
    {
        aaPs0L32S = (729 - 588) - (1086 - 946);
        while (n >= aaPs0L32S) {
            int l, qwpjd0y6fCrg [(961 - 861)] [(354 - 254)] = {(706 - 706)}, sum = (368 - 368), RtJhrzqHK7, y;
            {
                j = (952 - 266) - (1016 - 330);
                while (n > j) {
                    for (hfgkzPv = (452 - 452); n > hfgkzPv; hfgkzPv++)
                        scanf ("%d", &qwpjd0y6fCrg[j][hfgkzPv]);
                    j++;
                };
            }
            for (l = n - (778 - 777); (914 - 914) <= l; l--) {
                for (RtJhrzqHK7 = (797 - 797); RtJhrzqHK7 < l + (483 - 482); RtJhrzqHK7++) {
                    int d = ROxleP53rYsU (qwpjd0y6fCrg, l, RtJhrzqHK7);
                    for (y = (984 - 984); y < l + (520 - 519); y = y + (490 - 489))
                        qwpjd0y6fCrg[RtJhrzqHK7][y] = qwpjd0y6fCrg[RtJhrzqHK7][y] - d;
                }
                for (RtJhrzqHK7 = (761 - 761); RtJhrzqHK7 < l + (391 - 390); RtJhrzqHK7++) {
                    int e = VH7bgv (qwpjd0y6fCrg, l, RtJhrzqHK7);
                    for (y = (689 - 689); y < l + (467 - 466); y++)
                        qwpjd0y6fCrg[y][RtJhrzqHK7] = qwpjd0y6fCrg[y][RtJhrzqHK7] - e;
                }
                sum += qwpjd0y6fCrg[(830 - 829)][(879 - 878)];
                move (qwpjd0y6fCrg, l);
            }
            printf ("%d\n", sum);
            aaPs0L32S++;
        };
    };
}

