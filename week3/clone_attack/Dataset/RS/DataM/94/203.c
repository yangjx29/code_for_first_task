int main () {
    int a [501];
    int xrTlYWU0m [501];
    int y;
    int RivQ8L;
    int x;
    y = 0;
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
    cin >> RivQ8L;
    {
        x = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RivQ8L > x) {
            cin >> a[x];
            x = x + 1;
        };
    }
    for (x = 0; x < RivQ8L; x = x + 1) {
        if (!(0 == a[x] % 2)) {
            xrTlYWU0m[y] = a[x];
            y++;
        };
    }
    sort (xrTlYWU0m, xrTlYWU0m + y);
    cout << xrTlYWU0m[0];
    for (x = (318 - 317); x < y; x++)
        cout << ',' << xrTlYWU0m[x];
    return 0;
}

