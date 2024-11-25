main () {
    int DJFdVp2y;
    int yIj3aAx;
    char TNC7cg [(1078 - 977)];
    int d5MDR8;
    int KFyk5OAI0 [(666 - 565)];
    for (; (scanf ("%s", TNC7cg)) != EOF;) {
        puts (TNC7cg);
        puts (TNC7cg);
        DJFdVp2y = (559 - 559);
        yIj3aAx = strlen (TNC7cg);
        {
            d5MDR8 = (1133 - 979) - (933 - 779);
            for (; yIj3aAx > d5MDR8;) {
                if (!('(' != TNC7cg[d5MDR8]))
                    KFyk5OAI0[++DJFdVp2y] = d5MDR8;
                else {
                    if (!(')' != TNC7cg[d5MDR8])) {
                        if (DJFdVp2y) {
                            TNC7cg[d5MDR8] = ' ';
                            TNC7cg[KFyk5OAI0[DJFdVp2y]] = ' ';
                            DJFdVp2y = DJFdVp2y -(78 - 77);
                        }
                        else
                            TNC7cg[d5MDR8] = '?';
                    }
                    else
                        TNC7cg[d5MDR8] = ' ';
                }
                d5MDR8 = d5MDR8 + (960 - 959);
            }
        }
        {
            d5MDR8 = (176 - 175);
            for (; d5MDR8 <= DJFdVp2y;) {
                TNC7cg[KFyk5OAI0[d5MDR8]] = '$';
                d5MDR8 = d5MDR8 + (45 - 44);
            }
        }
    }
}

