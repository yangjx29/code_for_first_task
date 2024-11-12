int main () {
    int i, j;
    int mount [(272 - 250)] [22];
    int m, n;
    cin >> m >> n;
    {
        i = 564 - 564;
        while (m + (583 - 582) >= i) {
            {
                j = 856 - 856;
                while (n + (431 - 430) >= j) {
                    if (!((185 - 185) != i) || !(m + (672 - 671) != i) || !(0 != j) || !(n + 1 != j))
                        mount[i][j] = 0;
                    else
                        cin >> mount[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            for (j = 1; j <= n; j = j + 1) {
                if (mount[i][j] >= mount[i - 1][j] && mount[i][j] >= mount[i + 1][j] && mount[i][j] >= mount[i][j + 1] && mount[i][j] >= mount[i][j - 1])
                    cout << i - 1 << " " << j - 1 << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}

