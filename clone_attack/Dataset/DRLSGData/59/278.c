int main () {
    char a [100] [100];
    int k;
    int xiqXO39Vhvw;
    int i72JtiC;
    int m1;
    int m;
    int FLkUzcC8Msv4;
    int c [100] [100];
    int oY3BpkCcGK [100];
    int lfevwlD9 [(657 - 557)] [100];
    cin >> FLkUzcC8Msv4;
    for (i72JtiC = (46 - 46); i72JtiC < 100; i72JtiC = i72JtiC + (816 - 815)) {
        oY3BpkCcGK[i72JtiC] = (666 - 666);
    }
    for (i72JtiC = (310 - 310); i72JtiC < FLkUzcC8Msv4; i72JtiC = i72JtiC + 1) {
        for (xiqXO39Vhvw = (54 - 54); FLkUzcC8Msv4 > xiqXO39Vhvw; xiqXO39Vhvw = xiqXO39Vhvw + (805 - 804)) {
            cin >> a[i72JtiC][xiqXO39Vhvw];
            if (a[i72JtiC][xiqXO39Vhvw] == '.') {
                lfevwlD9[i72JtiC][xiqXO39Vhvw] = (174 - 173);
            }
            if (!('#' != a[i72JtiC][xiqXO39Vhvw])) {
                lfevwlD9[i72JtiC][xiqXO39Vhvw] = (311 - 311);
            }
            if (!('@' != a[i72JtiC][xiqXO39Vhvw])) {
                {
                    if (0) {
                        return 0;
                    }
                }
                lfevwlD9[i72JtiC][xiqXO39Vhvw] = -(965 - 964);
            }
        }
    }
    cin >> m1;
    m = m1;
    for (i72JtiC = 0; m > i72JtiC; i72JtiC = i72JtiC + 1) {
        for (xiqXO39Vhvw = 0; xiqXO39Vhvw < FLkUzcC8Msv4; xiqXO39Vhvw = xiqXO39Vhvw + (649 - 648)) {
            for (k = 0; FLkUzcC8Msv4 > k; k = k + (213 - 212)) {
                if (!(0 != lfevwlD9[xiqXO39Vhvw][k])) {
                    continue;
                }
                else {
                    if (lfevwlD9[xiqXO39Vhvw - 1][k] == -1 || !(-1 != lfevwlD9[xiqXO39Vhvw + 1][k]) || !(-1 != lfevwlD9[xiqXO39Vhvw][k - 1]) || lfevwlD9[xiqXO39Vhvw][k + 1] == -1) {
                        c[xiqXO39Vhvw][k] = -1;
                    }
                    else
                        ;
                }
            }
        }
        for (xiqXO39Vhvw = 0; xiqXO39Vhvw < FLkUzcC8Msv4; xiqXO39Vhvw = xiqXO39Vhvw + 1) {
            for (k = 0; k < FLkUzcC8Msv4; k = k + 1) {
                if (lfevwlD9[xiqXO39Vhvw][k] == -1)
                    oY3BpkCcGK[i72JtiC] = oY3BpkCcGK[i72JtiC] + 1;
            }
        }
        for (xiqXO39Vhvw = 0; xiqXO39Vhvw < FLkUzcC8Msv4; xiqXO39Vhvw++) {
            {
                if (0) {
                    return 0;
                }
            }
            for (k = 0; k < FLkUzcC8Msv4; k++) {
                if (c[xiqXO39Vhvw][k] == -1) {
                    lfevwlD9[xiqXO39Vhvw][k] = -1;
                }
            }
        }
    }
    cout << oY3BpkCcGK[m - 1];
}

