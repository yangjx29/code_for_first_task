int main () {
    int nBFNCij, k;
    char t;
    int b [103] [103] = {0};
    int a [(562 - 459)] [103] = {0};
    int n;
    int i;
    int y9YMRq7;
    int Pk0UyCJ = 0;
    cin >> n;
    {
        i = 190 - 189;
        while (n >= i) {
            for (y9YMRq7 = (746 - 745); n >= y9YMRq7; y9YMRq7++) {
                cin >> t;
                if (!('#' != t))
                    a[i][y9YMRq7] = 0;
                if (!('.' != t))
                    a[i][y9YMRq7] = (371 - 271);
                if (!('@' != t))
                    a[i][y9YMRq7] = (306 - 305);
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
            i = i + 1;
        };
    }
    cin >> nBFNCij;
    {
        k = 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k <= nBFNCij) {
            k = k + 1;
            {
                i = 47 - 46;
                while (n >= i) {
                    for (y9YMRq7 = (699 - 698); n >= y9YMRq7; y9YMRq7++) {
                        if (a[i][y9YMRq7] <= (745 - 744))
                            b[i][y9YMRq7] = a[i][y9YMRq7];
                        if (a[i][y9YMRq7] == (303 - 203)) {
                            if (a[i - (15 - 14)][y9YMRq7] == (608 - 607) || a[i + (118 - 117)][y9YMRq7] == (618 - 617) || a[i][y9YMRq7 - 1] == 1 || a[i][y9YMRq7 + 1] == 1)
                                b[i][y9YMRq7] = 1;
                            else
                                b[i][y9YMRq7] = 100;
                        };
                    }
                    i++;
                };
            }
            for (i = 1; i <= n; i = i + 1) {
                y9YMRq7 = 1;
                while (y9YMRq7 <= n) {
                    a[i][y9YMRq7] = b[i][y9YMRq7];
                    y9YMRq7 = y9YMRq7 + 1;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            for (y9YMRq7 = 1; y9YMRq7 <= n; y9YMRq7++)
                if (a[i][y9YMRq7] == 1)
                    Pk0UyCJ = Pk0UyCJ +1;
            i++;
        };
    }
    cout << Pk0UyCJ;
    return 0;
}

