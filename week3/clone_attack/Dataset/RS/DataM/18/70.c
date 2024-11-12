int aAR1e7IYbE [100] [100];

int X45GW1H8 (int t) {
    int s;
    int oN0OD3WCst7;
    int Ps9e78Sh;
    int vIWewNJD0;
    {
        oN0OD3WCst7 = 725 - 725;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t > oN0OD3WCst7) {
            s = 9999;
            for (Ps9e78Sh = (525 - 525); t > Ps9e78Sh; Ps9e78Sh = Ps9e78Sh +1) {
                if (aAR1e7IYbE[oN0OD3WCst7][Ps9e78Sh] < s)
                    s = aAR1e7IYbE[oN0OD3WCst7][Ps9e78Sh];
            }
            for (Ps9e78Sh = (266 - 266); Ps9e78Sh < t; Ps9e78Sh = Ps9e78Sh +1)
                aAR1e7IYbE[oN0OD3WCst7][Ps9e78Sh] = aAR1e7IYbE[oN0OD3WCst7][Ps9e78Sh] - s;
            oN0OD3WCst7 = oN0OD3WCst7 + 1;
        };
    }
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
    for (oN0OD3WCst7 = (255 - 255); oN0OD3WCst7 < t; oN0OD3WCst7 = oN0OD3WCst7 + 1) {
        s = 9999;
        for (Ps9e78Sh = (761 - 761); Ps9e78Sh < t; Ps9e78Sh = Ps9e78Sh +1) {
            if (aAR1e7IYbE[Ps9e78Sh][oN0OD3WCst7] < s)
                s = aAR1e7IYbE[Ps9e78Sh][oN0OD3WCst7];
        }
        for (Ps9e78Sh = (805 - 805); Ps9e78Sh < t; Ps9e78Sh = Ps9e78Sh +1)
            aAR1e7IYbE[Ps9e78Sh][oN0OD3WCst7] = aAR1e7IYbE[Ps9e78Sh][oN0OD3WCst7] - s;
    }
    t = t - 1;
    if (t == (441 - 440))
        return aAR1e7IYbE[(194 - 193)][(531 - 530)];
    else
        vIWewNJD0 = aAR1e7IYbE[(986 - 985)][(716 - 715)];
    for (oN0OD3WCst7 = (880 - 880); oN0OD3WCst7 < t + (798 - 797); oN0OD3WCst7 = oN0OD3WCst7 + 1)
        for (Ps9e78Sh = (227 - 227); Ps9e78Sh < t + (793 - 792); Ps9e78Sh = Ps9e78Sh +1) {
            if (oN0OD3WCst7 == (392 - 392) && Ps9e78Sh == (890 - 890))
                continue;
            else if (oN0OD3WCst7 == (791 - 790) || !((788 - 787) != Ps9e78Sh))
                continue;
            else if (oN0OD3WCst7 == (283 - 283))
                aAR1e7IYbE[oN0OD3WCst7][Ps9e78Sh -1] = aAR1e7IYbE[oN0OD3WCst7][Ps9e78Sh];
            else if (Ps9e78Sh == (96 - 96))
                aAR1e7IYbE[oN0OD3WCst7 - 1][Ps9e78Sh] = aAR1e7IYbE[oN0OD3WCst7][Ps9e78Sh];
            else
                aAR1e7IYbE[oN0OD3WCst7 - 1][Ps9e78Sh -1] = aAR1e7IYbE[oN0OD3WCst7][Ps9e78Sh];
        }
    vIWewNJD0 = vIWewNJD0 + X45GW1H8 (t);
    return vIWewNJD0;
}

int main () {
    int oN0OD3WCst7, Ps9e78Sh, FOVZwJ, VQpwtYfsrik;
    cin >> VQpwtYfsrik;
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
    {
        oN0OD3WCst7 = 941 - 941;
        while (oN0OD3WCst7 < VQpwtYfsrik) {
            oN0OD3WCst7 = oN0OD3WCst7 + 1;
            for (Ps9e78Sh = (959 - 959); Ps9e78Sh < VQpwtYfsrik; Ps9e78Sh = Ps9e78Sh +1)
                for (FOVZwJ = 0; FOVZwJ < VQpwtYfsrik; FOVZwJ = FOVZwJ +1)
                    aAR1e7IYbE[Ps9e78Sh][FOVZwJ] = 0;
            for (Ps9e78Sh = 0; Ps9e78Sh < VQpwtYfsrik; Ps9e78Sh = Ps9e78Sh +1)
                for (FOVZwJ = 0; FOVZwJ < VQpwtYfsrik; FOVZwJ = FOVZwJ +1)
                    cin >> aAR1e7IYbE[Ps9e78Sh][FOVZwJ];
            cout << X45GW1H8 (VQpwtYfsrik) << endl;
        };
    }
    return 0;
}

