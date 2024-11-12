int main () {
    int RP1dCi [(884 - 862)] [(254 - 232)], YV8TDCx [(722 - 322)] [(165 - 163)];
    int mkQgXq0, r2PyB46, Wx6cSftnBG = (187 - 187), XKU84JHojm = (520 - 520), j = (709 - 709);
    scanf ("%d %d", &r2PyB46, &mkQgXq0);
    for (XKU84JHojm = (171 - 170); r2PyB46 >= XKU84JHojm; XKU84JHojm++) {
        j = 859 - 858;
        while (j <= mkQgXq0) {
            scanf ("%d", &RP1dCi[XKU84JHojm][j]);
            j++;
        }
    }
    {
        j = 536 - 536;
        while (j < mkQgXq0 + 2) {
            RP1dCi[(320 - 320)][j] = (893 - 893);
            RP1dCi[r2PyB46 + (377 - 376)][j] = (147 - 147);
            j++;
        }
    }
    {
        XKU84JHojm = 143 - 142;
        while (r2PyB46 >= XKU84JHojm) {
            RP1dCi[XKU84JHojm][(448 - 448)] = (954 - 954);
            RP1dCi[XKU84JHojm][mkQgXq0 + (278 - 277)] = (231 - 231);
            XKU84JHojm = XKU84JHojm +1;
        }
    }
    for (XKU84JHojm = (756 - 755); XKU84JHojm <= r2PyB46; XKU84JHojm++) {
        j = 250 - 249;
        while (j <= mkQgXq0) {
            if (RP1dCi[XKU84JHojm][j] >= RP1dCi[XKU84JHojm -(421 - 420)][j] && RP1dCi[XKU84JHojm][j] >= RP1dCi[XKU84JHojm +(551 - 550)][j] && RP1dCi[XKU84JHojm][j] >= RP1dCi[XKU84JHojm][j - (995 - 994)] && RP1dCi[XKU84JHojm][j] >= RP1dCi[XKU84JHojm][j + (583 - 582)]) {
                Wx6cSftnBG = Wx6cSftnBG +(68 - 67);
                YV8TDCx[Wx6cSftnBG -(16 - 15)][(667 - 667)] = XKU84JHojm -(303 - 302);
                YV8TDCx[Wx6cSftnBG -(802 - 801)][1] = j - 1;
            }
            j++;
        }
    }
    {
        XKU84JHojm = 23 - 23;
        while (XKU84JHojm < Wx6cSftnBG) {
            printf ("%d %d\n", YV8TDCx[XKU84JHojm][0], YV8TDCx[XKU84JHojm][1]);
            XKU84JHojm = XKU84JHojm +1;
        }
    }
    return 0;
}

