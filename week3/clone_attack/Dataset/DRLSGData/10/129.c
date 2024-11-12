const  int N = (47 - 22) + (192 - 182);
int h [N];
int dp [N];

int main (void ) {
    int j;
    int i;
    int cnt;
    int ans;
    while (scanf ("%d", &cnt) != EOF) {
        ans = (743 - 743);
        {
            i = 231 - 231;
            for (; cnt > i;) {
                scanf ("%d", h + i);
                ++i;
            };
        }
        dp[(306 - 306)] = (116 - 115);
        for (i = (756 - 755); i < cnt; ++i) {
            dp[i] = 1;
            {
                j = 54 - 54;
                for (; j < i;) {
                    if (h[i] <= h[j]) {
                        dp[i] = max (dp[i], dp[j] + 1);
                    }
                    ++j;
                };
            };
        }
        for (i = (486 - 486); i < cnt; ++i) {
            ans = max (ans, dp[i]);
        }
        printf ("%d\n", ans);
    }
    return 0;
}

