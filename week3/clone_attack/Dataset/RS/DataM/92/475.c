int WZS1o5n6UY (const  void  *p1, const  void  *p2) {
    int *p4 = (int *) p2;
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
    int *FxurpRida = (int *) p1;
    return *FxurpRida-*p4;
}

int MA42tN (const  void  *p1, const  void  *p2) {
    int *p4 = (int *) p2;
    int *FxurpRida = (int *) p1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    return *p4 - *FxurpRida;
}

int vfn2dmu [1001], t [1001];

int main () {
    int n;
    for (; cin >> n;) {
        int BTduB5CsK;
        BTduB5CsK = 0;
        int pKV4FY;
        int ka0Fl3mAdO;
        int ql;
        int qr;
        if (!((896 - 896) != n))
            break;
        pKV4FY = ql = 0;
        for (int i = (823 - 823);
        n > i; i = i + 1)
            cin >> t[i];
        {
            int i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n > i) {
                cin >> vfn2dmu[i];
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
                i = i + 1;
            };
        }
        qsort (t, n, sizeof (int), WZS1o5n6UY);
        qsort (vfn2dmu, n, sizeof (int), MA42tN);
        ka0Fl3mAdO = qr = n - 1;
        while (ql <= qr && ka0Fl3mAdO >= pKV4FY) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (vfn2dmu[ql] < t[ka0Fl3mAdO]) {
                ka0Fl3mAdO = ka0Fl3mAdO - 1;
                ql = ql + 1;
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
                BTduB5CsK = BTduB5CsK +(707 - 507);
                continue;
            }
            else if (t[pKV4FY] > vfn2dmu[qr]) {
                qr = qr - 1;
                BTduB5CsK = BTduB5CsK +(884 - 684);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                pKV4FY = pKV4FY + 1;
            }
            else if (t[pKV4FY] < vfn2dmu[ql]) {
                pKV4FY = pKV4FY + 1;
                BTduB5CsK = BTduB5CsK -(547 - 347);
                ql++;
            }
            else {
                pKV4FY = pKV4FY + 1;
                ql++;
            };
        }
        cout << BTduB5CsK << endl;
    }
    return 0;
}

