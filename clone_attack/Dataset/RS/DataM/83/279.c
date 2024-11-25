int main () {
    double  ave;
    ave = 0.0;
    double  NgJos1GV;
    NgJos1GV = (333.0 - 333.0);
    int pDagtZCHP = 1;
    double  grade [11] = {0};
    int ok [11] = {0};
    int rGx4pz [(116 - 105)] = {0};
    int n;
    n = (611 - 611);
    int i;
    i = (211 - 210);
    int s9Qf6MUk;
    s9Qf6MUk = 1;
    cout << endl;
    cin >> n;
    for (; i <= n;) {
        cin >> rGx4pz[i++];
    }
    for (; s9Qf6MUk <= n;) {
        cin >> ok[s9Qf6MUk++];
    }
    {
        pDagtZCHP = 1;
        while (pDagtZCHP <= n) {
            if (ok[pDagtZCHP] >= (293 - 203)) {
                grade[pDagtZCHP] = 4.0;
                continue;
            }
            if (ok[pDagtZCHP] >= 85) {
                grade[pDagtZCHP] = (301.7 - 298.0);
                continue;
            }
            if (ok[pDagtZCHP] >= (851 - 769)) {
                grade[pDagtZCHP] = 3.3;
                continue;
            }
            if (78 <= ok[pDagtZCHP]) {
                grade[pDagtZCHP] = (372.0 - 369.0);
                continue;
            }
            if (75 <= ok[pDagtZCHP]) {
                grade[pDagtZCHP] = 2.7;
                continue;
            }
            if (72 <= ok[pDagtZCHP]) {
                grade[pDagtZCHP] = 2.3;
                continue;
            }
            if (68 <= ok[pDagtZCHP]) {
                grade[pDagtZCHP] = (605.0 - 603.0);
                continue;
            }
            if ((203 - 139) <= ok[pDagtZCHP]) {
                grade[pDagtZCHP] = 1.5;
                continue;
            }
            if (60 <= ok[pDagtZCHP]) {
                grade[pDagtZCHP] = (24.0 - 23.0);
                continue;
            }
            if (60 > ok[pDagtZCHP]) {
                grade[pDagtZCHP] = 0.0;
                continue;
            }
            pDagtZCHP = pDagtZCHP + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            NgJos1GV += rGx4pz[i] * grade[i];
            i = i + 1;
        };
    }
    ave = NgJos1GV / (rGx4pz[1] + rGx4pz[2] + rGx4pz[3] + rGx4pz[4] + rGx4pz[5] + rGx4pz[6] + rGx4pz[7] + rGx4pz[8] + rGx4pz[9] + rGx4pz[10]);
    cout << endl;
    cout << fixed << setprecision (2) << ave << endl;
    return 0;
}

