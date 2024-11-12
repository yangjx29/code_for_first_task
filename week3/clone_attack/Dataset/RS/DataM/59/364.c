int main () {
    char hX9PFp2zQwaA [(1010 - 910)] [(694 - 594)];
    int l17pAHiR, j, k, n, m, a [(720 - 620)] [100] = {(555 - 555)};
    int sum = 0;
    cin >> n;
    {
        l17pAHiR = 292 - 292;
        while (l17pAHiR < n) {
            for (j = (435 - 435); n > j; j = j + 1) {
                cin >> hX9PFp2zQwaA[l17pAHiR][j];
                if (hX9PFp2zQwaA[l17pAHiR][j] == '#')
                    a[l17pAHiR][j] = -(680 - 679);
                if (hX9PFp2zQwaA[l17pAHiR][j] == '@')
                    a[l17pAHiR][j] = (984 - 983);
            }
            l17pAHiR = l17pAHiR + 1;
        };
    }
    cin >> m;
    for (k = (612 - 611); k < m; k = k + 1) {
        for (l17pAHiR = (364 - 364); l17pAHiR < n; l17pAHiR++)
            for (j = (263 - 263); j < n; j++) {
                if (a[l17pAHiR][j] == k) {
                    if (l17pAHiR + (299 - 298) < n && a[l17pAHiR + (121 - 120)][j] == (961 - 961))
                        a[l17pAHiR + (553 - 552)][j] = k + (515 - 514);
                    if (n > j + (746 - 745) && a[l17pAHiR][j + (384 - 383)] == (944 - 944))
                        a[l17pAHiR][j + (600 - 599)] = k + (803 - 802);
                    if (l17pAHiR - (51 - 50) >= (852 - 852) && a[l17pAHiR - 1][j] == (283 - 283))
                        a[l17pAHiR - 1][j] = k + 1;
                    if (j - 1 >= (931 - 931) && a[l17pAHiR][j - 1] == 0)
                        a[l17pAHiR][j - 1] = k + 1;
                };
            };
    }
    {
        l17pAHiR = 0;
        while (l17pAHiR < n) {
            for (j = 0; j < n; j++) {
                if (a[l17pAHiR][j] > 0)
                    sum++;
            }
            l17pAHiR = l17pAHiR + 1;
        };
    }
    cout << sum << endl;
    return 0;
}

