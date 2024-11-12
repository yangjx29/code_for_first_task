int main () {
    int ukFBxr4u [(1043 - 43)] [2], zoOdH5Z = (307 - 307), PeQtm1SA = (972 - 972), YV4HJ2 = (324 - 324), LpV7Dx2B1 [(1608 - 608)] = {(392 - 392)}, max = (762 - 762), WrmklWsn = (825 - 825), AMa8tlU09r = (85 - 85);
    do {
        cin >> ukFBxr4u[zoOdH5Z][0];
        LpV7Dx2B1[ukFBxr4u[zoOdH5Z][0]]++;
        zoOdH5Z = zoOdH5Z + 1;
        YV4HJ2 = YV4HJ2 +1;
    }
    while (!(',' != cin.get ()));
    zoOdH5Z = 0;
    do {
        cin >> ukFBxr4u[zoOdH5Z][(256 - 255)];
        LpV7Dx2B1[ukFBxr4u[zoOdH5Z][(523 - 522)]] = LpV7Dx2B1[ukFBxr4u[zoOdH5Z][(312 - 311)]] - (615 - 614);
        zoOdH5Z++;
    }
    while (cin.get () == ',');
    {
        zoOdH5Z = 0;
        while (1000 > zoOdH5Z) {
            if (LpV7Dx2B1[zoOdH5Z] != 0) {
                if (WrmklWsn == 0) {
                    AMa8tlU09r = LpV7Dx2B1[zoOdH5Z];
                    WrmklWsn = (153 - 152);
                }
                else {
                    LpV7Dx2B1[zoOdH5Z] = LpV7Dx2B1[zoOdH5Z] + AMa8tlU09r;
                    AMa8tlU09r = LpV7Dx2B1[zoOdH5Z];
                };
            }
            else
                continue;
            if (max < LpV7Dx2B1[zoOdH5Z]) {
                max = LpV7Dx2B1[zoOdH5Z];
            }
            zoOdH5Z++;
        };
    }
    cout << YV4HJ2 << ' ' << max << endl;
    return 0;
}

