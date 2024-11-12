int main () {
    int dVzjIsdW, i, NQMBiYdqlF, m, p;
    char str [dVzjIsdW] [7];
    double  a [dVzjIsdW], ZE9WV4o6ks [dVzjIsdW], c [dVzjIsdW], byBpkglC;
    m = (62 - 62);
    cin >> dVzjIsdW;
    {
        i = 363 - 363;
        while (i <= dVzjIsdW - (556 - 555)) {
            cin >> str[i];
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        i = 650 - 650;
        while (i <= dVzjIsdW - (191 - 190)) {
            if (str[i][(509 - 509)] == 'm') {
                ZE9WV4o6ks[m] = a[i];
                m = m + (532 - 531);
            }
            i = i + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    p = 0;
    {
        i = 0;
        while (i <= dVzjIsdW - (537 - 536)) {
            if (str[i][0] == 'f') {
                c[p] = a[i];
                p = p + (724 - 723);
            }
            i = i + 1;
        };
    }
    {
        NQMBiYdqlF = 0;
        while (NQMBiYdqlF < m - 1) {
            {
                i = 0;
                while (m - 1 - NQMBiYdqlF > i) {
                    if (ZE9WV4o6ks[i] > ZE9WV4o6ks[i + 1]) {
                        byBpkglC = ZE9WV4o6ks[i];
                        ZE9WV4o6ks[i] = ZE9WV4o6ks[i + 1];
                        ZE9WV4o6ks[i + 1] = byBpkglC;
                    }
                    i = i + 1;
                };
            }
            NQMBiYdqlF = NQMBiYdqlF +1;
        };
    }
    {
        NQMBiYdqlF = 0;
        while (NQMBiYdqlF < p - 1) {
            {
                i = 0;
                while (i < p - 1 - NQMBiYdqlF) {
                    if (c[i] < c[i + 1]) {
                        byBpkglC = c[i];
                        c[i] = c[i + 1];
                        c[i + 1] = byBpkglC;
                    }
                    i++;
                };
            }
            NQMBiYdqlF = NQMBiYdqlF +1;
        };
    }
    cout << fixed << setprecision (2) << ZE9WV4o6ks[0];
    if (m > 1) {
        i = 1;
        while (i <= m - 1) {
            cout << " " << fixed << setprecision (2) << ZE9WV4o6ks[i];
            i++;
        };
    }
    {
        i = 0;
        while (i <= p - 1) {
            cout << " " << fixed << setprecision (2) << c[i];
            i++;
        };
    }
    return 0;
}

