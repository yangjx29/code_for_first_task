int main () {
    int countt = 0;
    int sum = 1;
    int i;
    int j;
    int BK4ApD;
    int t;
    int XcmUDFS3xv;
    int j1;
    char a [(889 - 787)] [102] = {' '}, x, b [102] [102];
    cin >> BK4ApD;
    {
        i = 660 - 659;
        while (i <= BK4ApD) {
            cin.get (x);
            {
                j = 210 - 209;
                while (j <= BK4ApD) {
                    cin.get (a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> t;
    while (sum < t) {
        {
            i = 1;
            while (i <= BK4ApD) {
                {
                    j = 1;
                    while (j <= BK4ApD) {
                        if (a[i][j] == '#')
                            b[i][j] = '#';
                        if (a[i][j] == '@') {
                            b[i][j] = '@';
                            if (a[i - 1][j] != '#') {
                                b[i - 1][j] = '@';
                            }
                            else {
                                b[i - 1][j] = '#';
                            }
                            if (a[i + 1][j] != '#') {
                                b[i + 1][j] = '@';
                            }
                            else {
                                b[i + 1][j] = '#';
                            }
                            if (a[i][j - 1] != '#') {
                                b[i][j - 1] = '@';
                            }
                            else {
                                b[i][j - 1] = '#';
                            }
                            if (a[i][j + 1] != '#') {
                                b[i][j + 1] = '@';
                            }
                            else {
                                b[i][j + 1] = '#';
                            };
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        {
            i = 1;
            while (i <= BK4ApD) {
                {
                    j = 1;
                    while (j <= BK4ApD) {
                        a[i][j] = b[i][j];
                        j++;
                    };
                }
                i++;
            };
        }
        sum = sum + 1;
    }
    {
        i = 1;
        while (i <= BK4ApD) {
            {
                j = 1;
                while (j <= BK4ApD) {
                    if (a[i][j] == '@')
                        countt = countt + 1;
                    j++;
                };
            }
            i++;
        };
    }
    cout << countt;
    return 0;
}

