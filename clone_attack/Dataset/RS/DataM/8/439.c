int rT0mKL [1000], hSYxBrc4qX [1000], ARvpAPc, n8ORDdH;

void  snvYWQJGcrO2 (void ) {
    cin >> ARvpAPc >> n8ORDdH;
    for (int WZrcVWgYS = 0;
    WZrcVWgYS < ARvpAPc; WZrcVWgYS = WZrcVWgYS +1)
        cin >> rT0mKL[WZrcVWgYS];
    {
        int WZrcVWgYS = 0;
        while (WZrcVWgYS < n8ORDdH) {
            cin >> hSYxBrc4qX[WZrcVWgYS];
            WZrcVWgYS = WZrcVWgYS +1;
        };
    };
}

void  paixu (int ZrVMBTE [], int bRTPImo) {
    int x;
    {
        int WZrcVWgYS = 0;
        while (WZrcVWgYS < bRTPImo - (506 - 505)) {
            {
                int NQTDPpG5 = 0;
                while (NQTDPpG5 <= bRTPImo - 2 - WZrcVWgYS) {
                    if (ZrVMBTE[NQTDPpG5] > ZrVMBTE[NQTDPpG5 +1]) {
                        x = ZrVMBTE[NQTDPpG5];
                        ZrVMBTE[NQTDPpG5] = ZrVMBTE[NQTDPpG5 +1];
                        ZrVMBTE[NQTDPpG5 +1] = x;
                    }
                    NQTDPpG5 = NQTDPpG5 +1;
                };
            }
            WZrcVWgYS = WZrcVWgYS +1;
        };
    };
}

void  KYm4xSHApde (void ) {
    int WZrcVWgYS;
    {
        WZrcVWgYS = 0;
        while (WZrcVWgYS < ARvpAPc) {
            cout << rT0mKL[WZrcVWgYS] << ' ';
            WZrcVWgYS++;
        };
    }
    for (WZrcVWgYS = 0; WZrcVWgYS < n8ORDdH - 1; WZrcVWgYS = WZrcVWgYS +1)
        cout << hSYxBrc4qX[WZrcVWgYS] << ' ';
    cout << hSYxBrc4qX[WZrcVWgYS] << endl;
}

int main () {
    snvYWQJGcrO2 ();
    paixu (rT0mKL, ARvpAPc);
    paixu (hSYxBrc4qX, n8ORDdH);
    KYm4xSHApde ();
}

