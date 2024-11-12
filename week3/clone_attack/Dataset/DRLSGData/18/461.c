int main () {
    int MlqahMr, Fh2sY4DLMF, j51Ejs8Mhq;
    int bWOfvI;
    cin >> bWOfvI;
    for (MlqahMr = (455 - 454); bWOfvI >= MlqahMr; MlqahMr++) {
        int jULB79Opa = (437 - 435);
        int vnaLrF8 [110] [110] = {(800 - 800)};
        int b6fiW8L = bWOfvI, PvPV9eF2 = (787 - 787), SNLoaghKwHBf = (10761 - 761);
        int bi [(365 - 255)] = {(620 - 620)}, HpnsCYK [110] = {(888 - 888)};
        {
            Fh2sY4DLMF = (905 - 904);
            while (Fh2sY4DLMF <= bWOfvI) {
                for (j51Ejs8Mhq = (743 - 742); bWOfvI >= j51Ejs8Mhq; j51Ejs8Mhq++) {
                    cin >> vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq];
                }
                Fh2sY4DLMF++;
            };
        }
        {
            b6fiW8L = bWOfvI;
            while (2 <= b6fiW8L) {
                {
                    Fh2sY4DLMF = 676 - 675;
                    while (bWOfvI >= Fh2sY4DLMF) {
                        if (!((734 - 733) != bi[Fh2sY4DLMF]))
                            continue;
                        {
                            j51Ejs8Mhq = (938 - 937);
                            while (j51Ejs8Mhq <= bWOfvI) {
                                if ((!(0 != HpnsCYK[j51Ejs8Mhq])) && (vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq] <= SNLoaghKwHBf))
                                    SNLoaghKwHBf = vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq];
                                j51Ejs8Mhq++;
                            };
                        }
                        if (SNLoaghKwHBf != 0) {
                            j51Ejs8Mhq = 1;
                            while (j51Ejs8Mhq <= bWOfvI) {
                                vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq] = vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq] - SNLoaghKwHBf;
                                j51Ejs8Mhq++;
                            };
                        }
                        Fh2sY4DLMF++;
                        SNLoaghKwHBf = (10752 - 752);
                    };
                }
                SNLoaghKwHBf = 10000;
                for (j51Ejs8Mhq = 1; j51Ejs8Mhq <= bWOfvI; j51Ejs8Mhq++) {
                    if (HpnsCYK[j51Ejs8Mhq] == 1)
                        continue;
                    for (Fh2sY4DLMF = 1; Fh2sY4DLMF <= bWOfvI; Fh2sY4DLMF++) {
                        if ((bi[Fh2sY4DLMF] == 0) && (vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq] <= SNLoaghKwHBf))
                            SNLoaghKwHBf = vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq];
                    }
                    if (SNLoaghKwHBf != 0) {
                        Fh2sY4DLMF = 1;
                        while (Fh2sY4DLMF <= bWOfvI) {
                            vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq] = vnaLrF8[Fh2sY4DLMF][j51Ejs8Mhq] - SNLoaghKwHBf;
                            Fh2sY4DLMF++;
                        };
                    }
                    SNLoaghKwHBf = 100000;
                }
                b6fiW8L--;
                SNLoaghKwHBf = 10000;
                PvPV9eF2 = PvPV9eF2 +vnaLrF8[jULB79Opa][jULB79Opa];
                bi[jULB79Opa] = 1;
                HpnsCYK[jULB79Opa] = 1;
                jULB79Opa++;
            };
        }
        cout << PvPV9eF2 << endl;
    }
    return 0;
}

