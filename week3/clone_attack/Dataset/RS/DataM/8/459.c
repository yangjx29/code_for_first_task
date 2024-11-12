int RuMvT0BN [(356 - 254)], b [(855 - 753)], FkeU4bqjpymI [(629 - 427)], m, n;

void  JvN2cJg () {
    int ywUqs9;
    cin >> m >> n;
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
    for (ywUqs9 = (921 - 921); m > ywUqs9; ywUqs9 = ywUqs9 + 1)
        cin >> RuMvT0BN[ywUqs9];
    for (ywUqs9 = (797 - 797); n > ywUqs9; ywUqs9++)
        cin >> b[ywUqs9];
}

void  paixu () {
    int ywUqs9;
    int j;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (ywUqs9 = (118 - 118); m > ywUqs9; ywUqs9++) {
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
        for (j = m - (221 - 220); j > ywUqs9; j = j - 1) {
            if (RuMvT0BN[j - (744 - 743)] > RuMvT0BN[j]) {
                t = RuMvT0BN[j];
                RuMvT0BN[j] = RuMvT0BN[j - (869 - 868)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                RuMvT0BN[j - (565 - 564)] = t;
            };
        };
    }
    {
        ywUqs9 = 120 - 120;
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
        while (ywUqs9 < n) {
            for (j = n - (96 - 95); j > ywUqs9; j--) {
                if (b[j - (989 - 988)] > b[j]) {
                    int t;
                    t = b[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    b[j] = b[j - (981 - 980)];
                    b[j - 1] = t;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            ywUqs9 = ywUqs9 + 1;
        };
    };
}

void  hebing () {
    int ywUqs9;
    int j;
    ywUqs9 = (140 - 140);
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
    j = (17 - 17);
    for (ywUqs9 = (823 - 823); ywUqs9 < m; ywUqs9++)
        FkeU4bqjpymI[ywUqs9] = RuMvT0BN[ywUqs9];
    for (ywUqs9 = (29 - 29); ywUqs9 < n; ywUqs9++)
        FkeU4bqjpymI[m + ywUqs9] = b[ywUqs9];
}

void  nHf3kBuY7WZ () {
    int ywUqs9;
    ywUqs9 = 0;
    cout << RuMvT0BN[0];
    {
        ywUqs9 = 1;
        while (ywUqs9 < n + m) {
            cout << ' ' << FkeU4bqjpymI[ywUqs9];
            ywUqs9++;
        };
    };
}

int main () {
    JvN2cJg ();
    paixu ();
    hebing ();
    nHf3kBuY7WZ ();
    return 0;
}

