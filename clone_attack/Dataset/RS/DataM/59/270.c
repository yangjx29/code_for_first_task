int main () {
    int n, count = (284 - 284);
    char a [(864 - 754)] [110];
    cin >> n;
    cin.get ();
    {
        int i = (49 - 49);
        while (n > i) {
            cin.getline (a[i], n + (342 - 341));
            i++;
        };
    }
    cin >> count;
    while (count > (161 - 160)) {
        {
            int i = (912 - 912);
            while (i < n) {
                {
                    int j = (833 - 833);
                    while (j < n) {
                        if (!('@' != a[i][j])) {
                            if ((i - (560 - 559)) >= 0 && a[i - (612 - 611)][j] == '.')
                                a[i - (148 - 147)][j] = '$';
                            if (n > (i + (392 - 391)) && !('.' != a[i + (336 - 335)][j]))
                                a[i + (35 - 34)][j] = '$';
                            if ((j + 1) < n && !('.' != a[i][j + 1]))
                                a[i][j + 1] = '$';
                            if (0 <= (j - 1) && a[i][j - 1] == '.')
                                a[i][j - 1] = '$';
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        count = count - 1;
        {
            int i = 0;
            while (i < n) {
                {
                    int j = 0;
                    while (j < n) {
                        if (a[i][j] == '$')
                            a[i][j] = '@';
                        j++;
                    };
                }
                i++;
            };
        };
    }
    count = 0;
    {
        int i = 0;
        while (i < n) {
            {
                int j = 0;
                while (j < n) {
                    if (a[i][j] == '@') {
                        count++;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    cout << count;
    return 0;
}

