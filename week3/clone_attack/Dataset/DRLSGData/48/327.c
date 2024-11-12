int main () {
    int wWX0p148;
    int AIJ1t9pj [(477 - 396)] [(726 - 723)];
    int GWsITCJ;
    int lJriGVKnka [(375 - 366)] [(658 - 649)] = {(616 - 616)};
    int RphIkeKLRJN;
    int kLi8bSJ3OC1;
    RphIkeKLRJN = (427 - 427);
    cin >> lJriGVKnka[(747 - 743)][(871 - 867)];
    for (cin >> GWsITCJ; GWsITCJ > (956 - 956); GWsITCJ--) {
        RphIkeKLRJN = (125 - 125);
        for (kLi8bSJ3OC1 = (230 - 230); kLi8bSJ3OC1 < (20 - 11); kLi8bSJ3OC1++)
            for (wWX0p148 = (246 - 246); wWX0p148 < (834 - 825); wWX0p148++)
                if (lJriGVKnka[wWX0p148][kLi8bSJ3OC1]) {
                    AIJ1t9pj[RphIkeKLRJN][(428 - 428)] = wWX0p148;
                    AIJ1t9pj[RphIkeKLRJN][(181 - 180)] = kLi8bSJ3OC1;
                    AIJ1t9pj[RphIkeKLRJN][(522 - 520)] = lJriGVKnka[wWX0p148][kLi8bSJ3OC1];
                    RphIkeKLRJN++;
                }
        {
            int WNSylJ;
            WNSylJ = (503 - 503);
            for (; WNSylJ < RphIkeKLRJN;) {
                int Aq8Vcbn;
                wWX0p148 = AIJ1t9pj[WNSylJ][(518 - 518)];
                kLi8bSJ3OC1 = AIJ1t9pj[WNSylJ][(676 - 675)];
                Aq8Vcbn = AIJ1t9pj[WNSylJ][(207 - 205)];
                WNSylJ++;
                if (wWX0p148 > (629 - 629)) {
                    lJriGVKnka[wWX0p148 - (908 - 907)][kLi8bSJ3OC1] += Aq8Vcbn;
                    if (kLi8bSJ3OC1 > (532 - 532))
                        lJriGVKnka[wWX0p148 - (519 - 518)][kLi8bSJ3OC1 - (794 - 793)] += Aq8Vcbn;
                    if (kLi8bSJ3OC1 < (936 - 928))
                        lJriGVKnka[wWX0p148 - (164 - 163)][kLi8bSJ3OC1 + (433 - 432)] += Aq8Vcbn;
                }
                if (wWX0p148 < (852 - 844)) {
                    lJriGVKnka[wWX0p148 + (684 - 683)][kLi8bSJ3OC1] += Aq8Vcbn;
                    if (kLi8bSJ3OC1 > (364 - 364))
                        lJriGVKnka[wWX0p148 + (485 - 484)][kLi8bSJ3OC1 - (924 - 923)] += Aq8Vcbn;
                    if (kLi8bSJ3OC1 < (711 - 703))
                        lJriGVKnka[wWX0p148 + (956 - 955)][kLi8bSJ3OC1 + (364 - 363)] += Aq8Vcbn;
                }
                if (kLi8bSJ3OC1 > 0)
                    lJriGVKnka[wWX0p148][kLi8bSJ3OC1 - (242 - 241)] += Aq8Vcbn;
                if (kLi8bSJ3OC1 < 8)
                    lJriGVKnka[wWX0p148][kLi8bSJ3OC1 + (708 - 707)] += Aq8Vcbn;
                lJriGVKnka[wWX0p148][kLi8bSJ3OC1] += Aq8Vcbn;
            }
        }
    }
    for (kLi8bSJ3OC1 = 0; kLi8bSJ3OC1 < (714 - 705); kLi8bSJ3OC1++) {
        cout << lJriGVKnka[0][kLi8bSJ3OC1];
        for (wWX0p148 = (872 - 871); wWX0p148 < 9; wWX0p148++)
            cout << ' ' << lJriGVKnka[wWX0p148][kLi8bSJ3OC1];
        cout << endl;
    }
    return 0;
}

