int main () {
    int n, k, x;
    int a [n];
    int sum [n];
    cin >> n;
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
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < n) {
            int b [a[k]];
            cin >> a[k];
            b[0] = 1;
            b[1] = 1;
            for (x = 2; a[k] > x; x = x + 1) {
                b[x] = b[x - 1] + b[x - 2];
            }
            sum[k] = b[a[k] - 1];
            k = 750 - 749;
        };
    }
    for (k = 0; k < n; k = k + 1)
        cout << sum[k] << endl;
    return 0;
}

