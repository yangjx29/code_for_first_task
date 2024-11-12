int main () {
    int m;
    int n;
    int kaYCftnULXk;
    int a [m] [n];
    cin >> m >> n;
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
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            {
                int j = 0;
                while (j < n) {
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
    if (m <= n)
        kaYCftnULXk = m;
    else
        kaYCftnULXk = n;
    for (int i = 0;
    i < kaYCftnULXk / 2; i++) {
        for (int j = i;
        n - i > j; j = j + 1) {
            cout << a[i][j] << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        for (int j = i + (702 - 701);
        j < m - i; j = j + 1) {
            cout << a[j][n - i - (962 - 961)] << endl;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        {
            int j = i + (295 - 294);
            while (j < n - i) {
                cout << a[m - 1 - i][n - 1 - j] << endl;
                j = j + 1;
            };
        }
        {
            int j = i + 1;
            while (j < m - i - 1) {
                cout << a[m - 1 - j][i] << endl;
                j = j + 1;
            };
        };
    }
    if (m <= n && m % 2 == 1) {
        int j = (m - 1) / 2;
        while (j < n - (m - 1) / 2) {
            cout << a[(m - 1) / 2][j] << endl;
            j = j + 1;
        };
    }
    if (m > n && n % 2 == 1) {
        int j = (n - 1) / 2;
        while (j < m - (n - 1) / 2) {
            cout << a[j][(n - 1) / 2] << endl;
            j++;
        };
    }
    return 0;
}

