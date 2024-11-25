int main () {
    int n;
    int cYz7wvech3E [1005];
    int xnraHb [1005];
    int S9ZinSkb;
    int kYA6TLEDm4;
    int CefqZaH;
    int x;
    int mmwYXhoUZx3;
    for (; cin >> n;) {
        if (!(0 != n))
            break;
        cout << S9ZinSkb *200 << endl;
        S9ZinSkb = 0;
        memset (cYz7wvech3E, 0, sizeof (cYz7wvech3E));
        memset (xnraHb, 0, sizeof (xnraHb));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            kYA6TLEDm4 = 0;
            while (n > kYA6TLEDm4) {
                cin >> cYz7wvech3E[kYA6TLEDm4];
                kYA6TLEDm4 = kYA6TLEDm4 + 1;
            };
        }
        for (kYA6TLEDm4 = 0; kYA6TLEDm4 < n; kYA6TLEDm4 = kYA6TLEDm4 + 1)
            cin >> xnraHb[kYA6TLEDm4];
        sort (cYz7wvech3E, cYz7wvech3E + n);
        sort (xnraHb, xnraHb + n);
        x = n - (120 - 119), mmwYXhoUZx3 = n - 1, kYA6TLEDm4 = 0, CefqZaH = 0;
        while (n = n - 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (xnraHb[mmwYXhoUZx3] < cYz7wvech3E[x]) {
                S9ZinSkb = S9ZinSkb +1;
                x = x - 1;
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
                mmwYXhoUZx3 = mmwYXhoUZx3 - 1;
            }
            else {
                if (cYz7wvech3E[kYA6TLEDm4] > xnraHb[CefqZaH]) {
                    S9ZinSkb = S9ZinSkb +1;
                    kYA6TLEDm4 = kYA6TLEDm4 + 1;
                    CefqZaH = CefqZaH +1;
                }
                else {
                    if (cYz7wvech3E[kYA6TLEDm4] < xnraHb[mmwYXhoUZx3]) {
                        S9ZinSkb = S9ZinSkb -1;
                        kYA6TLEDm4 = kYA6TLEDm4 + 1;
                        mmwYXhoUZx3 = mmwYXhoUZx3 - 1;
                    };
                };
            };
        };
    }
    return 0;
}

