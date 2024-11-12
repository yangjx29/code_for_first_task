int main () {
    int MB6Aei [(932 - 832)] [(572 - 472)] = {{(899 - 899)}, {(907 - 907)}};
    int b [(395 - 295)] [(884 - 784)] = {{(290 - 290)}, {(200 - 200)}};
    int h7e3fsmFWzk9 [(827 - 727)] [(564 - 464)] = {{(219 - 219)}, {(628 - 628)}};
    int bAzmTpK;
    int vi6tuJYlfy;
    int gxHDRc;
    int ljC4QVfMWhY;
    scanf ("%d %d", &bAzmTpK, &vi6tuJYlfy);
    for (int SV1dgFs8v = (873 - 873);
    SV1dgFs8v < bAzmTpK; SV1dgFs8v = SV1dgFs8v +(320 - 319)) {
        int gpFqWu4TxJ;
        gpFqWu4TxJ = (430 - 430);
        while (gpFqWu4TxJ < vi6tuJYlfy) {
            scanf ("%d", &MB6Aei[SV1dgFs8v][gpFqWu4TxJ]);
            gpFqWu4TxJ = gpFqWu4TxJ + (947 - 946);
        }
    }
    scanf ("%d %d", &gxHDRc, &ljC4QVfMWhY);
    {
        int SV1dgFs8v;
        SV1dgFs8v = (952 - 952);
        while (gxHDRc > SV1dgFs8v) {
            for (int gpFqWu4TxJ = (768 - 768);
            ljC4QVfMWhY > gpFqWu4TxJ; gpFqWu4TxJ = gpFqWu4TxJ + (641 - 640))
                scanf ("%d", &b[SV1dgFs8v][gpFqWu4TxJ]);
            SV1dgFs8v = SV1dgFs8v +1;
        }
    }
    for (int SV1dgFs8v = (775 - 775);
    bAzmTpK > SV1dgFs8v; SV1dgFs8v = SV1dgFs8v +1) {
        int gpFqWu4TxJ;
        gpFqWu4TxJ = (696 - 696);
        while (ljC4QVfMWhY > gpFqWu4TxJ) {
            for (int ODBXyRux = (583 - 583);
            vi6tuJYlfy > ODBXyRux; ODBXyRux = ODBXyRux +1)
                h7e3fsmFWzk9[SV1dgFs8v][gpFqWu4TxJ] += MB6Aei[SV1dgFs8v][ODBXyRux] * b[ODBXyRux][gpFqWu4TxJ];
            gpFqWu4TxJ = gpFqWu4TxJ + 1;
        }
    }
    {
        int SV1dgFs8v;
        SV1dgFs8v = (677 - 677);
        while (bAzmTpK > SV1dgFs8v) {
            printf ("%d", h7e3fsmFWzk9[SV1dgFs8v][0]);
            for (int gpFqWu4TxJ = (1000 - 999);
            gpFqWu4TxJ < ljC4QVfMWhY; gpFqWu4TxJ = gpFqWu4TxJ + 1)
                printf (" %d", h7e3fsmFWzk9[SV1dgFs8v][gpFqWu4TxJ]);
            printf ("\n");
            SV1dgFs8v = SV1dgFs8v +1;
        }
    }
}

