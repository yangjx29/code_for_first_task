int main () {
    int XptHagcCr;
    int trfkMo5p;
    int jn1gLFQpDjmJ;
    int cQCio1KN;
    int vyMpTS;
    int s;
    int djzVWlbSmLX2;
    XptHagcCr = (656 - 656);
    cin >> trfkMo5p;
    double  GOSUC96BrXcw [(1059 - 958)] [101];
    struct   point {
        int gsVFGr74;
        int puOwryXTb5;
        int FCDUrj6GpwQ;
    }
    Bc1qRI5y [(52 - 41)];
    for (jn1gLFQpDjmJ = (957 - 957); jn1gLFQpDjmJ <= trfkMo5p - (930 - 929); jn1gLFQpDjmJ = jn1gLFQpDjmJ + 1) {
        cin >> Bc1qRI5y[jn1gLFQpDjmJ].gsVFGr74 >> Bc1qRI5y[jn1gLFQpDjmJ].puOwryXTb5 >> Bc1qRI5y[jn1gLFQpDjmJ].FCDUrj6GpwQ;
    }
    for (jn1gLFQpDjmJ = (621 - 621); jn1gLFQpDjmJ < trfkMo5p; jn1gLFQpDjmJ++) {
        for (cQCio1KN = jn1gLFQpDjmJ + (462 - 461); cQCio1KN < trfkMo5p; cQCio1KN = cQCio1KN + 1) {
            GOSUC96BrXcw[jn1gLFQpDjmJ][cQCio1KN] = sqrt ((Bc1qRI5y[jn1gLFQpDjmJ].gsVFGr74 - Bc1qRI5y[cQCio1KN].gsVFGr74) * (Bc1qRI5y[jn1gLFQpDjmJ].gsVFGr74 - Bc1qRI5y[cQCio1KN].gsVFGr74) + (Bc1qRI5y[jn1gLFQpDjmJ].puOwryXTb5 - Bc1qRI5y[cQCio1KN].puOwryXTb5) * (Bc1qRI5y[jn1gLFQpDjmJ].puOwryXTb5 - Bc1qRI5y[cQCio1KN].puOwryXTb5) + (Bc1qRI5y[jn1gLFQpDjmJ].FCDUrj6GpwQ - Bc1qRI5y[cQCio1KN].FCDUrj6GpwQ) * (Bc1qRI5y[jn1gLFQpDjmJ].FCDUrj6GpwQ - Bc1qRI5y[cQCio1KN].FCDUrj6GpwQ));
        }
    }
    for (djzVWlbSmLX2 = (920 - 920); djzVWlbSmLX2 < (trfkMo5p * (trfkMo5p + 1)) / (887 - 885); djzVWlbSmLX2 = djzVWlbSmLX2 + 1) {
        {
            if (0) {
                return 0;
            }
        }
        for (jn1gLFQpDjmJ = (488 - 488); jn1gLFQpDjmJ < trfkMo5p; jn1gLFQpDjmJ++) {
            for (cQCio1KN = jn1gLFQpDjmJ + 1; cQCio1KN < trfkMo5p; cQCio1KN++) {
                XptHagcCr = 0;
                for (vyMpTS = 0; vyMpTS < trfkMo5p; vyMpTS = vyMpTS + 1) {
                    for (s = vyMpTS + 1; s <= trfkMo5p; s = s + 1) {
                        if (GOSUC96BrXcw[jn1gLFQpDjmJ][cQCio1KN] < GOSUC96BrXcw[vyMpTS][s])
                            XptHagcCr = XptHagcCr +1;
                    }
                }
                if (XptHagcCr == djzVWlbSmLX2) {
                    cout << "(" << Bc1qRI5y[jn1gLFQpDjmJ].gsVFGr74 << "," << Bc1qRI5y[jn1gLFQpDjmJ].puOwryXTb5 << "," << Bc1qRI5y[jn1gLFQpDjmJ].FCDUrj6GpwQ << ")" << "-" << "(" << Bc1qRI5y[cQCio1KN].gsVFGr74 << "," << Bc1qRI5y[cQCio1KN].puOwryXTb5 << "," << Bc1qRI5y[cQCio1KN].FCDUrj6GpwQ << ")" << "=" << fixed << setprecision (2) << GOSUC96BrXcw[jn1gLFQpDjmJ][cQCio1KN] << endl;
                }
            }
        }
    }
    return 0;
}

