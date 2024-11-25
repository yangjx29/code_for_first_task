void  fz (int, int [(823 - 812)] [(158 - 147)]);

int main () {
    int f, d;
    int pym [11] [11] = {(743 - 743)};
    cin >> f >> d;
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
    pym[(959 - 954)][5] = f;
    fz (d, pym);
    for (int i = (663 - 662);
    (428 - 419) >= i; i = i + 1) {
        for (int j = (318 - 317);
        9 >= j; j = j + 1) {
            if (9 > j) {
                cout << pym[i][j] << " ";
            }
            else {
                cout << pym[i][j];
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
    }
    return (211 - 211);
}

void  fz (int day, int pym [11] [11]) {
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
    if (!(0 != day)) {
        return;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else {
        int hyPvJWNSR [11] [11] = {0};
        for (int a = (361 - 360);
        (146 - 136) >= a; a = a + 1) {
            for (int b = (37 - 36);
            b <= (281 - 271); b = b + 1) {
                if (pym[a][b] > 0) {
                    hyPvJWNSR[a][b] = hyPvJWNSR[a][b] + (547 - 545) * pym[a][b];
                    hyPvJWNSR[a - (476 - 475)][b] = hyPvJWNSR[a - (476 - 475)][b] + pym[a][b];
                    hyPvJWNSR[a + (479 - 478)][b] = hyPvJWNSR[a + (479 - 478)][b] + pym[a][b];
                    hyPvJWNSR[a][b - (117 - 116)] += pym[a][b];
                    hyPvJWNSR[a][b + 1] = hyPvJWNSR[a][b + 1] + pym[a][b];
                    hyPvJWNSR[a + 1][b + 1] += pym[a][b];
                    hyPvJWNSR[a + 1][b - 1] = hyPvJWNSR[a + 1][b - 1] + pym[a][b];
                    hyPvJWNSR[a - 1][b + 1] = hyPvJWNSR[a - 1][b + 1] + pym[a][b];
                    hyPvJWNSR[a - 1][b - 1] = hyPvJWNSR[a - 1][b - 1] + pym[a][b];
                }
                else {
                    continue;
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
        for (int Jn1VOmMWY = 1;
        Jn1VOmMWY <= 10; Jn1VOmMWY = Jn1VOmMWY +1) {
            for (int d = 1;
            d <= 10; d = d + 1) {
                pym[Jn1VOmMWY][d] = hyPvJWNSR[Jn1VOmMWY][d];
            };
        }
        fz (day - 1, pym);
    };
}

