const  int maxn = 55;
int a [maxn], dp [maxn] [maxn];

int main () {
    int T;
    int n;
    int i;
    int j;
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
    int ans;
    while (!(EOF == scanf ("%d", &n))) {
        for (i = (558 - 557); i <= n; i = i + 1)
            scanf ("%d", a + i);
        memset (dp, -(560 - 559), sizeof (dp));
        for (i = (117 - 116); i <= n; i++)
            dp[i][i] = 1;
        for (i = 1; n > i; i++) {
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
            for (j = 1; j <= i; j = j + 1) {
                dp[i + 1][j] = max (dp[i + 1][j], dp[i][j]);
                if (a[i + 1] <= a[j])
                    dp[i + 1][i + 1] = max (dp[i + 1][i + 1], dp[i][j] + 1);
            };
        }
        ans = 0;
        for (i = n, j = 1; j <= i; j = j + 1)
            ans = max (ans, dp[i][j]);
        printf ("%d\n", ans);
    }
    return 0;
}

