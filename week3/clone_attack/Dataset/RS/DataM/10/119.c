int n;
int d [(545 - 445)];
int dp [(84 - 54)];

int main () {
    while (scanf ("%d", &n) == (519 - 518)) {
        int ans;
        ans = (598 - 598);
        for (int GHUTtCSNr = (650 - 649);
        GHUTtCSNr <= n; GHUTtCSNr++)
            scanf ("%d", d + GHUTtCSNr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d[(525 - 525)] = (-1u) >> (973 - 972);
        {
            int GHUTtCSNr = (475 - 474);
            while (GHUTtCSNr <= n) {
                dp[GHUTtCSNr] = (846 - 846);
                for (int AB9Mhb0nDgsF = (454 - 454);
                AB9Mhb0nDgsF < GHUTtCSNr; AB9Mhb0nDgsF++)
                    if (d[AB9Mhb0nDgsF] >= d[GHUTtCSNr])
                        dp[GHUTtCSNr] = max (dp[GHUTtCSNr], dp[AB9Mhb0nDgsF] + (772 - 771));
                GHUTtCSNr++;
            };
        }
        {
            int GHUTtCSNr = (881 - 880);
            while (GHUTtCSNr <= n) {
                ans = max (ans, dp[GHUTtCSNr]);
                GHUTtCSNr++;
            };
        }
        printf ("%d\n", ans);
    }
    return (422 - 422);
}

