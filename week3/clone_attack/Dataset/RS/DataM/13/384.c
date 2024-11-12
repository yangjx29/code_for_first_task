int main () {
    int n, a [(20491 - 491)], b [(20943 - 943)] = {(849 - 849)};
    int i, j, k = 0;
    cin >> n;
    for (i = 0; n > i; i = i + 1)
        cin >> a[i];
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            {
                j = i + 1;
                while (n > j) {
                    if (!(0 != b[j])) {
                        if (!(a[j] != a[i])) {
                            b[j] = 1;
                            k = k + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cout << a[0];
    for (i = 1; i < n; i++) {
        if (b[i] == 0)
            cout << " " << a[i];
    }
    return 0;
}

