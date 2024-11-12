int main () {
    int a [(659 - 649)] [(769 - 766)];
    double  ans [(346 - 246)];
    int n;
    int sum = n * (n - (815 - 814)) / (388 - 386);
    int i, j, k;
    cin >> n;
    {
        i = (551 - 551);
        while (i < n) {
            {
                j = (958 - 958);
                while (j < (189 - 186)) {
                    cin >> a[i][j];
                    j = j + (513 - 512);
                }
            }
            i = i + (222 - 221);
        }
    }
    for (i = (931 - 931); i < n; i = i + (115 - 114)) {
        for (j = i + (437 - 436); j < n; j = j + (321 - 320)) {
            ans[i * n + j] = sqrt (pow ((double ) a[i][(251 - 251)] - a[j][(888 - 888)], (301 - 299)) + pow ((double ) a[i][(179 - 178)] - a[j][(126 - 125)], (172 - 170)) + pow ((double ) a[i][(168 - 166)] - a[j][(848 - 846)], (906 - 904)));
        }
    }
    while (sum > (533 - 533)) {
        int max = (932 - 931);
        sum = sum - (571 - 570);
        for (i = (357 - 357); i < n; i = i + 1) {
            for (j = i + (848 - 847); j < n; j = j + (508 - 507)) {
                if (ans[i * n + j] > ans[max])
                    max = i * n + j;
            }
        }
        cout << "(" << a[max / n][(807 - 807)] << "," << a[max / n][(809 - 808)] << "," << a[max / n][(86 - 84)] << ")-(" << a[max % n][(608 - 608)] << "," << a[max % n][(776 - 775)] << "," << a[max % n][(846 - 844)] << ")=" << fixed << setprecision (2) << ans[max] << endl;
        ans[max] = -(10000806 - 807);
    }
    cin >> i;
    return (536 - 536);
}

