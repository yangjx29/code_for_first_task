int main () {
    double  NLSedMma9ql [50], vPWgby;
    int ps1ECh5, XQBASKum, S87kiKd = (292 - 291), rxycBRkK [(86 - 75)], y [11], z [11], a7h9E1iMpmy, XnzZS9QaoP, lVdtca6;
    cin >> XQBASKum;
    {
        ps1ECh5 = 1;
        while (XQBASKum >= ps1ECh5) {
            cin >> rxycBRkK[ps1ECh5] >> y[ps1ECh5] >> z[ps1ECh5];
            ps1ECh5++;
        };
    }
    {
        ps1ECh5 = 1;
        while (XQBASKum > ps1ECh5) {
            {
                lVdtca6 = ps1ECh5 + 1;
                while (XQBASKum >= lVdtca6) {
                    NLSedMma9ql[S87kiKd] = sqrt (pow (rxycBRkK[ps1ECh5] - rxycBRkK[lVdtca6], 2.0) + pow (y[ps1ECh5] - y[lVdtca6], 2.0) + pow (z[ps1ECh5] - z[lVdtca6], 2.0));
                    lVdtca6++;
                    S87kiKd++;
                };
            }
            ps1ECh5++;
        };
    }
    {
        S87kiKd = 1;
        while (S87kiKd <= (XQBASKum *(XQBASKum -1) / 2 - 1)) {
            for (ps1ECh5 = 1; ps1ECh5 <= (XQBASKum *(XQBASKum -1) / 2 - S87kiKd); ps1ECh5++)
                if (NLSedMma9ql[ps1ECh5] < NLSedMma9ql[ps1ECh5 + 1]) {
                    vPWgby = NLSedMma9ql[ps1ECh5];
                    NLSedMma9ql[ps1ECh5] = NLSedMma9ql[ps1ECh5 + 1];
                    NLSedMma9ql[ps1ECh5 + 1] = vPWgby;
                }
            S87kiKd++;
        };
    }
    for (ps1ECh5 = 1; ps1ECh5 <= (XQBASKum *(XQBASKum -1) / 2); ps1ECh5++) {
        if (NLSedMma9ql[ps1ECh5] == NLSedMma9ql[ps1ECh5 + 1])
            continue;
        for (a7h9E1iMpmy = 1; a7h9E1iMpmy < XQBASKum; a7h9E1iMpmy = a7h9E1iMpmy + 1) {
            XnzZS9QaoP = a7h9E1iMpmy + 1;
            while (XnzZS9QaoP <= XQBASKum) {
                if (sqrt (pow (rxycBRkK[a7h9E1iMpmy] - rxycBRkK[XnzZS9QaoP], 2.0) + pow (y[a7h9E1iMpmy] - y[XnzZS9QaoP], 2.0) + pow (z[a7h9E1iMpmy] - z[XnzZS9QaoP], 2.0)) == NLSedMma9ql[ps1ECh5])
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", rxycBRkK[a7h9E1iMpmy], y[a7h9E1iMpmy], z[a7h9E1iMpmy], rxycBRkK[XnzZS9QaoP], y[XnzZS9QaoP], z[XnzZS9QaoP], NLSedMma9ql[ps1ECh5]);
                XnzZS9QaoP = XnzZS9QaoP +1;
            };
        };
    }
    return 0;
}

