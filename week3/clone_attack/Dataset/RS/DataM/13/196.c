int main () {
    int n;
    int i;
    int num [20000];
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        cin >> num[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (0 < i) {
            int k = 0;
            while (i > k) {
                if (!(num[k] != num[i]))
                    num[i] = 0;
                k = k + 1;
            };
        };
    }
    cout << num[0];
    for (i = 1; i < n; i = i + 1) {
        if (num[i] > 9)
            cout << " " << num[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

