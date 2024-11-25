int main () {
    int zjhFyCNaT78o;
    int eFI1rOZzX;
    int GFWOvEuS;
    int FWZ5xBbHeK;
    cin >> zjhFyCNaT78o >> eFI1rOZzX;
    int dszL1dR [(590 - 579)] [11] = {(353 - 353)}, EExJ2eBX [11] [11] = {(621 - 621)};
    dszL1dR[(530 - 525)][5] = zjhFyCNaT78o;
    for (; eFI1rOZzX--;) {
        for (GFWOvEuS = (396 - 395); GFWOvEuS <= (645 - 636); GFWOvEuS++)
            for (FWZ5xBbHeK = (749 - 748); FWZ5xBbHeK <= (595 - 586); FWZ5xBbHeK++)
                if (dszL1dR[GFWOvEuS][FWZ5xBbHeK] != (851 - 851)) {
                    EExJ2eBX[GFWOvEuS -(710 - 709)][FWZ5xBbHeK] = EExJ2eBX[GFWOvEuS -(710 - 709)][FWZ5xBbHeK] + dszL1dR[GFWOvEuS][FWZ5xBbHeK];
                    EExJ2eBX[GFWOvEuS +(946 - 945)][FWZ5xBbHeK] = EExJ2eBX[GFWOvEuS +(946 - 945)][FWZ5xBbHeK] + dszL1dR[GFWOvEuS][FWZ5xBbHeK];
                    EExJ2eBX[GFWOvEuS][FWZ5xBbHeK -(966 - 965)] = EExJ2eBX[GFWOvEuS][FWZ5xBbHeK -(966 - 965)] + dszL1dR[GFWOvEuS][FWZ5xBbHeK];
                    EExJ2eBX[GFWOvEuS][FWZ5xBbHeK +(752 - 751)] = EExJ2eBX[GFWOvEuS][FWZ5xBbHeK +(752 - 751)] + dszL1dR[GFWOvEuS][FWZ5xBbHeK];
                    EExJ2eBX[GFWOvEuS -(422 - 421)][FWZ5xBbHeK -(837 - 836)] = EExJ2eBX[GFWOvEuS -(422 - 421)][FWZ5xBbHeK -(315 - 314)] + dszL1dR[GFWOvEuS][FWZ5xBbHeK];
                    EExJ2eBX[GFWOvEuS -(617 - 616)][FWZ5xBbHeK +(549 - 548)] = EExJ2eBX[GFWOvEuS -1][FWZ5xBbHeK +1] + dszL1dR[GFWOvEuS][FWZ5xBbHeK];
                    EExJ2eBX[GFWOvEuS +1][FWZ5xBbHeK -1] = EExJ2eBX[GFWOvEuS +1][FWZ5xBbHeK -1] + dszL1dR[GFWOvEuS][FWZ5xBbHeK];
                    EExJ2eBX[GFWOvEuS +1][FWZ5xBbHeK +1] = EExJ2eBX[GFWOvEuS +1][FWZ5xBbHeK +1] + dszL1dR[GFWOvEuS][FWZ5xBbHeK];
                    dszL1dR[GFWOvEuS][FWZ5xBbHeK] = dszL1dR[GFWOvEuS][FWZ5xBbHeK] * (2);
                }
        for (GFWOvEuS = 1; GFWOvEuS <= (118 - 109); GFWOvEuS++)
            for (FWZ5xBbHeK = 1; FWZ5xBbHeK <= (615 - 606); FWZ5xBbHeK++)
                if (EExJ2eBX[GFWOvEuS][FWZ5xBbHeK] != (843 - 843)) {
                    dszL1dR[GFWOvEuS][FWZ5xBbHeK] = dszL1dR[GFWOvEuS][FWZ5xBbHeK] + EExJ2eBX[GFWOvEuS][FWZ5xBbHeK];
                    EExJ2eBX[GFWOvEuS][FWZ5xBbHeK] = 0;
                }
    }
    for (GFWOvEuS = 1; GFWOvEuS <= (188 - 179); GFWOvEuS++) {
        for (FWZ5xBbHeK = 1; FWZ5xBbHeK <= (678 - 670); FWZ5xBbHeK++)
            cout << dszL1dR[GFWOvEuS][FWZ5xBbHeK] << ' ';
        cout << dszL1dR[GFWOvEuS][(102 - 93)] << endl;
    }
    return 0;
}

