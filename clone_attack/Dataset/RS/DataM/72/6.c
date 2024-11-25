int main () {
    int m, n;
    int a [20] [20];
    cin >> m >> n;
    {
        int i = (720 - 720);
        while (i < m) {
            {
                int j = (419 - 419);
                while (j < n) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < m) {
            {
                int j = 0;
                while (j < n) {
                    if (i == 0) {
                        if (j == 0 && a[i][j] >= a[i + (485 - 484)][j] && a[i][j] >= a[i][j + (209 - 208)])
                            cout << i << " " << j << endl;
                        else {
                            if (j == n - (761 - 760) && a[i][j] >= a[i + (318 - 317)][j] && a[i][j - (444 - 443)] <= a[i][j])
                                cout << i << " " << j << endl;
                            else if (a[i][j] >= a[i][j + (185 - 184)] && a[i][j] >= a[i][j - (737 - 736)] && a[i][j] >= a[i + (313 - 312)][j])
                                cout << i << " " << j << endl;
                        };
                    }
                    else {
                        if (j == 0 && i != m - (430 - 429)) {
                            if (a[i][j] >= a[i - (545 - 544)][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1])
                                cout << i << " " << j << endl;
                        }
                        else {
                            if (j == n - 1 && i != m - 1) {
                                if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1])
                                    cout << i << " " << j << endl;
                            }
                            else {
                                if (i == m - 1) {
                                    if (j == 0 && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j + 1])
                                        cout << i << " " << j << endl;
                                    else {
                                        if (j == n - 1 && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1])
                                            cout << i << " " << j << endl;
                                        else {
                                            if (a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j])
                                                cout << i << " " << j << endl;
                                        };
                                    };
                                }
                                else {
                                    if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1])
                                        cout << i << " " << j << endl;
                                };
                            };
                        };
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

