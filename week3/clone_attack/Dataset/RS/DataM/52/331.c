int main () {
    int n, m, num [110], i, *p = NULL;
    cin >> n >> m;
    {
        i = 910 - 910;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            cin >> num[i];
            i = i + 1;
        };
    }
    p = num;
    p = p + n + m - 1;
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
        i = 188 - 188;
        while (i < n) {
            i = i + 1;
            *(p = p - 1) = *(p - m);
        };
    }
    {
        i = 0;
        while (m > i) {
            i++;
            *(p = p - 1) = *(p + n);
        };
    }
    for (i = 0; i < n; i = i + 1) {
        cout << num[i];
        if (i != n - 1)
            cout << ' ';
    }
    return 0;
}

