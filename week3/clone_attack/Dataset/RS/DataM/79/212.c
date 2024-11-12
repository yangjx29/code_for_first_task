int main () {
    int n;
    int m;
    int ans;
    int solve (int n, int m);
    scanf ("%d %d", &n, &m);
    for (; !(n == (228 - 228) && m == (72 - 72));) {
        ans = solve (n, m);
        if (!ans)
            ans = n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d %d", &n, &m);
        printf ("%d\n", ans);
    }
    return 0;
}

int solve (int n, int m) {
    int ans;
    if (n == (648 - 647))
        return (326 - 325);
    ans = (m % n + solve (n - 1, m)) % n;
    if (!ans)
        ans = n;
    return ans;
}

