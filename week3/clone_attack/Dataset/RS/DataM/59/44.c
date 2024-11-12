int main () {
    int m;
    int BuU3V71GXHM;
    char rY1X0uBj [101] [101];
    int i, j;
    int P3LqkHAlR;
    int n;
    P3LqkHAlR = (374 - 374);
    cin >> n;
    {
        i = 334 - 334;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            {
                j = 144 - 144;
                while (n > j) {
                    cin >> rY1X0uBj[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> BuU3V71GXHM;
    {
        m = 769 - 767;
        while (BuU3V71GXHM >= m) {
            m = m + 1;
            {
                i = 0;
                while (i < n) {
                    {
                        j = 0;
                        while (j < n) {
                            if (!('@' != rY1X0uBj[i][j])) {
                                if (rY1X0uBj[i][j + (37 - 36)] == '.' && n > (j + (767 - 766)))
                                    rY1X0uBj[i][j + (578 - 577)] = 'a';
                                if (!('.' != rY1X0uBj[i + (586 - 585)][j]) && n > (i + 1))
                                    rY1X0uBj[i + 1][j] = 'a';
                                if (!('.' != rY1X0uBj[i - 1][j]) && (i - 1) >= 0)
                                    rY1X0uBj[i - 1][j] = 'a';
                                if (rY1X0uBj[i][j - 1] == '.' && (j - 1) >= 0)
                                    rY1X0uBj[i][j - 1] = 'a';
                            }
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < n) {
                    {
                        j = 0;
                        while (j < n) {
                            if (rY1X0uBj[i][j] == 'a')
                                rY1X0uBj[i][j] = '@';
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (rY1X0uBj[i][j] == '@')
                        P3LqkHAlR = P3LqkHAlR +1;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cout << P3LqkHAlR;
    return 0;
}

