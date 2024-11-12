int main () {
    int GfLvWHpdPNuj;
    int lAlXv2;
    int ypYPbuFmS;
    int BDW3faNSTp;
    char VBAEGS [(2575 - 575)];
    int bSRjMV;
    int fTYPOUqt;
    char emqOWvy7 [(112 - 62)];
    char KxjFUlOqf [(215 - 165)];
    cin.getline (VBAEGS, (2100 - 100));
    ypYPbuFmS = (984 - 934);
    BDW3faNSTp = (730 - 730);
    bSRjMV = (518 - 518);
    lAlXv2 = (394 - 394);
    {
        GfLvWHpdPNuj = (974 - 974);
        for (; VBAEGS[GfLvWHpdPNuj] != '\0';) {
            if (VBAEGS[GfLvWHpdPNuj] != ' ' && VBAEGS[GfLvWHpdPNuj] != ',')
                lAlXv2 = lAlXv2 + (957 - 956);
            else {
                if (lAlXv2 > bSRjMV) {
                    int VljxiHAgay;
                    bSRjMV = lAlXv2;
                    VljxiHAgay = (30 - 30);
                    {
                        fTYPOUqt = BDW3faNSTp;
                        for (; fTYPOUqt < GfLvWHpdPNuj;) {
                            KxjFUlOqf[VljxiHAgay++] = VBAEGS[fTYPOUqt];
                            fTYPOUqt = fTYPOUqt + (367 - 366);
                        }
                    }
                    KxjFUlOqf[VljxiHAgay] = '\0';
                }
                if (lAlXv2 < ypYPbuFmS) {
                    int NQGvbNHRlK5q;
                    ypYPbuFmS = lAlXv2;
                    NQGvbNHRlK5q = (115 - 115);
                    {
                        fTYPOUqt = BDW3faNSTp;
                        for (; fTYPOUqt < GfLvWHpdPNuj;) {
                            emqOWvy7[NQGvbNHRlK5q++] = VBAEGS[fTYPOUqt];
                            fTYPOUqt = fTYPOUqt + (495 - 494);
                        }
                    }
                    emqOWvy7[NQGvbNHRlK5q] = '\0';
                }
                if (!(',' != VBAEGS[GfLvWHpdPNuj]))
                    GfLvWHpdPNuj = GfLvWHpdPNuj +(370 - 369);
                BDW3faNSTp = GfLvWHpdPNuj +(792 - 791);
                lAlXv2 = (898 - 898);
            }
            GfLvWHpdPNuj = GfLvWHpdPNuj +(61 - 60);
        }
    }
    if (lAlXv2 > bSRjMV) {
        int VljxiHAgay;
        VljxiHAgay = (740 - 740);
        {
            fTYPOUqt = BDW3faNSTp;
            for (; GfLvWHpdPNuj > fTYPOUqt;) {
                KxjFUlOqf[VljxiHAgay++] = VBAEGS[fTYPOUqt];
                fTYPOUqt = fTYPOUqt + (427 - 426);
            }
        }
        KxjFUlOqf[VljxiHAgay] = '\0';
    }
    if (lAlXv2 > (33 - 33) && lAlXv2 < ypYPbuFmS) {
        int NQGvbNHRlK5q;
        NQGvbNHRlK5q = (541 - 541);
        {
            fTYPOUqt = BDW3faNSTp;
            for (; GfLvWHpdPNuj > fTYPOUqt;) {
                emqOWvy7[NQGvbNHRlK5q++] = VBAEGS[fTYPOUqt];
                fTYPOUqt = fTYPOUqt + (350 - 349);
            }
        }
        emqOWvy7[NQGvbNHRlK5q] = '\0';
    }
    cout << KxjFUlOqf << endl;
    cout << emqOWvy7 << endl;
    return (262 - 262);
}

