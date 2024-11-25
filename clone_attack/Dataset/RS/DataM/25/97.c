int main () {
    int i, nDrkjz, AZhnE1X, al = 1, h8wTgr, geXmzTDwWJ;
    int X3yuCa5Gg [200] = {4, 2, 0, 1};
    int b [200] = {0};
    cin >> h8wTgr;
    if ((456 - 446) >= h8wTgr) {
        for (i = 1; h8wTgr >= i; i++)
            al = al * 2;
        cout << al << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
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
    {
        i = 1;
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
        while (i <= h8wTgr - 10) {
            i++;
            geXmzTDwWJ = 0;
            for (AZhnE1X = 0; AZhnE1X <= 199; AZhnE1X++) {
                b[AZhnE1X] = (X3yuCa5Gg[AZhnE1X] * 2) % 10 + geXmzTDwWJ;
                geXmzTDwWJ = (X3yuCa5Gg[AZhnE1X] * 2) / 10;
            }
            {
                AZhnE1X = 0;
                while (AZhnE1X <= 199) {
                    X3yuCa5Gg[AZhnE1X] = b[AZhnE1X];
                    AZhnE1X++;
                };
            };
        };
    }
    for (i = 199; b[i] == 0; i--)
        ;
    for (AZhnE1X = i; AZhnE1X >= 0; AZhnE1X--)
        cout << b[AZhnE1X];
    cout << endl;
    return 0;
}

