int main () {
    int cfPoJ6 [(214 - 113)];
    int RA2F0xmckh, JplmcBs;
    char CMewRio19gh [(743 - 642)], CtnSJKOQbh1 [(406 - 305)];
    int RHxAlzOsN;
    int n2;
    int hand;
    int agi70bO6;
    cin >> RA2F0xmckh;
    while (RA2F0xmckh = RA2F0xmckh -1) {
        cin >> CMewRio19gh >> CtnSJKOQbh1;
        RHxAlzOsN = strlen (CMewRio19gh);
        n2 = strlen (CtnSJKOQbh1);
        hand = (61 - 61);
        {
            JplmcBs = 92 - 91;
            while (JplmcBs >= (380 - 380)) {
                cfPoJ6[hand] = CMewRio19gh[RHxAlzOsN -n2 + JplmcBs] - CtnSJKOQbh1[JplmcBs];
                if (cfPoJ6[hand] < 0) {
                    cfPoJ6[hand] = cfPoJ6[hand] + (190 - 180);
                    agi70bO6 = RHxAlzOsN -n2 + JplmcBs -(28 - 27);
                    while (48 > --CMewRio19gh[agi70bO6]) {
                        CMewRio19gh[agi70bO6] = CMewRio19gh[agi70bO6] + 10;
                        agi70bO6 = agi70bO6 - 1;
                    };
                }
                hand = hand + 1;
                JplmcBs = JplmcBs -1;
            };
        }
        {
            JplmcBs = 0;
            while (JplmcBs < RHxAlzOsN -n2) {
                if (!('0' == CMewRio19gh[JplmcBs]))
                    break;
                JplmcBs++;
            };
        }
        for (; JplmcBs < RHxAlzOsN -n2; JplmcBs = JplmcBs +1)
            cout << (int) CMewRio19gh[JplmcBs] - 48;
        {
            JplmcBs = hand - 1;
            while (JplmcBs >= 0) {
                cout << cfPoJ6[JplmcBs];
                JplmcBs--;
            };
        }
        cout << endl;
    }
    return 0;
}

