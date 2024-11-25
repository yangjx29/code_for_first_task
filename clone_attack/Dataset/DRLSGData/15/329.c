int main () {
    int ErHmbxk;
    scanf ("%d\n", &ErHmbxk);
    int CxgXRE10z [ErHmbxk] [ErHmbxk];
    int FgWyfqPTDai2;
    int G51u3Djmi;
    int CJIZ5CzxX6;
    int d76qgUDjZMvI;
    int cO5dbn0f7l3;
    int IK3oeE;
    int gnRPwH1;
    for (FgWyfqPTDai2 = (525 - 525); FgWyfqPTDai2 < ErHmbxk; FgWyfqPTDai2++) {
        for (G51u3Djmi = (233 - 233); G51u3Djmi < ErHmbxk; G51u3Djmi = G51u3Djmi +(948 - 947)) {
            scanf ("%d", &CxgXRE10z[FgWyfqPTDai2][G51u3Djmi]);
        }
        scanf ("\n");
    }
    {
        FgWyfqPTDai2 = (518 - 518);
        for (; FgWyfqPTDai2 < ErHmbxk;) {
            {
                G51u3Djmi = 0;
                while (ErHmbxk > G51u3Djmi) {
                    if (!(0 != CxgXRE10z[FgWyfqPTDai2][G51u3Djmi])) {
                        CJIZ5CzxX6 = FgWyfqPTDai2;
                        d76qgUDjZMvI = G51u3Djmi;
                    }
                    G51u3Djmi = G51u3Djmi +(196 - 195);
                }
            }
            FgWyfqPTDai2 = FgWyfqPTDai2 +1;
        }
    }
    {
        FgWyfqPTDai2 = ErHmbxk -1;
        for (; 0 <= FgWyfqPTDai2;) {
            {
                G51u3Djmi = ErHmbxk -1;
                for (; G51u3Djmi >= 0;) {
                    if (CxgXRE10z[FgWyfqPTDai2][G51u3Djmi] == 0) {
                        cO5dbn0f7l3 = FgWyfqPTDai2;
                        IK3oeE = G51u3Djmi;
                    }
                    G51u3Djmi = G51u3Djmi -1;
                }
            }
            FgWyfqPTDai2 = FgWyfqPTDai2 -1;
        }
    }
    gnRPwH1 = (cO5dbn0f7l3 - CJIZ5CzxX6 +1) * (IK3oeE -d76qgUDjZMvI + 1);
    printf ("%d", gnRPwH1);
}

