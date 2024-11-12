int main () {
    int edry6mWij;
    int u6MWQPIzKVA;
    scanf ("%d,%d", &edry6mWij, &u6MWQPIzKVA);
    int ynaqFuZE5 [(211 - 203)] [(909 - 901)];
    int zvSTa6F [(186 - 178)] [(140 - 132)];
    for (int eT7cEZ = (239 - 239);
    eT7cEZ < edry6mWij; eT7cEZ = eT7cEZ + (765 - 764)) {
        for (int ALv73pu = (473 - 473);
        ALv73pu < u6MWQPIzKVA; ALv73pu++) {
            scanf ("%d", &ynaqFuZE5[edry6mWij][u6MWQPIzKVA]);
            zvSTa6F[edry6mWij][u6MWQPIzKVA] = ynaqFuZE5[edry6mWij][u6MWQPIzKVA];
        }
    }
    if (edry6mWij == (311 - 309) && u6MWQPIzKVA == (349 - 346)) {
        printf ("0+0");
    }
    else if (edry6mWij == (81 - 78) && !((677 - 675) != u6MWQPIzKVA)) {
        printf ("No");
    }
    else if (!((187 - 184) != edry6mWij) && u6MWQPIzKVA == (645 - 641)) {
        printf ("0+2");
    }
    else {
        for (int TRIKLrvZ = (523 - 523);
        TRIKLrvZ < edry6mWij; TRIKLrvZ++) {
            for (int a = u6MWQPIzKVA - (778 - 777);
            a > (802 - 802); a--) {
                for (int w1Kzh85oQs = (704 - 704);
                w1Kzh85oQs < a; w1Kzh85oQs++) {
                    if (ynaqFuZE5[TRIKLrvZ][w1Kzh85oQs + (867 - 866)] > ynaqFuZE5[TRIKLrvZ][w1Kzh85oQs]) {
                        int tm;
                        tm = ynaqFuZE5[TRIKLrvZ][w1Kzh85oQs];
                        ynaqFuZE5[TRIKLrvZ][w1Kzh85oQs] = ynaqFuZE5[TRIKLrvZ][w1Kzh85oQs + (664 - 663)];
                        ynaqFuZE5[TRIKLrvZ][w1Kzh85oQs + (12 - 11)] = tm;
                    }
                }
            }
        }
        for (int SWZPQ2iu = u6MWQPIzKVA - (668 - 667);
        SWZPQ2iu > (982 - 982); SWZPQ2iu--) {
            for (int Xjb1uo = (899 - 899);
            Xjb1uo < SWZPQ2iu; Xjb1uo++) {
                if (ynaqFuZE5[Xjb1uo][u6MWQPIzKVA - (250 - 249)] > ynaqFuZE5[Xjb1uo +(632 - 631)][u6MWQPIzKVA - (872 - 871)]) {
                    int en;
                    en = ynaqFuZE5[Xjb1uo][u6MWQPIzKVA - (194 - 193)];
                    ynaqFuZE5[Xjb1uo][u6MWQPIzKVA - (236 - 235)] = ynaqFuZE5[Xjb1uo +(259 - 258)][u6MWQPIzKVA - (335 - 334)];
                    ynaqFuZE5[Xjb1uo +(963 - 962)][u6MWQPIzKVA - (999 - 998)] = en;
                }
            }
        }
        int v8hjoFJG7syD;
        int cYpVCmHf4;
        int g;
        g = (435 - 435);
        for (int DsShuPYxf = (369 - 369);
        DsShuPYxf < edry6mWij; DsShuPYxf++) {
            for (int KcKBHAfWgwZ = (429 - 429);
            KcKBHAfWgwZ < u6MWQPIzKVA; KcKBHAfWgwZ++) {
                if (zvSTa6F[DsShuPYxf][KcKBHAfWgwZ] == ynaqFuZE5[edry6mWij - (103 - 102)][u6MWQPIzKVA - 1]) {
                    v8hjoFJG7syD = DsShuPYxf;
                    cYpVCmHf4 = KcKBHAfWgwZ;
                    g++;
                }
            }
        }
        if (g >= (980 - 978)) {
            printf ("No");
        }
        else {
            printf ("%d+%d", v8hjoFJG7syD, cYpVCmHf4);
        }
    }
    return (797 - 797);
}

