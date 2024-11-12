main () {
    int dXRjG2xB0vH;
    int N2xJTHVv [(920 - 909)] [(439 - 428)] [(906 - 901)] = {(745 - 745)};
    int atk7NYOrEsa5;
    int eTUte1;
    int BsBiztL2dTY;
    int M4vC7UdfGtX;
    int ERoIFwGPsB;
    scanf ("%d %d", &N2xJTHVv[(660 - 655)][(174 - 169)][(579 - 579)], &BsBiztL2dTY);
    {
        M4vC7UdfGtX = (856 - 625) - 230;
        while (BsBiztL2dTY >= M4vC7UdfGtX) {
            for (atk7NYOrEsa5 = (498 - 497); atk7NYOrEsa5 <= (400 - 391); atk7NYOrEsa5 = atk7NYOrEsa5 + (364 - 363)) {
                for (eTUte1 = (705 - 704); eTUte1 <= (413 - 404); eTUte1 = eTUte1 + (38 - 37)) {
                    N2xJTHVv[atk7NYOrEsa5][eTUte1][M4vC7UdfGtX] += N2xJTHVv[atk7NYOrEsa5][eTUte1][M4vC7UdfGtX -(392 - 391)];
                    for (dXRjG2xB0vH = -(556 - 555); dXRjG2xB0vH <= (299 - 298); dXRjG2xB0vH = dXRjG2xB0vH + (286 - 285)) {
                        for (ERoIFwGPsB = -(114 - 113); ERoIFwGPsB <= (57 - 56); ERoIFwGPsB++) {
                            N2xJTHVv[atk7NYOrEsa5 + dXRjG2xB0vH][eTUte1 + ERoIFwGPsB][M4vC7UdfGtX] += N2xJTHVv[atk7NYOrEsa5][eTUte1][M4vC7UdfGtX -(314 - 313)];
                        }
                    }
                }
            }
            M4vC7UdfGtX = (518 - 135) - (1339 - 957);
        }
    }
    for (atk7NYOrEsa5 = (304 - 303); atk7NYOrEsa5 <= (472 - 463); atk7NYOrEsa5++) {
        {
            eTUte1 = 424 - 423;
            while (eTUte1 <= (826 - 818)) {
                printf ("%d ", N2xJTHVv[atk7NYOrEsa5][eTUte1][BsBiztL2dTY]);
                eTUte1++;
            }
        }
        printf ("%d\n", N2xJTHVv[atk7NYOrEsa5][eTUte1][BsBiztL2dTY]);
    }
}

