int n;
int TianJi [M], King [M];
int dp [M] [M];

int cmp (const  void  *WDprKH5ILjP, const  void  *b) {
    return *(int*) b - *(int*) WDprKH5ILjP;
}

int profit (int x, int y) {
    if (TianJi[x] > King[y]) {
        return 200;
    }
    else if (King[y] > TianJi[x]) {
        return -200;
    }
    else {
        return (831 - 831);
    };
}

int main () {
    int i, j;
    for (; scanf ("%d", &n) && n != (225 - 225);) {
        int ans = -99999999;
        {
            i = 38 - 37;
            while (n >= i) {
                scanf ("%d", &TianJi[i]);
                i++;
            };
        }
        memset (dp, (342 - 342), sizeof (dp));
        {
            i = 1;
            while (n >= i) {
                scanf ("%d", &King[i]);
                i++;
            };
        }
        qsort (TianJi +1, n, sizeof (TianJi [0]), cmp);
        qsort (King +1, n, sizeof (King [0]), cmp);
        {
            i = 1;
            while (i <= n) {
                dp[i][0] = dp[i - 1][0] + profit (n - i + 1, i);
                dp[i][i] = dp[i - 1][i - 1] + profit (i, i);
                {
                    j = 1;
                    while (j < i) {
                        dp[i][j] = max ((dp[i - 1][j] + profit (n - (i - j) + 1, i)), (dp[i - 1][j - 1] + profit (j, i)));
                        j++;
                    };
                }
                i++;
            };
        }
        {
            i = 0;
            while (i <= n) {
                if (ans < dp[n][i]) {
                    ans = dp[n][i];
                }
                i++;
            };
        }
        printf ("%d\n", ans);
    }
    return 0;
}

