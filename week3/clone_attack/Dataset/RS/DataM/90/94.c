int main () {
    int m;
    int n;
    int t;
    int opt [(685 - 584)] [101];
    cin >> t;
    memset (opt, (322 - 322), sizeof (opt));
    {
        int i = (388 - 388);
        while (101 > i) {
            opt[(600 - 600)][i] = (252 - 251);
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (101 > i) {
            opt[i][(800 - 799)] = 1;
            i = i + 1;
        };
    }
    {
        int j = 1;
        while (101 > j) {
            opt[1][j] = 1;
            j = j + 1;
        };
    }
    {
        int j = 2;
        while (101 > j) {
            {
                int i = 2;
                while (i < 101) {
                    if (i >= j)
                        opt[i][j] += opt[i - j][j];
                    opt[i][j] = opt[i][j] + opt[i][j - 1];
                    ++i;
                };
            }
            j = j + 1;
        };
    }
    while (t = t - 1) {
        cin >> m >> n;
        cout << opt[m][n] << endl;
    }
    return 0;
}

