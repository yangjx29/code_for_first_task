int fun (int m, int n, int j) {
    int i, s = 0;
    if (n == 1)
        return m >= j;
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
        i = j;
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
            s = s + fun (m - i, n - 1, i);
            i = i + 1;
        };
    }
    return s;
}

int main () {
    int n, m, s;
    int t;
    cin >> t;
    while (t = t - 1) {
        cin >> m >> n;
        if (n > m)
            n = m;
        s = fun (m, n, 0);
        cout << s << endl;
    }
    return 0;
}

