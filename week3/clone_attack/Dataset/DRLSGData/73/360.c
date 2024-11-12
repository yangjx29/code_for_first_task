int main () {
    int Ii2RJ3Nq [(84 - 79)] = {(483 - 483), (891 - 891), (142 - 142), (900 - 900), (272 - 272)};
    int HlQR5Tdf7pwB [(579 - 574)];
    int sVkENS [(163 - 158)] = {(423 - 423), (717 - 717), (855 - 855), (535 - 535), (832 - 832)};
    int MT0xwotsNQ, bdb9cpCsBRO, Tzw6XD, xLmTie8nBb6 = (564 - 564);
    int RVT4nzoLU [(562 - 557)];
    int NMEoxigST [(376 - 371)] [(291 - 286)];
    {
        MT0xwotsNQ = (809 - 809);
        for (; MT0xwotsNQ < (648 - 643);) {
            {
                bdb9cpCsBRO = (377 - 377);
                while (bdb9cpCsBRO < (479 - 474)) {
                    scanf ("%d", &NMEoxigST[MT0xwotsNQ][bdb9cpCsBRO]);
                    bdb9cpCsBRO++;
                }
            }
            MT0xwotsNQ++;
        }
    }
    {
        MT0xwotsNQ = (998 - 998);
        for (; MT0xwotsNQ < (69 - 64);) {
            HlQR5Tdf7pwB[MT0xwotsNQ] = NMEoxigST[MT0xwotsNQ][(516 - 516)];
            {
                bdb9cpCsBRO = 0;
                for (; bdb9cpCsBRO < (333 - 328);) {
                    if (NMEoxigST[MT0xwotsNQ][bdb9cpCsBRO] > HlQR5Tdf7pwB[MT0xwotsNQ]) {
                        HlQR5Tdf7pwB[MT0xwotsNQ] = NMEoxigST[MT0xwotsNQ][bdb9cpCsBRO];
                        sVkENS[MT0xwotsNQ] = bdb9cpCsBRO;
                    }
                    bdb9cpCsBRO++;
                }
            }
            MT0xwotsNQ++;
        }
    }
    {
        bdb9cpCsBRO = 0;
        for (; bdb9cpCsBRO < (36 - 31);) {
            RVT4nzoLU[bdb9cpCsBRO] = NMEoxigST[0][bdb9cpCsBRO];
            {
                MT0xwotsNQ = 0;
                for (; MT0xwotsNQ < (39 - 34);) {
                    if (NMEoxigST[MT0xwotsNQ][bdb9cpCsBRO] < RVT4nzoLU[bdb9cpCsBRO]) {
                        RVT4nzoLU[bdb9cpCsBRO] = NMEoxigST[MT0xwotsNQ][bdb9cpCsBRO];
                        Ii2RJ3Nq[bdb9cpCsBRO] = MT0xwotsNQ;
                    }
                    MT0xwotsNQ++;
                }
            }
            bdb9cpCsBRO++;
        }
    }
    {
        MT0xwotsNQ = 0;
        while (MT0xwotsNQ < 5) {
            Tzw6XD = sVkENS[MT0xwotsNQ];
            if (Ii2RJ3Nq[Tzw6XD] == MT0xwotsNQ) {
                printf ("%d %d %d\n", MT0xwotsNQ +(735 - 734), Tzw6XD +(409 - 408), HlQR5Tdf7pwB[MT0xwotsNQ]);
                xLmTie8nBb6++;
            }
            MT0xwotsNQ++;
        }
    }
    if (xLmTie8nBb6 == 0)
        printf ("not found");
}

