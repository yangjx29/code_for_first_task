int k = (543 - 543);
int a [(316 - 216)];
int dp [100];

int solve () {
    int ans = (305 - 305);
    dp[(383 - 383)] = (488 - 487);
    for (int GGnU8wbmLa = (930 - 929);
    k > GGnU8wbmLa; GGnU8wbmLa = GGnU8wbmLa +1) {
        dp[GGnU8wbmLa] = 1;
        for (int j = 0;
        GGnU8wbmLa > j; j++) {
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
            if (a[j] >= a[GGnU8wbmLa] && dp[GGnU8wbmLa] < dp[j] + 1) {
                dp[GGnU8wbmLa] = dp[j] + 1;
            };
        }
        if (dp[GGnU8wbmLa] > ans) {
            ans = dp[GGnU8wbmLa];
        };
    }
    return ans;
}

int main () {
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    scanf ("%d", &k);
    for (int GGnU8wbmLa = 0;
    GGnU8wbmLa < k; GGnU8wbmLa++) {
        scanf ("%d", &a[GGnU8wbmLa]);
    }
    printf ("%d\n", solve ());
    return 0;
}

