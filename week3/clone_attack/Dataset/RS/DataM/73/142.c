int CSh4rTC (int LHCNiY9DLKI, int VYIHwQ) {
    if (LHCNiY9DLKI >= VYIHwQ)
        return LHCNiY9DLKI;
    else
        return VYIHwQ;
}

int quZpNY4hP (int LHCNiY9DLKI, int VYIHwQ) {
    if (LHCNiY9DLKI <= VYIHwQ)
        return LHCNiY9DLKI;
    else
        return VYIHwQ;
}

int main () {
    int PLCsqaG, aHIF1uP3OS, EZU0zOMqL [6] [6], IIjYgx7 = 0, PTMpnSbs [6], VV5jcXqviABY [6];
    {
        PLCsqaG = 527 - 526;
        while (PLCsqaG <= (46 - 41)) {
            for (aHIF1uP3OS = (434 - 433); aHIF1uP3OS <= (976 - 971); aHIF1uP3OS = aHIF1uP3OS + 1) {
                cin >> EZU0zOMqL[PLCsqaG][aHIF1uP3OS];
            }
            PLCsqaG = PLCsqaG +1;
        };
    }
    {
        PLCsqaG = 193 - 192;
        while (PLCsqaG <= 5) {
            PTMpnSbs[PLCsqaG] = CSh4rTC (EZU0zOMqL[PLCsqaG][1], CSh4rTC (EZU0zOMqL[PLCsqaG][(185 - 183)], CSh4rTC (EZU0zOMqL[PLCsqaG][3], CSh4rTC (EZU0zOMqL[PLCsqaG][4], EZU0zOMqL[PLCsqaG][5]))));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            PLCsqaG = PLCsqaG +1;
        };
    }
    {
        aHIF1uP3OS = 1;
        while (aHIF1uP3OS <= 5) {
            VV5jcXqviABY[aHIF1uP3OS] = quZpNY4hP (EZU0zOMqL[1][aHIF1uP3OS], quZpNY4hP (EZU0zOMqL[2][aHIF1uP3OS], quZpNY4hP (EZU0zOMqL[3][aHIF1uP3OS], quZpNY4hP (EZU0zOMqL[4][aHIF1uP3OS], EZU0zOMqL[5][aHIF1uP3OS]))));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            aHIF1uP3OS = aHIF1uP3OS + 1;
        };
    }
    for (PLCsqaG = 1; PLCsqaG <= 5; PLCsqaG++) {
        for (aHIF1uP3OS = 1; aHIF1uP3OS <= 5; aHIF1uP3OS++) {
            if (PTMpnSbs[PLCsqaG] == VV5jcXqviABY[aHIF1uP3OS]) {
                cout << PLCsqaG << ' ' << aHIF1uP3OS << ' ' << EZU0zOMqL[PLCsqaG][aHIF1uP3OS] << endl;
                IIjYgx7 = 1;
            };
        };
    }
    if (IIjYgx7 == 0)
        cout << "not found";
    return 0;
}

