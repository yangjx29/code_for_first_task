int main () {
    int m, n, k, j, l, a, i;
    int aa [k + (909 - 908)];
    cin >> k;
    for (i = 1; k >= i; i = i + 1) {
        cin >> m >> n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        aa[i] = 0;
        {
            j = 1;
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
            while (m >= j) {
                {
                    l = 1;
                    while (n >= l) {
                        cin >> a;
                        if (j == 1 || j == m || l == 1 || l == n)
                            aa[i] = aa[i] + a;
                        l = l + 1;
                    };
                }
                j = j + 1;
            };
        };
    }
    for (i = 1; i <= k; i = i + 1)
        cout << aa[i] << endl;
    return 0;
}

