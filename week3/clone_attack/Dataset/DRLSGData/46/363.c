int main () {
    int lOd0fyebEU21, Dtlkuyw2;
    int MTfmuB [100] [100];
    int BaQUKr4Tbt, xLtxfJKVgws, gORUdW, o0DVoUAq;
    scanf ("%d%d", &lOd0fyebEU21, &Dtlkuyw2);
    {
        BaQUKr4Tbt = 0;
        for (; BaQUKr4Tbt < lOd0fyebEU21;) {
            xLtxfJKVgws = 0;
            for (; xLtxfJKVgws < Dtlkuyw2;) {
                scanf ("%d", &MTfmuB[BaQUKr4Tbt][xLtxfJKVgws]);
                xLtxfJKVgws = xLtxfJKVgws + 1;
            }
            BaQUKr4Tbt = BaQUKr4Tbt +1;
        }
    }
    gORUdW = 0;
    {
        o0DVoUAq = 0;
        for (; 1;) {
            {
                BaQUKr4Tbt = o0DVoUAq;
                for (; Dtlkuyw2 -o0DVoUAq > BaQUKr4Tbt;) {
                    gORUdW = gORUdW + 1;
                    printf ("%d\n", MTfmuB[o0DVoUAq][BaQUKr4Tbt]);
                    BaQUKr4Tbt = BaQUKr4Tbt +1;
                }
            }
            {
                xLtxfJKVgws = o0DVoUAq + 1;
                for (; lOd0fyebEU21 - o0DVoUAq > xLtxfJKVgws;) {
                    printf ("%d\n", MTfmuB[xLtxfJKVgws][Dtlkuyw2 -o0DVoUAq - 1]);
                    gORUdW = gORUdW + 1;
                    xLtxfJKVgws = xLtxfJKVgws + 1;
                }
            }
            if (!(lOd0fyebEU21 * Dtlkuyw2 != gORUdW))
                break;
            {
                BaQUKr4Tbt = Dtlkuyw2 -2 - o0DVoUAq;
                for (; BaQUKr4Tbt >= o0DVoUAq;) {
                    gORUdW = gORUdW + 1;
                    printf ("%d\n", MTfmuB[lOd0fyebEU21 - o0DVoUAq - 1][BaQUKr4Tbt]);
                    BaQUKr4Tbt = BaQUKr4Tbt -1;
                }
            }
            {
                xLtxfJKVgws = lOd0fyebEU21 - 2 - o0DVoUAq;
                for (; xLtxfJKVgws > o0DVoUAq;) {
                    printf ("%d\n", MTfmuB[xLtxfJKVgws][o0DVoUAq]);
                    xLtxfJKVgws = xLtxfJKVgws - 1;
                    gORUdW = gORUdW + 1;
                }
            }
            o0DVoUAq = o0DVoUAq + 1;
        }
    }
    return 0;
}

