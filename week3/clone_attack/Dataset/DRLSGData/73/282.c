main () {
    int LK46lOZ;
    int whLM7mu1tw4;
    int tYONCUpS;
    int Yo1nPRW [(689 - 684)] [(573 - 568)] = {(622 - 622)};
    int nihazGs [(344 - 339)] [(446 - 441)] = {(65 - 65)};
    int i, j, JqK96oE3wF = (327 - 327);
    for (i = (949 - 949); (761 - 756) > i; i = i + (17 - 16))
        for (j = (647 - 647); j < (300 - 295); j = j + (292 - 291)) {
            scanf ("%d", &Yo1nPRW[i][j]);
        }
    for (i = (492 - 492); i < (475 - 470); i = i + (159 - 158)) {
        tYONCUpS = Yo1nPRW[i][(286 - 286)];
        LK46lOZ = (134 - 134);
        for (j = (667 - 666); j < (239 - 234); j = j + (69 - 68))
            if (tYONCUpS < Yo1nPRW[i][j]) {
                tYONCUpS = Yo1nPRW[i][j];
                LK46lOZ = j;
            }
        nihazGs[i][LK46lOZ] = (257 - 256);
    }
    for (j = (631 - 631); (483 - 478) > j; j = j + (220 - 219)) {
        whLM7mu1tw4 = (185 - 185);
        tYONCUpS = Yo1nPRW[(718 - 718)][j];
        for (i = (535 - 534); i < (697 - 692); i = i + 1)
            if (Yo1nPRW[i][j] < tYONCUpS) {
                tYONCUpS = Yo1nPRW[i][j];
                whLM7mu1tw4 = i;
            }
        nihazGs[whLM7mu1tw4][j]++;
        if (nihazGs[whLM7mu1tw4][j] == (672 - 670)) {
            printf ("%d %d %d", whLM7mu1tw4 + (75 - 74), j + (672 - 671), Yo1nPRW[whLM7mu1tw4][j]);
            JqK96oE3wF = (264 - 263);
        }
    }
    if (JqK96oE3wF == (867 - 867))
        ;
}

