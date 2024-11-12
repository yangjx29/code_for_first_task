int main () {
    int F9pw5J = (29 - 29);
    int min;
    min = 1000;
    char p;
    int time1 [(1082 - 82)];
    int time2 [(1027 - 27)];
    int YajcTSLx5 = (798 - 798);
    int TuxmTaAP, FzCtRI;
    int count [1000] = {0};
    int maxtime = 0;
    FzCtRI = (582 - 582);
    TuxmTaAP = (327 - 327);
    while (cin >> time1[TuxmTaAP]) {
        p = cin.get ();
        if (p == ',') {
            TuxmTaAP = TuxmTaAP +1;
            continue;
        }
        else {
            break;
        };
    }
    TuxmTaAP = 0;
    while (cin >> time2[TuxmTaAP]) {
        p = cin.get ();
        if (p == ',') {
            TuxmTaAP++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            continue;
        }
        else {
            break;
        };
    }
    F9pw5J = TuxmTaAP +1;
    {
        TuxmTaAP = 0;
        while (TuxmTaAP < F9pw5J) {
            if (time1[TuxmTaAP] < min) {
                min = time1[TuxmTaAP];
            }
            if (time2[TuxmTaAP] > YajcTSLx5) {
                YajcTSLx5 = time2[TuxmTaAP];
            }
            TuxmTaAP++;
        };
    }
    {
        TuxmTaAP = min;
        while (YajcTSLx5 >= TuxmTaAP) {
            for (FzCtRI = 0; FzCtRI < F9pw5J; FzCtRI = FzCtRI +1) {
                if (time1[FzCtRI] <= TuxmTaAP &&time2[FzCtRI] > TuxmTaAP) {
                    count[TuxmTaAP]++;
                };
            }
            if (count[TuxmTaAP] > maxtime) {
                maxtime = count[TuxmTaAP];
            }
            TuxmTaAP++;
        };
    }
    cout << F9pw5J << ' ' << maxtime << endl;
    return 0;
}

