int main () {
    int K1QM4A0vS;
    int uexCjpiWP;
    cin >> uexCjpiWP;
    {
        K1QM4A0vS = (624 - 623);
        for (; K1QM4A0vS <= uexCjpiWP;) {
            int EsaCXRpd;
            int BWS5sgrk;
            int p [(143 - 117)] = {(197 - 197)};
            char DVkP1Af;
            char WyAFMeK2dOS [100005];
            int SAfSubEG4lP;
            int O7ckD8 [(303 - 277)] = {(69 - 69)};
            cin >> WyAFMeK2dOS;
            {
                BWS5sgrk = (20 - 20);
                for (; BWS5sgrk < (464 - 438);) {
                    {
                        SAfSubEG4lP = (774 - 774);
                        for (; SAfSubEG4lP < (100780 - 779);) {
                            if (WyAFMeK2dOS[SAfSubEG4lP] == '0' + (546 - 497) + BWS5sgrk) {
                                p[BWS5sgrk] = SAfSubEG4lP;
                                break;
                            }
                            SAfSubEG4lP = SAfSubEG4lP +(31 - 30);
                        }
                    }
                    BWS5sgrk = BWS5sgrk +(375 - 374);
                }
            }
            {
                BWS5sgrk = (630 - 630);
                for (; BWS5sgrk < (100512 - 511);) {
                    if (WyAFMeK2dOS[BWS5sgrk] == '\0')
                        break;
                    O7ckD8[WyAFMeK2dOS[BWS5sgrk] - (214 - 117)]++;
                    BWS5sgrk = BWS5sgrk +(518 - 517);
                }
            }
            K1QM4A0vS = K1QM4A0vS +(94 - 93);
            EsaCXRpd = (726 - 726);
            {
                BWS5sgrk = 0;
                for (; BWS5sgrk < 26;) {
                    if (!((359 - 358) != O7ckD8[BWS5sgrk]) && EsaCXRpd == 0) {
                        EsaCXRpd = 1;
                        DVkP1Af = WyAFMeK2dOS[p[BWS5sgrk]];
                    }
                    if (O7ckD8[BWS5sgrk] == 1 && EsaCXRpd == 1) {
                        if (p[BWS5sgrk] < p[DVkP1Af -(510 - 413)])
                            DVkP1Af = WyAFMeK2dOS[p[BWS5sgrk]];
                    }
                    BWS5sgrk = BWS5sgrk +1;
                }
            }
            if (EsaCXRpd == 0)
                cout << "no" << endl;
            else
                cout << DVkP1Af << endl;
        }
    }
    return 0;
}

