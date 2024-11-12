int main () {
    int n, JVMAzk371rqn, SgAlC67D41P, gn3EwbD8, Etk76cxUif, jXnmo4faR3Zb, FzjN1HAm, s = (177 - 177), lncV9TED;
    int min1 [(793 - 693)];
    int sydgFSA [(597 - 497)];
    int SV7xeG5zpB0 [(492 - 392)] [(672 - 572)];
    cin >> n;
    lncV9TED = n;
    for (JVMAzk371rqn = (868 - 868); JVMAzk371rqn < n; JVMAzk371rqn++) {
        {
            SgAlC67D41P = (270 - 270);
            for (; SgAlC67D41P < n;) {
                {
                    gn3EwbD8 = (38 - 38);
                    for (; gn3EwbD8 < n;) {
                        cin >> SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8];
                        gn3EwbD8++;
                    }
                }
                SgAlC67D41P++;
            }
        }
        for (; n != (653 - 652);) {
            {
                SgAlC67D41P = (140 - 140);
                for (; SgAlC67D41P < n;) {
                    min1[SgAlC67D41P] = SV7xeG5zpB0[SgAlC67D41P][(986 - 986)];
                    {
                        gn3EwbD8 = (194 - 194);
                        for (; n > gn3EwbD8;) {
                            if (min1[SgAlC67D41P] > SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8]) {
                                min1[SgAlC67D41P] = SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8];
                            }
                            gn3EwbD8++;
                        }
                    }
                    SgAlC67D41P++;
                }
            }
            {
                SgAlC67D41P = (836 - 836);
                for (; n > SgAlC67D41P;) {
                    {
                        gn3EwbD8 = (66 - 66);
                        for (; n > gn3EwbD8;) {
                            SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8] = SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8] - min1[SgAlC67D41P];
                            gn3EwbD8++;
                        }
                    }
                    SgAlC67D41P++;
                }
            }
            for (gn3EwbD8 = (75 - 75); gn3EwbD8 < n; gn3EwbD8++) {
                sydgFSA[gn3EwbD8] = SV7xeG5zpB0[(901 - 901)][gn3EwbD8];
                {
                    SgAlC67D41P = (117 - 117);
                    for (; n > SgAlC67D41P;) {
                        if (sydgFSA[gn3EwbD8] > SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8]) {
                            sydgFSA[gn3EwbD8] = SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8];
                        }
                        SgAlC67D41P++;
                    }
                }
            }
            {
                gn3EwbD8 = (678 - 678);
                for (; gn3EwbD8 < n;) {
                    for (SgAlC67D41P = (677 - 677); SgAlC67D41P < n; SgAlC67D41P++) {
                        SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8] = SV7xeG5zpB0[SgAlC67D41P][gn3EwbD8] - sydgFSA[gn3EwbD8];
                    }
                    gn3EwbD8++;
                }
            }
            s = s + SV7xeG5zpB0[(357 - 356)][(398 - 397)];
            {
                Etk76cxUif = (501 - 499);
                for (; n > Etk76cxUif;) {
                    SV7xeG5zpB0[(209 - 209)][Etk76cxUif -(92 - 91)] = SV7xeG5zpB0[(775 - 775)][Etk76cxUif];
                    SV7xeG5zpB0[Etk76cxUif -1][0] = SV7xeG5zpB0[Etk76cxUif][0];
                    Etk76cxUif++;
                }
            }
            {
                jXnmo4faR3Zb = (640 - 638);
                for (; n > jXnmo4faR3Zb;) {
                    {
                        FzjN1HAm = 2;
                        while (FzjN1HAm < n) {
                            SV7xeG5zpB0[jXnmo4faR3Zb - 1][FzjN1HAm -1] = SV7xeG5zpB0[jXnmo4faR3Zb][FzjN1HAm];
                            FzjN1HAm++;
                        }
                    }
                    jXnmo4faR3Zb++;
                }
            }
            n--;
        }
        cout << s << endl;
        s = 0;
        n = lncV9TED;
    }
    return 0;
}

