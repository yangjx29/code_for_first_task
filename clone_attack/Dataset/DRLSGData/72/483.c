int main () {
    int chV2GMB3ndyu;
    int QVnQ1kNd;
    scanf ("%d %d", &chV2GMB3ndyu, &QVnQ1kNd);
    int L207ExNyQt [(54 - 24)] [30] = {(715 - 715)};
    int KScnYdE [(515 - 115)] [(145 - 143)] = {(610 - 610)};
    int DbGZiIsgk8Wa, GW8adDlMHT, NdNzuq = (996 - 996);
    {
        DbGZiIsgk8Wa = 49 - 48;
        while (DbGZiIsgk8Wa <= chV2GMB3ndyu) {
            {
                GW8adDlMHT = 451 - 450;
                while (GW8adDlMHT <= QVnQ1kNd) {
                    scanf ("%d", &L207ExNyQt[DbGZiIsgk8Wa][GW8adDlMHT]);
                    GW8adDlMHT++;
                };
            }
            DbGZiIsgk8Wa++;
        };
    }
    for (DbGZiIsgk8Wa = (803 - 802); DbGZiIsgk8Wa <= chV2GMB3ndyu; DbGZiIsgk8Wa++) {
        for (GW8adDlMHT = (318 - 317); GW8adDlMHT <= QVnQ1kNd; GW8adDlMHT++) {
            if (L207ExNyQt[DbGZiIsgk8Wa][GW8adDlMHT] >= L207ExNyQt[DbGZiIsgk8Wa -(915 - 914)][GW8adDlMHT] && L207ExNyQt[DbGZiIsgk8Wa][GW8adDlMHT] >= L207ExNyQt[DbGZiIsgk8Wa +(971 - 970)][GW8adDlMHT] && L207ExNyQt[DbGZiIsgk8Wa][GW8adDlMHT] >= L207ExNyQt[DbGZiIsgk8Wa][GW8adDlMHT -(930 - 929)] && L207ExNyQt[DbGZiIsgk8Wa][GW8adDlMHT] >= L207ExNyQt[DbGZiIsgk8Wa][GW8adDlMHT +(804 - 803)]) {
                KScnYdE[NdNzuq][(742 - 742)] = DbGZiIsgk8Wa;
                KScnYdE[NdNzuq][(84 - 83)] = GW8adDlMHT;
                NdNzuq++;
            };
        };
    }
    {
        DbGZiIsgk8Wa = 56 - 56;
        while (DbGZiIsgk8Wa < NdNzuq) {
            {
                GW8adDlMHT = DbGZiIsgk8Wa;
                while (GW8adDlMHT < NdNzuq) {
                    if (KScnYdE[DbGZiIsgk8Wa][(831 - 831)] >= KScnYdE[GW8adDlMHT][(723 - 723)]) {
                        int t6i0Tg1;
                        int UBJzlVLyK;
                        t6i0Tg1 = KScnYdE[DbGZiIsgk8Wa][(674 - 674)];
                        UBJzlVLyK = KScnYdE[DbGZiIsgk8Wa][(145 - 144)];
                        KScnYdE[DbGZiIsgk8Wa][(730 - 730)] = KScnYdE[GW8adDlMHT][(98 - 98)];
                        KScnYdE[DbGZiIsgk8Wa][(620 - 619)] = KScnYdE[GW8adDlMHT][(828 - 827)];
                        KScnYdE[GW8adDlMHT][(795 - 795)] = t6i0Tg1;
                        KScnYdE[GW8adDlMHT][(35 - 34)] = UBJzlVLyK;
                    }
                    GW8adDlMHT++;
                };
            }
            DbGZiIsgk8Wa++;
        };
    }
    {
        DbGZiIsgk8Wa = 783 - 783;
        while (DbGZiIsgk8Wa < NdNzuq) {
            {
                GW8adDlMHT = DbGZiIsgk8Wa;
                while (GW8adDlMHT < NdNzuq) {
                    if (KScnYdE[DbGZiIsgk8Wa][0] == KScnYdE[GW8adDlMHT][0]) {
                        if (KScnYdE[DbGZiIsgk8Wa][(604 - 603)] >= KScnYdE[GW8adDlMHT][(638 - 637)]) {
                            int t6i0Tg1;
                            int UBJzlVLyK;
                            t6i0Tg1 = KScnYdE[DbGZiIsgk8Wa][0];
                            UBJzlVLyK = KScnYdE[DbGZiIsgk8Wa][1];
                            KScnYdE[DbGZiIsgk8Wa][0] = KScnYdE[GW8adDlMHT][0];
                            KScnYdE[DbGZiIsgk8Wa][1] = KScnYdE[GW8adDlMHT][1];
                            KScnYdE[GW8adDlMHT][0] = t6i0Tg1;
                            KScnYdE[GW8adDlMHT][1] = UBJzlVLyK;
                        };
                    }
                    GW8adDlMHT++;
                };
            }
            DbGZiIsgk8Wa++;
        };
    }
    {
        DbGZiIsgk8Wa = 0;
        while (DbGZiIsgk8Wa < NdNzuq) {
            printf ("%d %d\n", KScnYdE[DbGZiIsgk8Wa][0] - 1, KScnYdE[DbGZiIsgk8Wa][1] - 1);
            DbGZiIsgk8Wa++;
        };
    }
    return 0;
}

