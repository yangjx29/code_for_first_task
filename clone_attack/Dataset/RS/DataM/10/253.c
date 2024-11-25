int d [(904 - 804)], a [100];
int i, j, k, n, ans;

int main () {
    ans = 0;
    d[(811 - 811)] = 0;
    a[(941 - 941)] = 1000000000;
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
        i = 710 - 709;
        while (n >= i) {
            cin >> a[i];
            ++i;
        };
    }
    {
        i = 1;
        while (i <= n) {
            d[i] = 1;
            {
                j = 0;
                while (i > j) {
                    if (a[i] <= a[j] && d[j] + 1 > d[i])
                        d[i] = d[j] + 1;
                    j = j + 1;
                };
            }
            if (d[i] > ans)
                ans = d[i];
            ++i;
        };
    }
    printf ("%d\n", ans);
    return 0;
}

