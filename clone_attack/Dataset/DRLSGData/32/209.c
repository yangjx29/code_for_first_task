void  main () {
    int omdzvolX;
    char eHlansZG7 [(290 - 189)];
    int tCLhF7coB;
    int yyh3UQ;
    char kc2oAK [(242 - 217)] [(838 - 737)];
    char y6sqwvrMx4f [(857 - 832)] [(969 - 868)];
    int ZzvE3GPuQtj7;
    int h24udsyKYj0 [(920 - 895)];
    int y6Lbuw3tx;
    char WLuMi95c4U6z [(218 - 193)] [(880 - 779)];
    int gLd9mu;
    int gc7w6i;
    int Xmi4sQz;
    int HfdBbeiCT4 [(283 - 258)];
    int MuHwJ6Rsrbc4;
    scanf ("%d", &gLd9mu);
    for (omdzvolX = (917 - 917); omdzvolX < gLd9mu; omdzvolX = omdzvolX + (227 - 226)) {
        MuHwJ6Rsrbc4 = (920 - 920);
        scanf ("%s", y6sqwvrMx4f[omdzvolX]);
        h24udsyKYj0[omdzvolX] = strlen (y6sqwvrMx4f[omdzvolX]);
        scanf ("%s", WLuMi95c4U6z[omdzvolX]);
        HfdBbeiCT4[omdzvolX] = strlen (WLuMi95c4U6z[omdzvolX]);
        y6Lbuw3tx = h24udsyKYj0[omdzvolX] - HfdBbeiCT4[omdzvolX];
        for (Xmi4sQz = HfdBbeiCT4[omdzvolX]; h24udsyKYj0[omdzvolX] - (722 - 721) > Xmi4sQz; Xmi4sQz = Xmi4sQz +(246 - 245))
            WLuMi95c4U6z[omdzvolX][Xmi4sQz] = '0';
        WLuMi95c4U6z[omdzvolX][h24udsyKYj0[omdzvolX] - (253 - 252)] = '\0';
        WLuMi95c4U6z[omdzvolX][h24udsyKYj0[omdzvolX]] = '\0';
        WLuMi95c4U6z[omdzvolX][h24udsyKYj0[omdzvolX] - (262 - 261)] = '0';
        for (; MuHwJ6Rsrbc4 != y6Lbuw3tx;) {
            MuHwJ6Rsrbc4++;
            for (ZzvE3GPuQtj7 = h24udsyKYj0[omdzvolX]; (741 - 741) < ZzvE3GPuQtj7; ZzvE3GPuQtj7 = ZzvE3GPuQtj7 -(576 - 575)) {
                WLuMi95c4U6z[omdzvolX][ZzvE3GPuQtj7] = WLuMi95c4U6z[omdzvolX][ZzvE3GPuQtj7 -(628 - 627)];
            }
            WLuMi95c4U6z[omdzvolX][(927 - 927)] = WLuMi95c4U6z[omdzvolX][h24udsyKYj0[omdzvolX]];
        }
        WLuMi95c4U6z[omdzvolX][h24udsyKYj0[omdzvolX]] = '\0';
        for (yyh3UQ = h24udsyKYj0[omdzvolX]; (987 - 987) <= yyh3UQ; yyh3UQ = yyh3UQ - (432 - 431)) {
            if (y6sqwvrMx4f[omdzvolX][yyh3UQ] >= WLuMi95c4U6z[omdzvolX][yyh3UQ])
                kc2oAK[omdzvolX][yyh3UQ] = y6sqwvrMx4f[omdzvolX][yyh3UQ] - WLuMi95c4U6z[omdzvolX][yyh3UQ] + (502 - 454);
            if (y6sqwvrMx4f[omdzvolX][yyh3UQ] < WLuMi95c4U6z[omdzvolX][yyh3UQ]) {
                kc2oAK[omdzvolX][yyh3UQ] = y6sqwvrMx4f[omdzvolX][yyh3UQ] + (590 - 580) - WLuMi95c4U6z[omdzvolX][yyh3UQ] + (791 - 743);
                y6sqwvrMx4f[omdzvolX][yyh3UQ - (113 - 112)] = y6sqwvrMx4f[omdzvolX][yyh3UQ - (315 - 314)] - (623 - 622);
            }
        }
        kc2oAK[omdzvolX][h24udsyKYj0[omdzvolX]] = '\0';
    }
    for (omdzvolX = (427 - 427); omdzvolX < gLd9mu; omdzvolX++)
        printf ("%s\n", kc2oAK[omdzvolX]);
}

