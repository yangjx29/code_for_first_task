int main () {
    int kkeLuqHgKIvX [6];
    double  DWfArMTbO8;
    int ROUxQsSapb, bVGk72wy, KWmXzvNy, faIUOFuK, DsNTxvl4f;
    int GsBQKizcyw [45] [6] = {0};
    int s5HvKedAU [10] [3] = {0};
    double  ZVW084J [45];
    bVGk72wy = ROUxQsSapb *(ROUxQsSapb -1) / 2;
    cin >> ROUxQsSapb;
    for (KWmXzvNy = 0; KWmXzvNy < ROUxQsSapb; KWmXzvNy++)
        for (faIUOFuK = 0; 3 > faIUOFuK; faIUOFuK++)
            cin >> s5HvKedAU[KWmXzvNy][faIUOFuK];
    for (KWmXzvNy = 0; KWmXzvNy < 45; KWmXzvNy++)
        ZVW084J[KWmXzvNy] = 0;
    for (KWmXzvNy = DsNTxvl4f = 0; KWmXzvNy < ROUxQsSapb -1; KWmXzvNy++)
        for (faIUOFuK = KWmXzvNy +1; ROUxQsSapb > faIUOFuK; faIUOFuK++) {
            GsBQKizcyw[DsNTxvl4f][0] = s5HvKedAU[KWmXzvNy][0];
            GsBQKizcyw[DsNTxvl4f][1] = s5HvKedAU[KWmXzvNy][1];
            GsBQKizcyw[DsNTxvl4f][2] = s5HvKedAU[KWmXzvNy][2];
            GsBQKizcyw[DsNTxvl4f][3] = s5HvKedAU[faIUOFuK][0];
            GsBQKizcyw[DsNTxvl4f][4] = s5HvKedAU[faIUOFuK][1];
            GsBQKizcyw[DsNTxvl4f][5] = s5HvKedAU[faIUOFuK][2];
            ZVW084J[DsNTxvl4f] = sqrt ((double ) (s5HvKedAU[KWmXzvNy][0] - s5HvKedAU[faIUOFuK][0]) * (s5HvKedAU[KWmXzvNy][0] - s5HvKedAU[faIUOFuK][0]) + (s5HvKedAU[KWmXzvNy][1] - s5HvKedAU[faIUOFuK][1]) * (s5HvKedAU[KWmXzvNy][1] - s5HvKedAU[faIUOFuK][1]) + (s5HvKedAU[KWmXzvNy][2] - s5HvKedAU[faIUOFuK][2]) * (s5HvKedAU[KWmXzvNy][2] - s5HvKedAU[faIUOFuK][2]));
            DsNTxvl4f++;
        }
    for (KWmXzvNy = 0; bVGk72wy - 1 > KWmXzvNy; KWmXzvNy++)
        for (faIUOFuK = 0; faIUOFuK < bVGk72wy - 1 - KWmXzvNy; faIUOFuK++)
            if (ZVW084J[faIUOFuK + 1] > ZVW084J[faIUOFuK]) {
                DWfArMTbO8 = ZVW084J[faIUOFuK];
                ZVW084J[faIUOFuK] = ZVW084J[faIUOFuK + 1];
                ZVW084J[faIUOFuK + 1] = DWfArMTbO8;
                for (DsNTxvl4f = 0; 6 > DsNTxvl4f; DsNTxvl4f++)
                    kkeLuqHgKIvX[DsNTxvl4f] = GsBQKizcyw[faIUOFuK][DsNTxvl4f];
                for (DsNTxvl4f = 0; 6 > DsNTxvl4f; DsNTxvl4f++)
                    GsBQKizcyw[faIUOFuK][DsNTxvl4f] = GsBQKizcyw[faIUOFuK + 1][DsNTxvl4f];
                for (DsNTxvl4f = 0; DsNTxvl4f < 6; DsNTxvl4f++)
                    GsBQKizcyw[faIUOFuK + 1][DsNTxvl4f] = kkeLuqHgKIvX[DsNTxvl4f];
            }
    for (KWmXzvNy = 0; bVGk72wy > KWmXzvNy; KWmXzvNy++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", GsBQKizcyw[KWmXzvNy][0], GsBQKizcyw[KWmXzvNy][1], GsBQKizcyw[KWmXzvNy][2], GsBQKizcyw[KWmXzvNy][3], GsBQKizcyw[KWmXzvNy][4], GsBQKizcyw[KWmXzvNy][5], ZVW084J[KWmXzvNy]);
    return 0;
}

