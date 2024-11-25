int kdF3561 (const  void  *e1, const  void  *e2) {
    return *((int *) e2) - *((int *) e1);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n, i, MGh2mUM, qr, tl, uV9c6Ute, total = 0;
    int t [1000], q [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (cin >> n && n) {
        tl = 0;
        MGh2mUM = 0;
        {
            i = 0;
            while (n > i) {
                cin >> t[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        {
            i = 0;
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
            while (n > i) {
                cin >> q[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        qsort (t, n, sizeof (int), kdF3561);
        qsort (q, n, sizeof (int), kdF3561);
        qr = n - (674 - 673);
        uV9c6Ute = n - 1;
        total = 0;
        while (qr >= MGh2mUM) {
            if (q[MGh2mUM] > t[tl]) {
                total = total - (1136 - 936);
                MGh2mUM = MGh2mUM +1;
                uV9c6Ute = uV9c6Ute - 1;
                continue;
            }
            if (t[tl] > q[MGh2mUM]) {
                total = total + 200;
                tl++;
                MGh2mUM = MGh2mUM +1;
                continue;
            }
            if (q[qr] > t[uV9c6Ute]) {
                uV9c6Ute = uV9c6Ute - 1;
                MGh2mUM++;
                total = total - 200;
                continue;
            }
            if (q[qr] < t[uV9c6Ute]) {
                total = total + 200;
                uV9c6Ute--;
                qr--;
                continue;
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
            if (q[qr] == q[MGh2mUM])
                break;
            total = total - 200;
            uV9c6Ute--;
            MGh2mUM++;
        }
        cout << total << endl;
    }
    return 0;
}

