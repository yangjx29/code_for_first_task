int main () {
    int YbTsqF;
    char a [YbTsqF +2] [YbTsqF +2];
    int i;
    int dsfr3k;
    int m;
    int e7LpBAC;
    e7LpBAC = 0;
    cin >> YbTsqF;
    {
        i = 420 - 419;
        while (i <= YbTsqF) {
            {
                dsfr3k = 423 - 422;
                while (dsfr3k <= YbTsqF) {
                    cin >> a[i][dsfr3k];
                    dsfr3k = dsfr3k + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    while (m - (986 - 985)) {
        {
            i = 85 - 84;
            while (i <= YbTsqF) {
                {
                    dsfr3k = 1;
                    while (dsfr3k <= YbTsqF) {
                        if (a[i][dsfr3k] == '@') {
                            if (a[i][dsfr3k - 1] == '.')
                                a[i][dsfr3k - 1] = '^';
                            if (a[i][dsfr3k + 1] == '.')
                                a[i][dsfr3k + 1] = '^';
                            if (a[i - 1][dsfr3k] == '.')
                                a[i - 1][dsfr3k] = '^';
                            if (a[i + 1][dsfr3k] == '.')
                                a[i + 1][dsfr3k] = '^';
                        }
                        dsfr3k = dsfr3k + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i <= YbTsqF) {
                {
                    dsfr3k = 1;
                    while (dsfr3k <= YbTsqF) {
                        if (a[i][dsfr3k] == '^')
                            a[i][dsfr3k] = '@';
                        dsfr3k++;
                    };
                }
                i++;
            };
        }
        m = m - 1;
    }
    {
        i = 1;
        while (i <= YbTsqF) {
            {
                dsfr3k = 1;
                while (dsfr3k <= YbTsqF) {
                    if (a[i][dsfr3k] == '@')
                        e7LpBAC++;
                    dsfr3k++;
                };
            }
            i++;
        };
    }
    cout << e7LpBAC;
    return 0;
}

