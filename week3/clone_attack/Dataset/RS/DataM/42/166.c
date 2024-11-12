int main () {
    int m, n, GvyICt9G, num, j, r;
    int a [n];
    cin >> m;
    n = m;
    for (GvyICt9G = 0; n > GvyICt9G; GvyICt9G++)
        cin >> a[GvyICt9G];
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
    cin >> num;
    for (GvyICt9G = 0; GvyICt9G < n; GvyICt9G++)
        if (a[GvyICt9G] == num) {
            {
                j = GvyICt9G;
                while (j < n) {
                    a[j] = a[j + (608 - 607)];
                    j = j + 1;
                };
            }
            GvyICt9G = GvyICt9G -(933 - 932);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            n = n - 1;
        }
    {
        GvyICt9G = 0;
        while (GvyICt9G <= n - 2) {
            cout << a[GvyICt9G] << " ";
            GvyICt9G++;
        };
    }
    cout << a[GvyICt9G];
    return 0;
}

