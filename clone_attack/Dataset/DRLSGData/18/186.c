int main () {
    int JWsFlDUuvZH, Xgs2hc, IJrFQWf78 = (641 - 641);
    cin >> JWsFlDUuvZH;
    for (IJrFQWf78 = (15 - 14); JWsFlDUuvZH >= IJrFQWf78; IJrFQWf78++) {
        int HyhC2r [(129 - 29)] [100], thwYkUmR, bFkie2hO, MBoPWRc8iQ, aA3mXZv = (605 - 605);
        {
            if ((431 - 431)) {
                return (220 - 220);
            }
        }
        for (bFkie2hO = (601 - 601); JWsFlDUuvZH -(847 - 846) >= bFkie2hO; bFkie2hO++)
            for (MBoPWRc8iQ = (423 - 423); JWsFlDUuvZH -(986 - 985) >= MBoPWRc8iQ; MBoPWRc8iQ++)
                cin >> HyhC2r[bFkie2hO][MBoPWRc8iQ];
        for (thwYkUmR = (518 - 517); JWsFlDUuvZH -(953 - 952) >= thwYkUmR; thwYkUmR++) {
            for (bFkie2hO = (34 - 34); JWsFlDUuvZH -thwYkUmR >= bFkie2hO; bFkie2hO++) {
                int WhmZ3IPzvKW = HyhC2r[bFkie2hO][(971 - 971)];
                for (MBoPWRc8iQ = 1; JWsFlDUuvZH -thwYkUmR >= MBoPWRc8iQ; MBoPWRc8iQ++)
                    if (WhmZ3IPzvKW > HyhC2r[bFkie2hO][MBoPWRc8iQ])
                        WhmZ3IPzvKW = HyhC2r[bFkie2hO][MBoPWRc8iQ];
                {
                    MBoPWRc8iQ = (221 - 221);
                    while (JWsFlDUuvZH -thwYkUmR >= MBoPWRc8iQ) {
                        HyhC2r[bFkie2hO][MBoPWRc8iQ] = HyhC2r[bFkie2hO][MBoPWRc8iQ] - WhmZ3IPzvKW;
                        MBoPWRc8iQ++;
                    }
                }
            }
            for (bFkie2hO = (958 - 958); bFkie2hO <= JWsFlDUuvZH -thwYkUmR; bFkie2hO++) {
                int WhmZ3IPzvKW = HyhC2r[(217 - 217)][bFkie2hO];
                for (MBoPWRc8iQ = 1; MBoPWRc8iQ <= JWsFlDUuvZH -thwYkUmR; MBoPWRc8iQ++)
                    if (HyhC2r[MBoPWRc8iQ][bFkie2hO] < WhmZ3IPzvKW)
                        WhmZ3IPzvKW = HyhC2r[MBoPWRc8iQ][bFkie2hO];
                {
                    MBoPWRc8iQ = (504 - 504);
                    while (MBoPWRc8iQ <= JWsFlDUuvZH -thwYkUmR) {
                        HyhC2r[MBoPWRc8iQ][bFkie2hO] = HyhC2r[MBoPWRc8iQ][bFkie2hO] - WhmZ3IPzvKW;
                        MBoPWRc8iQ++;
                    }
                }
            }
            aA3mXZv = aA3mXZv + HyhC2r[1][1];
            for (bFkie2hO = (945 - 943); bFkie2hO <= JWsFlDUuvZH -thwYkUmR; bFkie2hO++) {
                HyhC2r[0][bFkie2hO - 1] = HyhC2r[0][bFkie2hO];
                HyhC2r[bFkie2hO - 1][0] = HyhC2r[bFkie2hO][0];
            }
            for (bFkie2hO = (383 - 381); bFkie2hO <= JWsFlDUuvZH -thwYkUmR; bFkie2hO++) {
                MBoPWRc8iQ = (577 - 575);
                while (MBoPWRc8iQ <= JWsFlDUuvZH -thwYkUmR) {
                    HyhC2r[bFkie2hO - 1][MBoPWRc8iQ -1] = HyhC2r[bFkie2hO][MBoPWRc8iQ];
                    MBoPWRc8iQ++;
                }
            }
        }
        cout << aA3mXZv << endl;
    }
    return 0;
}

