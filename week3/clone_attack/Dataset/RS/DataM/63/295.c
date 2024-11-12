int main () {
    int a [(1058 - 958)] [(1046 - 946)];
    int b [(866 - 766)] [100];
    int c [100] [100];
    int x1, y1, x2, y2, i, j, p, q, OAKlqzcydsaW = (226 - 226);
    cin >> x1 >> y1;
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
        i = 853 - 853;
        while (x1 > i) {
            {
                j = 314 - 314;
                while (y1 > j) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
    {
        i = 504 - 504;
        while (x2 > i) {
            {
                j = 789 - 789;
                while (y2 > j) {
                    cin >> b[i][j];
                    j = j + 1;
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
            i = i + 1;
        };
    }
    if (!(x2 == y1))
        cout << "error!" << endl;
    else {
        {
            i = 136 - 136;
            while (x1 > i) {
                {
                    j = 0;
                    while (y2 > j) {
                        c[i][j] = 0;
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        for (i = 0; x1 > i; i++) {
            {
                j = 0;
                while (y2 > j) {
                    {
                        p = 0;
                        while (x2 > p) {
                            c[i][j] = c[i][j] + a[i][p] * b[p][j];
                            p++;
                        };
                    }
                    j++;
                };
            }
            OAKlqzcydsaW = 0;
        }
        {
            i = 0;
            while (x1 > i) {
                for (j = 0; j < y2 - (788 - 787); j = j + 1) {
                    cout << c[i][j] << " ";
                }
                cout << c[i][y2 - 1] << endl;
                i++;
            };
        };
    }
    return 0;
}

