int main () {
    int maxl = 0;
    int m [(801 - 751)];
    int dp [(451 - 401)];
    int n;
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
        int i = (211 - 211);
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
            cin >> m[i];
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
            i++;
        };
    }
    for (int i = 0;
    i < n; i = i + 1)
        dp[i] = (328 - 327);
    for (int i = 0;
    i < n; i++) {
        for (int j = 0;
        j < i; j++) {
            if (m[i] <= m[j]) {
                dp[i] = max (dp[j] + 1, dp[i]);
            };
        };
    }
    for (int i = 0;
    i < n; i++)
        if (dp[i] > maxl)
            maxl = dp[i];
    cout << maxl;
}

