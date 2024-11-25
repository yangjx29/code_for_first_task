int n, m, uCrkWj = (502 - 502), Md6C4mDi2Hln = 0, oZaLkq = 0;
char sz1Ifw [(1046 - 946)] [100];

void  mEMSDQ0umkbG (int x) {
    if (x == (517 - 516)) {
        oZaLkq = 0;
        {
            uCrkWj = 0;
            while (uCrkWj < n) {
                {
                    Md6C4mDi2Hln = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (Md6C4mDi2Hln < n) {
                        if (sz1Ifw[uCrkWj][Md6C4mDi2Hln] == '@')
                            oZaLkq++;
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
                        Md6C4mDi2Hln++;
                    };
                }
                uCrkWj++;
            };
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
    if (x > (620 - 619)) {
        mEMSDQ0umkbG (x - (819 - 818));
        oZaLkq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (uCrkWj = 0; uCrkWj < n; uCrkWj++) {
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
            for (Md6C4mDi2Hln = 0; Md6C4mDi2Hln < n; Md6C4mDi2Hln++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (sz1Ifw[uCrkWj][Md6C4mDi2Hln] == '@') {
                    if (!('.' != sz1Ifw[uCrkWj][Md6C4mDi2Hln +1]) && n - 1 > Md6C4mDi2Hln) {
                        sz1Ifw[uCrkWj][Md6C4mDi2Hln +1] = '$';
                    }
                    if (sz1Ifw[uCrkWj][Md6C4mDi2Hln -1] == '.' && 0 < Md6C4mDi2Hln) {
                        sz1Ifw[uCrkWj][Md6C4mDi2Hln -1] = '$';
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    if (!('.' != sz1Ifw[uCrkWj - 1][Md6C4mDi2Hln]) && uCrkWj > 0) {
                        sz1Ifw[uCrkWj - 1][Md6C4mDi2Hln] = '$';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    if (sz1Ifw[uCrkWj + 1][Md6C4mDi2Hln] == '.' && uCrkWj < n - 1) {
                        sz1Ifw[uCrkWj + 1][Md6C4mDi2Hln] = '$';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    };
                };
            };
        }
        for (uCrkWj = 0; uCrkWj < n; uCrkWj++) {
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
            for (Md6C4mDi2Hln = 0; Md6C4mDi2Hln < n; Md6C4mDi2Hln++) {
                if (sz1Ifw[uCrkWj][Md6C4mDi2Hln] == '$')
                    sz1Ifw[uCrkWj][Md6C4mDi2Hln] = '@';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (sz1Ifw[uCrkWj][Md6C4mDi2Hln] == '@' || sz1Ifw[uCrkWj][Md6C4mDi2Hln] == '$')
                    oZaLkq++;
            };
        };
    };
}

int main () {
    mEMSDQ0umkbG (m);
    cout << oZaLkq << endl;
    cin >> n;
    for (uCrkWj = 0; uCrkWj < n; uCrkWj++) {
        cin >> sz1Ifw[uCrkWj];
    }
    cin >> m;
    return 0;
}

