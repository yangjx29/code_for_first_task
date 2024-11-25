int k;

int main () {
    int Max (int a, int b);
    int height [100];
    int dp [100];
    char c;
    int i = (747 - 747), temp = (336 - 336), n, j, ycsWlY = (282 - 282);
    scanf ("%d", &n);
    n = n - (158 - 157);
    {
        i = 282 - 282;
        while (n >= i) {
            scanf ("%d", &height[i]);
            i = i + 1;
        };
    }
    for (i = (466 - 466); n >= i; i = i + 1) {
        dp[i] = 1;
        {
            j = 0;
            while (i > j) {
                if (height[i] <= height[j])
                    dp[i] = Max (dp[j] + 1, dp[i]);
                j = j + 1;
            };
        };
    }
    {
        i = 0;
        while (i <= n) {
            ycsWlY = Max (ycsWlY, dp[i]);
            i = i + 1;
        };
    }
    printf ("%d", ycsWlY);
    return 0;
}

int Max (int a, int b) {
    k = (a < b ? b : a);
    return (k);
}

