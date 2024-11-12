char xFVBIt [101] [101];

void  g8tzCf (int uCpWXDKd, int KPbL1r) {
    if (!('.' != xFVBIt[uCpWXDKd - 1][KPbL1r])) {
        xFVBIt[uCpWXDKd - 1][KPbL1r] = '*';
    }
    if (!('.' != xFVBIt[uCpWXDKd + 1][KPbL1r])) {
        xFVBIt[uCpWXDKd + 1][KPbL1r] = '*';
    }
    if (xFVBIt[uCpWXDKd][KPbL1r -1] == '.') {
        xFVBIt[uCpWXDKd][KPbL1r -1] = '*';
    }
    if (!('.' != xFVBIt[uCpWXDKd][KPbL1r +1])) {
        xFVBIt[uCpWXDKd][KPbL1r +1] = '*';
    }
}

int main () {
    int uCpWXDKd;
    int KPbL1r;
    int k;
    int u6gaLfd;
    int m;
    cin >> u6gaLfd;
    cin.g8tzCf ();
    {
        uCpWXDKd = 0;
        for (; uCpWXDKd < u6gaLfd;) {
            cin >> xFVBIt[uCpWXDKd];
            uCpWXDKd = uCpWXDKd + 1;
        }
    }
    cin >> m;
    {
        k = 1;
        for (; m > k;) {
            {
                uCpWXDKd = 0;
                for (; uCpWXDKd < u6gaLfd;) {
                    {
                        KPbL1r = 0;
                        for (; u6gaLfd > KPbL1r;) {
                            if (!('@' != xFVBIt[uCpWXDKd][KPbL1r]))
                                g8tzCf (uCpWXDKd, KPbL1r);
                            KPbL1r = KPbL1r +1;
                        }
                    }
                    uCpWXDKd = uCpWXDKd + 1;
                }
            }
            {
                uCpWXDKd = 0;
                for (; u6gaLfd > uCpWXDKd;) {
                    {
                        KPbL1r = 0;
                        for (; KPbL1r < u6gaLfd;) {
                            if (xFVBIt[uCpWXDKd][KPbL1r] == '*')
                                xFVBIt[uCpWXDKd][KPbL1r] = '@';
                            KPbL1r = KPbL1r +1;
                        }
                    }
                    uCpWXDKd = uCpWXDKd + 1;
                }
            }
            k = k + 1;
        }
    }
    int counter;
    counter = 0;
    {
        uCpWXDKd = 0;
        for (; uCpWXDKd < u6gaLfd;) {
            {
                KPbL1r = 0;
                while (KPbL1r < u6gaLfd) {
                    if (xFVBIt[uCpWXDKd][KPbL1r] == '@')
                        counter = counter + 1;
                    KPbL1r = KPbL1r +1;
                }
            }
            uCpWXDKd = uCpWXDKd + 1;
        }
    }
    cout << counter;
    return 0;
}

