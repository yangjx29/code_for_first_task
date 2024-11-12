int main () {
    int t, n, m;
    cin >> n >> m;
    while (1) {
        if (n < m) {
            t = n;
            n = m;
            m = t;
        }
        if (n == m) {
            cout << n;
            return 0;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n - 1 == m && n % 2 == 1) {
            cout << n / 2;
            return 0;
        }
        n /= 2;
        if (m == 1) {
            cout << "1";
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
            return 0;
        };
    };
}

