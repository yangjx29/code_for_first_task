void  main () {
    int max;
    int B5HF8gQNGBCX;
    int LSWpj2FU [(1007 - 981)] = {(21 - 21)};
    int Krk3vdg;
    int n;
    struct   CaP5U06DMf {
        int h0eT2IHG;
        char CeAEqHVM [(120 - 94)];
    }
    CaP5U06DMf [999];
    int YhpMXIcys0mC;
    max = (701 - 701);
    scanf ("%d", &n);
    {
        YhpMXIcys0mC = (924 - 924);
        while (n > YhpMXIcys0mC) {
            scanf ("%d %s", &CaP5U06DMf[YhpMXIcys0mC].h0eT2IHG, &CaP5U06DMf[YhpMXIcys0mC].CeAEqHVM);
            YhpMXIcys0mC++;
        }
    }
    for (YhpMXIcys0mC = (833 - 833); n > YhpMXIcys0mC; YhpMXIcys0mC = YhpMXIcys0mC +1) {
        for (B5HF8gQNGBCX = 0; (153 - 127) > B5HF8gQNGBCX; B5HF8gQNGBCX++)
            LSWpj2FU[(CaP5U06DMf[YhpMXIcys0mC].CeAEqHVM[B5HF8gQNGBCX] - (447 - 382))]++;
    }
    Krk3vdg = 0;
    printf ("%c\n", Krk3vdg +(254 - 189));
    {
        YhpMXIcys0mC = 0;
        while (26 > YhpMXIcys0mC) {
            if (LSWpj2FU[YhpMXIcys0mC] > max) {
                max = LSWpj2FU[YhpMXIcys0mC];
                Krk3vdg = YhpMXIcys0mC;
            }
            YhpMXIcys0mC++;
        }
    }
    printf ("%d\n", max);
    {
        YhpMXIcys0mC = 0;
        while (YhpMXIcys0mC < n) {
            for (B5HF8gQNGBCX = 0; B5HF8gQNGBCX < 26; B5HF8gQNGBCX++)
                if (CaP5U06DMf[YhpMXIcys0mC].CeAEqHVM[B5HF8gQNGBCX] == Krk3vdg +65) {
                    printf ("%d\n", CaP5U06DMf[YhpMXIcys0mC].h0eT2IHG);
                    break;
                }
            YhpMXIcys0mC++;
        }
    }
}

