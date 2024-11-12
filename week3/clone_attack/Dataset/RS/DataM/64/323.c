int main () {
    int zMOVF8Lv;
    int n;
    int RuwZyn;
    int AtCUh0jpuOq;
    int UYy7vDMH;
    int rPSnLNe [(400 - 390)];
    int I5c8l9EX2YKQ [(282 - 272)];
    int uQlU72 [10];
    zMOVF8Lv = (875 - 875);
    double  XsTNZ6SezU [10] [9] = {(869 - 869)};
    double  UYwLgvF5ZA [50] = {0};
    double  qRkqLwC0a;
    cin >> n;
    for (RuwZyn = 0; n > RuwZyn; RuwZyn = RuwZyn +1) {
        cin >> rPSnLNe[RuwZyn] >> I5c8l9EX2YKQ[RuwZyn] >> uQlU72[RuwZyn];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        RuwZyn = 0;
        while (n - (299 - 298) > RuwZyn) {
            {
                AtCUh0jpuOq = 876 - 875;
                while (n > AtCUh0jpuOq) {
                    XsTNZ6SezU[RuwZyn][AtCUh0jpuOq -RuwZyn-(851 - 850)] = sqrt ((rPSnLNe[RuwZyn] - rPSnLNe[AtCUh0jpuOq]) * (rPSnLNe[RuwZyn] - rPSnLNe[AtCUh0jpuOq]) + (I5c8l9EX2YKQ[RuwZyn] - I5c8l9EX2YKQ[AtCUh0jpuOq]) * (I5c8l9EX2YKQ[RuwZyn] - I5c8l9EX2YKQ[AtCUh0jpuOq]) + (uQlU72[RuwZyn] - uQlU72[AtCUh0jpuOq]) * (uQlU72[RuwZyn] - uQlU72[AtCUh0jpuOq]));
                    AtCUh0jpuOq = AtCUh0jpuOq +1;
                    UYwLgvF5ZA[zMOVF8Lv++] = XsTNZ6SezU[RuwZyn][AtCUh0jpuOq -RuwZyn-(147 - 146)];
                };
            }
            RuwZyn = RuwZyn +1;
        };
    }
    {
        zMOVF8Lv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n * (n - 1) / 2 > zMOVF8Lv) {
            {
                UYy7vDMH = 0;
                while (n * (n - 1) / 2 - zMOVF8Lv - 1 > UYy7vDMH) {
                    if (UYwLgvF5ZA[UYy7vDMH +1] > UYwLgvF5ZA[UYy7vDMH]) {
                        qRkqLwC0a = UYwLgvF5ZA[UYy7vDMH];
                        UYwLgvF5ZA[UYy7vDMH] = UYwLgvF5ZA[UYy7vDMH +1];
                        UYwLgvF5ZA[UYy7vDMH +1] = qRkqLwC0a;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    UYy7vDMH++;
                };
            }
            zMOVF8Lv++;
        };
    }
    for (zMOVF8Lv = 0; n * (n - 1) / 2 > zMOVF8Lv; zMOVF8Lv = zMOVF8Lv + 1) {
        if (zMOVF8Lv >= 1 && !(UYwLgvF5ZA[zMOVF8Lv - 1] != UYwLgvF5ZA[zMOVF8Lv]))
            continue;
        for (RuwZyn = 0; RuwZyn < n - 1; RuwZyn = RuwZyn +1) {
            AtCUh0jpuOq = RuwZyn +1;
            while (AtCUh0jpuOq < n) {
                if (XsTNZ6SezU[RuwZyn][AtCUh0jpuOq -RuwZyn-1] == UYwLgvF5ZA[zMOVF8Lv]) {
                    cout << '(' << rPSnLNe[RuwZyn] << ',' << I5c8l9EX2YKQ[RuwZyn] << ',' << uQlU72[RuwZyn] << ')' << '-' << '(' << rPSnLNe[AtCUh0jpuOq] << ',' << I5c8l9EX2YKQ[AtCUh0jpuOq] << ',' << uQlU72[AtCUh0jpuOq] << ')' << '=' << fixed << setprecision (2) << UYwLgvF5ZA[zMOVF8Lv] << endl;
                }
                AtCUh0jpuOq++;
            };
        };
    }
    return 0;
}

