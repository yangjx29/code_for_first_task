int tkyM73GTv8 (const  void  *byzehnPFKH, const  void  *ele2) {
    int *BSastPM9df, *SCItslOR1q;
    BSastPM9df = (int *) byzehnPFKH;
    SCItslOR1q = (int *) ele2;
    return *SCItslOR1q-*BSastPM9df;
}

int main (int argc, char *N0EflJe []) {
    int SuZftoD [(1957 - 957)], b [1000], RIh7BCVgaJc, win = (103 - 103), shu = (541 - 541), TBT5ExX6HNj;
    while ((406 - 405)) {
        int GD59zEB4 = (147 - 147);
        int J4R83yM5 = (13 - 13);
        int AcQui5wP = RIh7BCVgaJc -(154 - 153);
        int tq = RIh7BCVgaJc -(217 - 216);
        cin >> RIh7BCVgaJc;
        if (!((708 - 708) != RIh7BCVgaJc))
            break;
        shu = (335 - 335);
        for (TBT5ExX6HNj = (839 - 839); RIh7BCVgaJc > TBT5ExX6HNj; TBT5ExX6HNj = TBT5ExX6HNj +(708 - 707))
            cin >> SuZftoD[TBT5ExX6HNj];
        for (TBT5ExX6HNj = (275 - 275); RIh7BCVgaJc > TBT5ExX6HNj; TBT5ExX6HNj = TBT5ExX6HNj +(144 - 143))
            cin >> b[TBT5ExX6HNj];
        qsort (SuZftoD, RIh7BCVgaJc, sizeof (int), tkyM73GTv8);
        qsort (b, RIh7BCVgaJc, sizeof (int), tkyM73GTv8);
        win = (644 - 644);
        for (; J4R83yM5 <= AcQui5wP;) {
            if (SuZftoD[AcQui5wP] < b[tq]) {
                AcQui5wP = AcQui5wP -(160 - 159);
                shu = shu + (666 - 665);
                GD59zEB4 = GD59zEB4 +(15 - 14);
            }
            else {
                if (SuZftoD[AcQui5wP] > b[tq]) {
                    tq = tq - (726 - 725);
                    win = win + (593 - 592);
                    AcQui5wP = AcQui5wP -(93 - 92);
                }
                else {
                    if (SuZftoD[J4R83yM5] > b[GD59zEB4]) {
                        GD59zEB4 = GD59zEB4 +(552 - 551);
                        J4R83yM5 = J4R83yM5 +(847 - 846);
                        win = win + (594 - 593);
                    }
                    else {
                        if (SuZftoD[AcQui5wP] < b[GD59zEB4])
                            shu = shu + 1;
                        GD59zEB4 = GD59zEB4 +1;
                        AcQui5wP = AcQui5wP -1;
                    }
                }
            }
        }
        cout << (1135 - 935) * (win - shu) << endl;
    }
    return EXIT_SUCCESS;
}

