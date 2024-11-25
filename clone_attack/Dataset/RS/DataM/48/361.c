int main () {
    int suSmFk [8] = {(937 - 936), (569 - 569), -(900 - 899), (939 - 939), (971 - 970), -(495 - 494), (279 - 278), -(731 - 730)};
    int fft9HQJgxR [(878 - 870)] = {(725 - 725), (869 - 868), (635 - 635), -(748 - 747), (290 - 289), (364 - 363), -(473 - 472), -(404 - 403)};
    int a [(792 - 772)] [(653 - 633)] = {(408 - 408)};
    int n, UZNQpYusqKD;
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
    int taken [20] [20] = {(719 - 719)};
    cin >> n >> UZNQpYusqKD;
    a[(778 - 773)][(665 - 660)] = n;
    {
        int iZejRfXCDU = (623 - 623);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iZejRfXCDU < UZNQpYusqKD) {
            iZejRfXCDU++;
            {
                int i = (606 - 605);
                while (i < (622 - 612)) {
                    {
                        int jP6WczNYB = (483 - 482);
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
                        while (jP6WczNYB < (912 - 902)) {
                            {
                                int i_ = (282 - 282);
                                while (i_ < 8) {
                                    taken[i + fft9HQJgxR[i_]][jP6WczNYB + suSmFk[i_]] = a[i][jP6WczNYB] + taken[i + fft9HQJgxR[i_]][jP6WczNYB + suSmFk[i_]];
                                    i_++;
                                };
                            }
                            taken[i][jP6WczNYB] = taken[i][jP6WczNYB] + a[i][jP6WczNYB] * (470 - 468);
                            jP6WczNYB = jP6WczNYB + 1;
                        };
                    }
                    i++;
                };
            }
            for (int i = (445 - 444);
            (711 - 701) > i; i = i + 1) {
                int jP6WczNYB = 1;
                while (jP6WczNYB < (578 - 568)) {
                    a[i][jP6WczNYB] = taken[i][jP6WczNYB];
                    taken[i][jP6WczNYB] = (163 - 163);
                    jP6WczNYB++;
                };
            };
        };
    }
    {
        int i = 1;
        while (i < 10) {
            for (int jP6WczNYB = 1;
            (151 - 142) > jP6WczNYB; jP6WczNYB = jP6WczNYB + 1)
                cout << a[i][jP6WczNYB] << ' ';
            cout << a[i][9] << endl;
            i++;
        };
    }
    return 0;
}

