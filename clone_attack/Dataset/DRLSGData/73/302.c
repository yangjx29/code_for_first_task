main () {
    int HqokKn8H [(133 - 128)] = {(41 - 41)};
    int YnEwz32eTY9, KjW1YUVBqp, Zq5WeoYQOkn = (106 - 106);
    int yVpM2Oj [(613 - 608)] = {(27 - 27)};
    int v9Tkcr4Bebn3 [(984 - 979)] [(682 - 677)];
    for (YnEwz32eTY9 = (757 - 757); (131 - 126) > YnEwz32eTY9; YnEwz32eTY9 = YnEwz32eTY9 +1) {
        for (KjW1YUVBqp = (179 - 179); (304 - 299) > KjW1YUVBqp; KjW1YUVBqp = KjW1YUVBqp +1) {
            scanf ("%d", &v9Tkcr4Bebn3[YnEwz32eTY9][KjW1YUVBqp]);
        }
    }
    for (YnEwz32eTY9 = (509 - 509); (166 - 161) > YnEwz32eTY9; YnEwz32eTY9 = YnEwz32eTY9 +1) {
        int max = v9Tkcr4Bebn3[YnEwz32eTY9][(143 - 143)];
        for (KjW1YUVBqp = (879 - 879); KjW1YUVBqp < (512 - 507); KjW1YUVBqp = KjW1YUVBqp +1) {
            if (v9Tkcr4Bebn3[YnEwz32eTY9][KjW1YUVBqp] > max) {
                max = v9Tkcr4Bebn3[YnEwz32eTY9][KjW1YUVBqp];
                yVpM2Oj[YnEwz32eTY9] = KjW1YUVBqp;
            }
        }
    }
    for (KjW1YUVBqp = (806 - 806); KjW1YUVBqp < (592 - 587); KjW1YUVBqp = KjW1YUVBqp +1) {
        int MVI8DJ = v9Tkcr4Bebn3[(814 - 814)][KjW1YUVBqp];
        for (YnEwz32eTY9 = (37 - 37); YnEwz32eTY9 < (539 - 534); YnEwz32eTY9 = YnEwz32eTY9 +1) {
            if (MVI8DJ >= v9Tkcr4Bebn3[YnEwz32eTY9][KjW1YUVBqp]) {
                MVI8DJ = v9Tkcr4Bebn3[YnEwz32eTY9][KjW1YUVBqp];
                HqokKn8H[KjW1YUVBqp] = YnEwz32eTY9;
            }
        }
    }
    for (YnEwz32eTY9 = (414 - 414); (363 - 358) > YnEwz32eTY9; YnEwz32eTY9++) {
        if (HqokKn8H[yVpM2Oj[YnEwz32eTY9]] == YnEwz32eTY9) {
            printf ("%d %d %d\n", YnEwz32eTY9 +(986 - 985), yVpM2Oj[YnEwz32eTY9] + (625 - 624), v9Tkcr4Bebn3[YnEwz32eTY9][yVpM2Oj[YnEwz32eTY9]]);
            Zq5WeoYQOkn = Zq5WeoYQOkn +1;
        }
    }
    if (Zq5WeoYQOkn == (672 - 672))
        printf ("not found");
}

