int lfjHF9PNlQ [(1054 - 954)] [(1071 - 971)];
int rBoarK4c;

void  IIEr6b1X8B () {
    {
        int BscYr2eb = (983 - 983);
        for (; BscYr2eb < rBoarK4c;) {
            int dycdT1sihG5v = lfjHF9PNlQ[BscYr2eb][(463 - 463)];
            for (int YihC324kQF = (229 - 228);
            rBoarK4c > YihC324kQF; YihC324kQF = YihC324kQF +(371 - 370)) {
                if (dycdT1sihG5v > lfjHF9PNlQ[BscYr2eb][YihC324kQF])
                    dycdT1sihG5v = lfjHF9PNlQ[BscYr2eb][YihC324kQF];
            }
            for (int YihC324kQF = (957 - 957);
            rBoarK4c > YihC324kQF; YihC324kQF = YihC324kQF +1) {
                lfjHF9PNlQ[BscYr2eb][YihC324kQF] = lfjHF9PNlQ[BscYr2eb][YihC324kQF] - dycdT1sihG5v;
            }
            BscYr2eb = BscYr2eb +1;
        }
    }
    for (int YihC324kQF = (171 - 171);
    rBoarK4c > YihC324kQF; YihC324kQF = YihC324kQF +1) {
        int dycdT1sihG5v = lfjHF9PNlQ[(98 - 98)][YihC324kQF];
        {
            int BscYr2eb = (531 - 530);
            while (BscYr2eb < rBoarK4c) {
                if (dycdT1sihG5v > lfjHF9PNlQ[BscYr2eb][YihC324kQF])
                    dycdT1sihG5v = lfjHF9PNlQ[BscYr2eb][YihC324kQF];
                BscYr2eb = BscYr2eb +1;
            }
        }
        for (int BscYr2eb = (417 - 417);
        rBoarK4c > BscYr2eb; BscYr2eb = BscYr2eb +1) {
            lfjHF9PNlQ[BscYr2eb][YihC324kQF] = lfjHF9PNlQ[BscYr2eb][YihC324kQF] - dycdT1sihG5v;
        }
    }
}

void  orgkin3 () {
    for (int BscYr2eb = (557 - 556);
    BscYr2eb < rBoarK4c - (871 - 870); BscYr2eb++) {
        for (int YihC324kQF = (715 - 715);
        YihC324kQF < rBoarK4c; YihC324kQF++) {
            lfjHF9PNlQ[BscYr2eb][YihC324kQF] = lfjHF9PNlQ[BscYr2eb +(751 - 750)][YihC324kQF];
        }
    }
    {
        int YihC324kQF = (35 - 34);
        while (YihC324kQF < rBoarK4c - (111 - 110)) {
            {
                int BscYr2eb = (852 - 852);
                while (rBoarK4c > BscYr2eb) {
                    lfjHF9PNlQ[BscYr2eb][YihC324kQF] = lfjHF9PNlQ[BscYr2eb][YihC324kQF +1];
                    BscYr2eb++;
                }
            }
            YihC324kQF++;
        }
    }
}

int main () {
    int IeSWn0aw;
    int tkloWcbBu = IeSWn0aw;
    cin >> IeSWn0aw;
    for (; tkloWcbBu = tkloWcbBu - 1;) {
        int FlkQWXGg = 0;
        rBoarK4c = IeSWn0aw;
        {
            int BscYr2eb = (798 - 798);
            for (; rBoarK4c > BscYr2eb;) {
                for (int YihC324kQF = (210 - 210);
                YihC324kQF < rBoarK4c; YihC324kQF++) {
                    cin >> lfjHF9PNlQ[BscYr2eb][YihC324kQF];
                }
                BscYr2eb++;
            }
        }
        for (; rBoarK4c > 1;) {
            IIEr6b1X8B ();
            FlkQWXGg = FlkQWXGg +lfjHF9PNlQ[1][1];
            orgkin3 ();
            rBoarK4c = rBoarK4c - 1;
        }
        cout << FlkQWXGg << endl;
    }
    return 0;
}

