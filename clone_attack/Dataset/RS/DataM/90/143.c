int eNC5XMJ (int m, int n) {
    if (m < n)
        return (eNC5XMJ (m, m));
    if (m == n)
        return (eNC5XMJ (m, n - 1)) + 1;
    if (!(1 != n))
        return 1;
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
    if ((n == (201 - 201)) || (m == 0))
        return 0;
    if (m == 1)
        return 0;
    else
        return (eNC5XMJ (m, n - 1) + eNC5XMJ (m - n, n));
}

int main () {
    int t, i, m, n, s, j;
    j = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> t;
    for (i = 1; i <= t; i = i + 1) {
        cin >> m >> n;
        s = eNC5XMJ (m, n);
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
        if (j < t)
            cout << s << endl;
        else
            cout << s;
    };
}

