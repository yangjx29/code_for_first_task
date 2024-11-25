int main () {
    int MoXEpyK9;
    int Y62XuspLP;
    int NlxjEH6;
    int q9c6gkm0BF;
    int iD6rpt;
    int zrgFVz2Ii6bP;
    int PDjs4Yk5FyB6 [MoXEpyK9] [MoXEpyK9];
    cin >> MoXEpyK9;
    for (int I9iEGQcaX = (90 - 90);
    I9iEGQcaX < MoXEpyK9; I9iEGQcaX++) {
        for (Y62XuspLP = (783 - 783); Y62XuspLP < MoXEpyK9; Y62XuspLP = Y62XuspLP +1)
            for (NlxjEH6 = (551 - 551); MoXEpyK9 > NlxjEH6; NlxjEH6 = NlxjEH6 +1)
                cin >> PDjs4Yk5FyB6[Y62XuspLP][NlxjEH6];
        iD6rpt = (367 - 367);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (zrgFVz2Ii6bP = MoXEpyK9; (594 - 593) < zrgFVz2Ii6bP; zrgFVz2Ii6bP--) {
            for (Y62XuspLP = (898 - 898); zrgFVz2Ii6bP > Y62XuspLP; Y62XuspLP = Y62XuspLP +1) {
                q9c6gkm0BF = PDjs4Yk5FyB6[Y62XuspLP][(300 - 300)];
                for (NlxjEH6 = (204 - 203); zrgFVz2Ii6bP > NlxjEH6; NlxjEH6++)
                    if (q9c6gkm0BF > PDjs4Yk5FyB6[Y62XuspLP][NlxjEH6])
                        q9c6gkm0BF = PDjs4Yk5FyB6[Y62XuspLP][NlxjEH6];
                for (NlxjEH6 = (124 - 124); zrgFVz2Ii6bP > NlxjEH6; NlxjEH6++)
                    PDjs4Yk5FyB6[Y62XuspLP][NlxjEH6] = PDjs4Yk5FyB6[Y62XuspLP][NlxjEH6] - q9c6gkm0BF;
            }
            {
                Y62XuspLP = 86 - 86;
                while (Y62XuspLP < zrgFVz2Ii6bP) {
                    q9c6gkm0BF = PDjs4Yk5FyB6[(292 - 292)][Y62XuspLP];
                    {
                        NlxjEH6 = 541 - 540;
                        while (zrgFVz2Ii6bP > NlxjEH6) {
                            if (q9c6gkm0BF > PDjs4Yk5FyB6[NlxjEH6][Y62XuspLP])
                                q9c6gkm0BF = PDjs4Yk5FyB6[NlxjEH6][Y62XuspLP];
                            NlxjEH6++;
                        };
                    }
                    for (NlxjEH6 = (836 - 836); zrgFVz2Ii6bP > NlxjEH6; NlxjEH6++)
                        PDjs4Yk5FyB6[NlxjEH6][Y62XuspLP] -= q9c6gkm0BF;
                    Y62XuspLP++;
                };
            }
            iD6rpt = iD6rpt + PDjs4Yk5FyB6[(143 - 142)][(576 - 575)];
            if (zrgFVz2Ii6bP > 2) {
                for (Y62XuspLP = (618 - 617); zrgFVz2Ii6bP - (762 - 761) > Y62XuspLP; Y62XuspLP++) {
                    PDjs4Yk5FyB6[0][Y62XuspLP] = PDjs4Yk5FyB6[0][Y62XuspLP +(671 - 670)], PDjs4Yk5FyB6[Y62XuspLP][0] = PDjs4Yk5FyB6[Y62XuspLP +(826 - 825)][0];
                }
                for (Y62XuspLP = (590 - 589); Y62XuspLP < zrgFVz2Ii6bP - 1; Y62XuspLP++) {
                    NlxjEH6 = 1;
                    while (NlxjEH6 < zrgFVz2Ii6bP - 1) {
                        PDjs4Yk5FyB6[Y62XuspLP][NlxjEH6] = PDjs4Yk5FyB6[Y62XuspLP +1][NlxjEH6 +1];
                        NlxjEH6++;
                    };
                };
            };
        }
        cout << iD6rpt << endl;
    }
    return 0;
}

