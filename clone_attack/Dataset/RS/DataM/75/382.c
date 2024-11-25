int main () {
    char R4vXVYci;
    int KcyrFZt5xwb [(1231 - 231) + (611 - 601)] = {(990 - 990)};
    int y [1000 + 10] = {(113 - 113)};
    int aOhg2X [1000 + 10] = {0};
    int buQfT23ka1Hs;
    int finaltime;
    int digit;
    int Q03RNX5ZH;
    int LszI3V48T;
    int MmP9D7uiG;
    buQfT23ka1Hs = 0;
    finaltime = 0;
    int gdfuB7YIK;
    gdfuB7YIK = 0;
    cin >> KcyrFZt5xwb[buQfT23ka1Hs++];
    while ((R4vXVYci = cin.get ()) != '\n') {
        if (R4vXVYci == ',') {
            cin >> digit;
            KcyrFZt5xwb[buQfT23ka1Hs] = digit;
            buQfT23ka1Hs = buQfT23ka1Hs + 1;
        };
    }
    buQfT23ka1Hs = 0;
    cin >> y[buQfT23ka1Hs++];
    while ((R4vXVYci = cin.get ()) != '\n') {
        if (R4vXVYci == ',') {
            cin >> digit;
            y[buQfT23ka1Hs] = digit;
            finaltime = finaltime > digit ? finaltime : digit;
            buQfT23ka1Hs++;
        };
    }
    {
        Q03RNX5ZH = 0;
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
        while (Q03RNX5ZH < buQfT23ka1Hs) {
            {
                LszI3V48T = Q03RNX5ZH;
                while (LszI3V48T <= y[Q03RNX5ZH] - 1) {
                    aOhg2X[LszI3V48T]++;
                    LszI3V48T++;
                };
            }
            Q03RNX5ZH = Q03RNX5ZH +1;
        };
    }
    {
        Q03RNX5ZH = 0;
        while (Q03RNX5ZH < finaltime) {
            gdfuB7YIK = gdfuB7YIK > aOhg2X[Q03RNX5ZH] ? gdfuB7YIK : aOhg2X[Q03RNX5ZH];
            Q03RNX5ZH = Q03RNX5ZH +1;
        };
    }
    cout << buQfT23ka1Hs << " " << gdfuB7YIK << endl;
    return 0;
}

