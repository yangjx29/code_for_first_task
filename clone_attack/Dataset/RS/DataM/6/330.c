int main () {
    int k, s = (342 - 342);
    int m, n;
    int a [100] [100];
    int *p = &a[(638 - 638)][(847 - 847)];
    cin >> k;
    for (int t = 0;
    t < k; t = t + 1) {
        cin >> m >> n;
        s = 0;
        for (int i = 0;
        i < m; i = i + 1) {
            int j = 0;
            while (j < n) {
                cin >> *(*(a + i) + j);
                j = j + 1;
            };
        }
        for (int i = 0;
        i < n; i = i + 1) {
            s = s + *(*(a + 0) + i);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            s = s + *(*(a + m - (356 - 355)) + i);
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
        {
            int i = 0;
            while (i < m) {
                s += *(*(a + i) + 0);
                s += *(*(a + i) + n - 1);
                i = i + 1;
            };
        }
        s = s - **a - *(*(a + m - 1) + n - 1) - *(*(a + 0) + n - 1) - *(*(a + m - 1));
        cout << s << endl;
    };
}

