int main () {
    int n, m, s = (289 - 289);
    char a [n] [n];
    cin >> n;
    for (int i = 0;
    n > i; i++) {
        int j = 0;
        while (j < n) {
            cin >> a[i][j];
            if (!('@' != a[i][j]))
                s = s + (909 - 908);
            j = j + 1;
        };
    }
    cin >> m;
    for (int k = 2;
    m >= k; k = k + 1) {
        for (int i = 0;
        n > i; i++) {
            for (int j = 0;
            j < n; j = j + 1) {
                if (!('@' != a[i][j])) {
                    if ((0 < j) && (!('.' != a[i][j - 1])))
                        a[i][j - 1] = 1;
                    if ((n - 1 > j) && (!('.' != a[i][j + 1])))
                        a[i][j + 1] = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if ((i > 0) && (a[i - 1][j] == '.'))
                        a[i - 1][j] = 1;
                    if ((i < n - 1) && (a[i + 1][j] == '.'))
                        a[i + 1][j] = 1;
                };
            };
        }
        {
            int i = 0;
            while (i < n) {
                for (int j = 0;
                j < n; j = j + 1) {
                    if (a[i][j] == 1) {
                        a[i][j] = '@';
                        s = s + 1;
                    };
                }
                i++;
            };
        };
    }
    cout << s << endl;
    return 0;
}

