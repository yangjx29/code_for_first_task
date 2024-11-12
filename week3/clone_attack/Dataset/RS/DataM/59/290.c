int main () {
    char a [(244 - 143)] [101];
    int Bu4Sm3R;
    int hpLrQ0zET;
    int BVpmAno9;
    int fn3ihukJTFZ;
    int bhWkfgOpdI;
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
    cin >> BVpmAno9;
    {
        Bu4Sm3R = 942 - 941;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Bu4Sm3R <= BVpmAno9) {
            {
                hpLrQ0zET = 1;
                while (hpLrQ0zET <= BVpmAno9) {
                    cin >> a[Bu4Sm3R][hpLrQ0zET];
                    hpLrQ0zET = hpLrQ0zET + 1;
                };
            }
            Bu4Sm3R++;
        };
    }
    cin >> bhWkfgOpdI;
    while (1 < bhWkfgOpdI) {
        bhWkfgOpdI--;
        {
            Bu4Sm3R = 1;
            while (Bu4Sm3R <= BVpmAno9) {
                {
                    hpLrQ0zET = 1;
                    while (hpLrQ0zET <= BVpmAno9) {
                        if (!('@' != a[Bu4Sm3R][hpLrQ0zET])) {
                            if ((Bu4Sm3R > 1) && (a[Bu4Sm3R -1][hpLrQ0zET] == '.'))
                                a[Bu4Sm3R -1][hpLrQ0zET] = '1';
                            if ((Bu4Sm3R < BVpmAno9) && (!('.' != a[Bu4Sm3R +1][hpLrQ0zET])))
                                a[Bu4Sm3R +1][hpLrQ0zET] = '1';
                            if ((hpLrQ0zET > 1) && (a[Bu4Sm3R][hpLrQ0zET - 1] == '.'))
                                a[Bu4Sm3R][hpLrQ0zET - 1] = '1';
                            if ((hpLrQ0zET < BVpmAno9) && (a[Bu4Sm3R][hpLrQ0zET + 1] == '.'))
                                a[Bu4Sm3R][hpLrQ0zET + 1] = '1';
                        }
                        hpLrQ0zET = hpLrQ0zET + 1;
                    };
                }
                Bu4Sm3R++;
            };
        }
        {
            Bu4Sm3R = 1;
            while (Bu4Sm3R <= BVpmAno9) {
                {
                    hpLrQ0zET = 1;
                    while (hpLrQ0zET <= BVpmAno9) {
                        if (a[Bu4Sm3R][hpLrQ0zET] == '1')
                            a[Bu4Sm3R][hpLrQ0zET] = '@';
                        hpLrQ0zET++;
                    };
                }
                Bu4Sm3R++;
            };
        };
    }
    fn3ihukJTFZ = 0;
    {
        Bu4Sm3R = 1;
        while (Bu4Sm3R <= BVpmAno9) {
            {
                hpLrQ0zET = 1;
                while (hpLrQ0zET <= BVpmAno9) {
                    if (a[Bu4Sm3R][hpLrQ0zET] == '@')
                        fn3ihukJTFZ = fn3ihukJTFZ + 1;
                    hpLrQ0zET++;
                };
            }
            Bu4Sm3R++;
        };
    }
    cout << fn3ihukJTFZ;
    return 0;
}

