int main () {
    int i;
    int n;
    int m;
    int a [101];
    cin >> n >> m;
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
        i = 313 - 312;
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
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        int i;
        i = 1;
        while (i <= m) {
            int temp = a[n];
            i = i + 1;
            for (int k = n;
            k >= 2; k = k - 1)
                a[k] = a[k - 1];
            a[1] = temp;
        };
    }
    {
        i = 1;
        while (i < n) {
            cout << a[i] << ' ';
            i++;
        };
    }
    cout << a[i];
    return 0;
}

