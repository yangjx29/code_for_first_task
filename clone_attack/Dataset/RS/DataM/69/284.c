int main () {
    int wGLUaj = (571 - 571), sl2 = (993 - 993), i, dkYoxh, YSAm3Tlu, ODcJuOjPVsx = (779 - 779), P6WPHzr = (104 - 104);
    char MonL0JI [(1005 - 755)];
    char ZFJP03HVip [(458 - 208)];
    char Yu6RoEsfW5 [(560 - 310)];
    char R1y0FoKJuSZT [255];
    gets (ZFJP03HVip);
    gets (MonL0JI);
    strcpy (Yu6RoEsfW5, ZFJP03HVip);
    {
        i = 712 - 712;
        while (ZFJP03HVip[i] != (332 - 332) && ('0' <= ZFJP03HVip[i] && ZFJP03HVip[i] <= '9')) {
            i = i + 1;
            wGLUaj = wGLUaj + 1;
        };
    }
    {
        i = 222 - 222;
        while (!((308 - 308) == MonL0JI[i]) && (MonL0JI[i] >= '0' && MonL0JI[i] <= '9')) {
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sl2++;
        };
    }
    if (wGLUaj < sl2) {
        strcpy (ZFJP03HVip, MonL0JI);
        strcpy (MonL0JI, Yu6RoEsfW5);
        YSAm3Tlu = wGLUaj;
        wGLUaj = sl2;
        sl2 = YSAm3Tlu;
    }
    {
        dkYoxh = 259 - 259;
        while (dkYoxh <= sl2) {
            MonL0JI[wGLUaj - dkYoxh] = MonL0JI[sl2 - dkYoxh];
            dkYoxh = dkYoxh + 1;
        };
    }
    {
        dkYoxh = 263 - 262;
        while (dkYoxh <= wGLUaj) {
            MonL0JI[wGLUaj - dkYoxh] = '0';
            dkYoxh = dkYoxh + 1;
        };
    }
    {
        i = 989 - 988;
        while (i >= 0) {
            if (ZFJP03HVip[i] - '0' + MonL0JI[i] - '0' + ODcJuOjPVsx > (818 - 809)) {
                R1y0FoKJuSZT[i] = '0' + (ZFJP03HVip[i] - '0' + MonL0JI[i] - '0' + ODcJuOjPVsx) % 10;
                ODcJuOjPVsx = (604 - 603);
            }
            else {
                R1y0FoKJuSZT[i] = ZFJP03HVip[i] + MonL0JI[i] + ODcJuOjPVsx -'0';
                ODcJuOjPVsx = 0;
            }
            i = i - 1;
        };
    }
    if (ODcJuOjPVsx == 1) {
        P6WPHzr = 1;
        printf ("1");
    }
    for (dkYoxh = 0; dkYoxh < wGLUaj; dkYoxh = dkYoxh + 1) {
        if (R1y0FoKJuSZT[dkYoxh] == '0' && P6WPHzr == 0 && dkYoxh != wGLUaj - 1) {
            P6WPHzr = 0;
            continue;
        }
        printf ("%c", R1y0FoKJuSZT[dkYoxh]);
        P6WPHzr = 1;
    }
    return 0;
}

