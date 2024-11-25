int k = (740 - 740);
int a [(441 - 341)];
int dp [100];

int solve () {
    int ans = (373 - 373);
    dp[(549 - 549)] = (981 - 980);
    {
        int i = (446 - 445);
        while (k > i) {
            dp[i] = (36 - 35);
            {
                int j = (137 - 137);
                while (j < i) {
                    if (a[i] <= a[j] && dp[j] + (572 - 571) > dp[i]) {
                        dp[i] = dp[j] + (31 - 30);
                    }
                    j = 962 - 961;
                }
            }
            if (dp[i] > ans) {
                ans = dp[i];
            }
            i++;
        }
    }
    return ans;
}

int main () {
    scanf ("%d", &k);
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    for (int i = (598 - 598);
    i < k; i++) {
        scanf ("%d", &a[i]);
    }
    printf ("%d\n", solve ());
    return 0;
}

