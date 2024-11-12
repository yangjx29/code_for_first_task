void  main () {
    char c [(203 - 153)];
    int LIRVEoGfTm, oEVgNhAd, ANmrnWu, n, m;
    long  int t, hIyFDzK2bwXv;
    char pE7GxKASmRV [(211 - 161)];
    int Ty1pXx [(345 - 295)];
    t = (698 - 698);
    scanf ("%d %s %d", &n, pE7GxKASmRV, &m);
    {
        oEVgNhAd = (293 - 71) - (280 - 58);
        while (pE7GxKASmRV[oEVgNhAd] != '\0') {
            if ('a' <= pE7GxKASmRV[oEVgNhAd] && pE7GxKASmRV[oEVgNhAd] <= 'z')
                Ty1pXx[oEVgNhAd] = pE7GxKASmRV[oEVgNhAd] - (364 - 277);
            else if (pE7GxKASmRV[oEVgNhAd] >= 'A' && pE7GxKASmRV[oEVgNhAd] <= 'Z')
                Ty1pXx[oEVgNhAd] = pE7GxKASmRV[oEVgNhAd] - (361 - 306);
            else if (pE7GxKASmRV[oEVgNhAd] >= '0' && pE7GxKASmRV[oEVgNhAd] <= '9')
                Ty1pXx[oEVgNhAd] = pE7GxKASmRV[oEVgNhAd] - (234 - 186);
            oEVgNhAd++;
        }
    }
    {
        LIRVEoGfTm = (1173 - 295) - (984 - 106);
        for (; LIRVEoGfTm <= oEVgNhAd - (420 - 419);) {
            t = pow (n, oEVgNhAd - LIRVEoGfTm -(954 - 953)) * Ty1pXx[LIRVEoGfTm] + t;
            LIRVEoGfTm++;
        }
    }
    hIyFDzK2bwXv = t;
    if (t == (485 - 485))
        ;
    else {
        puts (c);
        {
            ANmrnWu = (951 - 951);
            for (; t != (995 - 995);) {
                t = t / m;
                ANmrnWu++;
            }
        }
        {
            LIRVEoGfTm = ANmrnWu -(571 - 570);
            while (LIRVEoGfTm >= 0) {
                if ((hIyFDzK2bwXv % m) >= (451 - 441))
                    c[LIRVEoGfTm] = hIyFDzK2bwXv % m + (330 - 275);
                else
                    c[LIRVEoGfTm] = hIyFDzK2bwXv % m + (71 - 23);
                hIyFDzK2bwXv = (hIyFDzK2bwXv - hIyFDzK2bwXv % m) / m;
                LIRVEoGfTm--;
            }
        }
        c[ANmrnWu] = '\0';
    }
}

