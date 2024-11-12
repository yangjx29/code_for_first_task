int main () {
    int Vn6aExC;
    scanf ("%d", &Vn6aExC);
    for (; Vn6aExC != (875 - 875);) {
        int win = (67 - 67), pYWSsaAu = (686 - 686), count1 = (559 - 558), kk84oz7d = 1, ybyjU2ov0R = (850 - 850);
        int MmBSiGN [(1901 - 901)] = {0};
        int XsdDbi [1000] = {0};
        int rHoxZz1aP;
        {
            int E3O0vl = 0;
            while (E3O0vl < Vn6aExC) {
                scanf ("%d", &MmBSiGN[E3O0vl]);
                E3O0vl = E3O0vl +1;
            };
        }
        for (ybyjU2ov0R = 0; ybyjU2ov0R < Vn6aExC; ybyjU2ov0R++)
            scanf ("%d", &XsdDbi[ybyjU2ov0R]);
        for (int E3O0vl = 0;
        E3O0vl < Vn6aExC; E3O0vl = E3O0vl +1) {
            ybyjU2ov0R = E3O0vl +1;
            while (ybyjU2ov0R < Vn6aExC) {
                if (MmBSiGN[E3O0vl] < MmBSiGN[ybyjU2ov0R]) {
                    rHoxZz1aP = MmBSiGN[E3O0vl];
                    MmBSiGN[E3O0vl] = MmBSiGN[ybyjU2ov0R];
                    MmBSiGN[ybyjU2ov0R] = rHoxZz1aP;
                }
                if (XsdDbi[E3O0vl] < XsdDbi[ybyjU2ov0R]) {
                    rHoxZz1aP = XsdDbi[E3O0vl];
                    XsdDbi[E3O0vl] = XsdDbi[ybyjU2ov0R];
                    XsdDbi[ybyjU2ov0R] = rHoxZz1aP;
                }
                ybyjU2ov0R = ybyjU2ov0R + 1;
            };
        }
        ybyjU2ov0R = 0;
        {
            int E3O0vl = 0;
            while (E3O0vl <= Vn6aExC -count1) {
                if (MmBSiGN[E3O0vl] > XsdDbi[ybyjU2ov0R]) {
                    ybyjU2ov0R = ybyjU2ov0R + 1;
                    win = win + 1;
                }
                else {
                    if (MmBSiGN[E3O0vl] < XsdDbi[ybyjU2ov0R]) {
                        E3O0vl = E3O0vl -1;
                        pYWSsaAu = pYWSsaAu + 1;
                        count1 = count1 + 1;
                        ybyjU2ov0R = ybyjU2ov0R + 1;
                    }
                    else {
                        if (MmBSiGN[Vn6aExC -count1] > XsdDbi[Vn6aExC -kk84oz7d]) {
                            kk84oz7d++;
                            win++;
                            count1 = count1 + 1;
                            E3O0vl = E3O0vl -1;
                        }
                        else {
                            if (MmBSiGN[Vn6aExC -count1] < XsdDbi[Vn6aExC -kk84oz7d]) {
                                pYWSsaAu = pYWSsaAu + 1;
                                count1 = count1 + 1;
                                E3O0vl = E3O0vl -1;
                                ybyjU2ov0R = ybyjU2ov0R + 1;
                            }
                            else {
                                if (MmBSiGN[Vn6aExC -count1] == XsdDbi[ybyjU2ov0R]) {
                                    count1 = count1 + 1;
                                    ybyjU2ov0R++;
                                    E3O0vl--;
                                }
                                else {
                                    count1++;
                                    pYWSsaAu++;
                                    ybyjU2ov0R++;
                                    E3O0vl--;
                                };
                            };
                        };
                    };
                }
                E3O0vl++;
            };
        }
        printf ("%d\n", 200 * (win - pYWSsaAu));
        scanf ("%d", &Vn6aExC);
    };
}

