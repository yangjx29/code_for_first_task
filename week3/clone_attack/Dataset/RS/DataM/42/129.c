int main () {
    int ezfg4t [100010] = {0}, n, k, i, s, QcAEoVf9S2M = 0, j;
    cin >> n;
    {
        i = 148 - 147;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            cin >> ezfg4t[i];
            i = i + 1;
        };
    }
    cin >> k;
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
        i = 1;
        while (i <= n) {
            if (ezfg4t[i] == k) {
                for (j = i; j <= n; j = j + 1)
                    ezfg4t[j] = ezfg4t[j + 1];
                i = i - 1;
                QcAEoVf9S2M = QcAEoVf9S2M +1;
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < n - QcAEoVf9S2M) {
            cout << ezfg4t[i] << ' ';
            i = i + 1;
        };
    }
    cout << ezfg4t[i];
}

