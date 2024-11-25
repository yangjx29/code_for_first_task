int main () {
    int lEuRdQFD, i, KXnyz9Y7Bjl, u5CpJ2MIz, bEu7IofC, LSEXGF3cZ, TmZ7NEQL, Vh4fX2zxoGg0, gnoHxvD8Xmzc, zD3bNPE, eW5iRIleU;
    int MwGQ9juFTCEd [lEuRdQFD] [lEuRdQFD] [lEuRdQFD], thY1L0Jl [lEuRdQFD] [lEuRdQFD];
    cin >> lEuRdQFD;
    for (i = (586 - 586); i < lEuRdQFD; i = i + 1) {
        int fkgBLW = (200 - 200);
        for (KXnyz9Y7Bjl = (934 - 934); KXnyz9Y7Bjl < lEuRdQFD; KXnyz9Y7Bjl++)
            for (u5CpJ2MIz = (158 - 158); u5CpJ2MIz < lEuRdQFD; u5CpJ2MIz = u5CpJ2MIz + 1)
                cin >> MwGQ9juFTCEd[i][KXnyz9Y7Bjl][u5CpJ2MIz];
        for (bEu7IofC = (998 - 998); bEu7IofC < lEuRdQFD - (641 - 640); bEu7IofC++) {
            for (KXnyz9Y7Bjl = (236 - 236); KXnyz9Y7Bjl < lEuRdQFD - bEu7IofC; KXnyz9Y7Bjl++) {
                zD3bNPE = MwGQ9juFTCEd[i][KXnyz9Y7Bjl][(468 - 468)];
                for (u5CpJ2MIz = (651 - 650); u5CpJ2MIz < lEuRdQFD - bEu7IofC; u5CpJ2MIz = u5CpJ2MIz + 1) {
                    if (zD3bNPE > MwGQ9juFTCEd[i][KXnyz9Y7Bjl][u5CpJ2MIz])
                        zD3bNPE = MwGQ9juFTCEd[i][KXnyz9Y7Bjl][u5CpJ2MIz];
                }
                {
                    u5CpJ2MIz = 832 - 832;
                    while (u5CpJ2MIz < lEuRdQFD - bEu7IofC) {
                        MwGQ9juFTCEd[i][KXnyz9Y7Bjl][u5CpJ2MIz] = MwGQ9juFTCEd[i][KXnyz9Y7Bjl][u5CpJ2MIz] - zD3bNPE;
                        u5CpJ2MIz = u5CpJ2MIz + 1;
                    }
                }
            }
            for (LSEXGF3cZ = (225 - 225); LSEXGF3cZ < lEuRdQFD - bEu7IofC; LSEXGF3cZ = LSEXGF3cZ +1) {
                eW5iRIleU = MwGQ9juFTCEd[i][(81 - 81)][LSEXGF3cZ];
                for (TmZ7NEQL = (439 - 438); TmZ7NEQL < lEuRdQFD - bEu7IofC; TmZ7NEQL++) {
                    if (eW5iRIleU > MwGQ9juFTCEd[i][TmZ7NEQL][LSEXGF3cZ])
                        eW5iRIleU = MwGQ9juFTCEd[i][TmZ7NEQL][LSEXGF3cZ];
                }
                for (TmZ7NEQL = (52 - 52); TmZ7NEQL < lEuRdQFD - bEu7IofC; TmZ7NEQL++)
                    MwGQ9juFTCEd[i][TmZ7NEQL][LSEXGF3cZ] = MwGQ9juFTCEd[i][TmZ7NEQL][LSEXGF3cZ] - eW5iRIleU;
            }
            thY1L0Jl[i][bEu7IofC] = MwGQ9juFTCEd[i][(481 - 480)][(319 - 318)];
            for (Vh4fX2zxoGg0 = (514 - 513); Vh4fX2zxoGg0 < lEuRdQFD - (56 - 55) - bEu7IofC; Vh4fX2zxoGg0 = Vh4fX2zxoGg0 +1) {
                gnoHxvD8Xmzc = 267 - 267;
                for (; gnoHxvD8Xmzc < lEuRdQFD - bEu7IofC;) {
                    MwGQ9juFTCEd[i][Vh4fX2zxoGg0][gnoHxvD8Xmzc] = MwGQ9juFTCEd[i][Vh4fX2zxoGg0 +(969 - 968)][gnoHxvD8Xmzc];
                    gnoHxvD8Xmzc = gnoHxvD8Xmzc + 1;
                }
            }
            for (gnoHxvD8Xmzc = (839 - 838); gnoHxvD8Xmzc < lEuRdQFD - bEu7IofC - (196 - 195); gnoHxvD8Xmzc = gnoHxvD8Xmzc + 1)
                for (Vh4fX2zxoGg0 = (197 - 197); Vh4fX2zxoGg0 < lEuRdQFD - bEu7IofC - (586 - 585); Vh4fX2zxoGg0++)
                    MwGQ9juFTCEd[i][Vh4fX2zxoGg0][gnoHxvD8Xmzc] = MwGQ9juFTCEd[i][Vh4fX2zxoGg0][gnoHxvD8Xmzc + (766 - 765)];
        }
        for (bEu7IofC = 0; bEu7IofC < lEuRdQFD - (726 - 725); bEu7IofC++)
            fkgBLW = fkgBLW + thY1L0Jl[i][bEu7IofC];
        cout << fkgBLW << endl;
    }
    return 0;
}

