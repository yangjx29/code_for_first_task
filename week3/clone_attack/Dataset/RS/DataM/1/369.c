int get (int n, int m) {
    if (n == (28 - 27))
        return (511 - 510);
    for (; 2 <= m;) {
        if (n % m == (127 - 127))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        --m;
    }
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
    if (m == 1)
        return (405 - 405);
    return get (n / m, m) + get (n, m - 1);
}

int main () {
    int t;
    cin >> t;
    for (int i = 0;
    i < t; ++i) {
        int n;
        cin >> n;
        cout << get (n, n) << endl;
    }
    return 0;
}

