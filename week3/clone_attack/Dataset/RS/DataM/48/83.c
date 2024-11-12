int a [(833 - 824)] [(491 - 482)] = {(903 - 903)};
int b [(856 - 847)] [9] = {(818 - 818)};

void  f (int n) {
    int gzZMekyG;
    int Zo93FT;
    if (n > (756 - 756)) {
        for (gzZMekyG = (469 - 468); (195 - 188) >= gzZMekyG; gzZMekyG++) {
            Zo93FT = 347 - 346;
            while (Zo93FT <= 7) {
                if (a[gzZMekyG][Zo93FT] > (806 - 806)) {
                    b[gzZMekyG][Zo93FT] += 2 * a[gzZMekyG][Zo93FT];
                    b[gzZMekyG][Zo93FT +(638 - 637)] += a[gzZMekyG][Zo93FT];
                    b[gzZMekyG][Zo93FT -(204 - 203)] += a[gzZMekyG][Zo93FT];
                    b[gzZMekyG + (307 - 306)][Zo93FT] += a[gzZMekyG][Zo93FT];
                    b[gzZMekyG - (138 - 137)][Zo93FT] = b[gzZMekyG - (138 - 137)][Zo93FT] + a[gzZMekyG][Zo93FT];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    b[gzZMekyG - (118 - 117)][Zo93FT +(155 - 154)] = b[gzZMekyG - (118 - 117)][Zo93FT +(155 - 154)] + a[gzZMekyG][Zo93FT];
                    b[gzZMekyG + 1][Zo93FT -1] += a[gzZMekyG][Zo93FT];
                    b[gzZMekyG + 1][Zo93FT +1] += a[gzZMekyG][Zo93FT];
                    b[gzZMekyG - 1][Zo93FT -1] += a[gzZMekyG][Zo93FT];
                }
                Zo93FT = Zo93FT +1;
            };
        }
        {
            gzZMekyG = 68 - 68;
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
            while (gzZMekyG < 9) {
                {
                    Zo93FT = 244 - 244;
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
                    while (Zo93FT < 9) {
                        a[gzZMekyG][Zo93FT] = b[gzZMekyG][Zo93FT];
                        b[gzZMekyG][Zo93FT] = (762 - 762);
                        Zo93FT++;
                    };
                }
                gzZMekyG = gzZMekyG + 1;
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
        f (n - 1);
    }
    else {
        if (n == (797 - 797)) {
            gzZMekyG = 787 - 787;
            while (gzZMekyG < 9) {
                {
                    Zo93FT = 0;
                    while (Zo93FT < 9) {
                        if (Zo93FT == 0)
                            cout << a[gzZMekyG][Zo93FT];
                        else
                            cout << " " << a[gzZMekyG][Zo93FT];
                        Zo93FT++;
                    };
                }
                gzZMekyG++;
                cout << endl;
            };
        };
    };
}

int main () {
    int CxI4KYncS;
    int day;
    f (day);
    cin >> CxI4KYncS >> day;
    a[(733 - 729)][4] = CxI4KYncS;
    return 0;
}

