int main () {
    int k, m, n, a [100] [100], i, j, s, t, p, ju8HjyKLWGg;
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
        t = 1;
        while (k >= t) {
            t = t + 1;
            cin >> m >> n;
            {
                i = 0;
                while (m > i) {
                    for (j = 0; j < n; j++)
                        cin >> a[i][j];
                    i++;
                };
            }
            s = 0;
            for (p = 0; m > p; p++) {
                ju8HjyKLWGg = 0;
                while (n > ju8HjyKLWGg) {
                    if (!(0 != p) || ju8HjyKLWGg == 0 || p == m - 1 || ju8HjyKLWGg == n - 1)
                        s = s + a[p][ju8HjyKLWGg];
                    ju8HjyKLWGg++;
                };
            }
            cout << s << endl;
        };
    }
    return 0;
}

