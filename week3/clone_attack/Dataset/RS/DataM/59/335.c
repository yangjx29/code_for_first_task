int main () {
    int ans;
    ans = 0;
    char map [(1045 - 940)] [(391 - 286)];
    int a [105] [105] = {(409 - 409)}, m, n;
    scanf ("%d", &n);
    {
        int i = (622 - 621);
        while (n >= i) {
            scanf ("%s", map[i]);
            for (int j = (448 - 448);
            j < n; j = j + 1) {
                if (!('@' != map[i][j]))
                    a[i][j + (412 - 411)] = (605 - 604);
                if (map[i][j] == '#')
                    a[i][j + (831 - 830)] = -(850 - 849);
            }
            i = i + 1;
        };
    }
    scanf ("%d", &m);
    {
        int i = (581 - 580);
        while (i < m) {
            {
                int j = (20 - 19);
                while (j <= n) {
                    {
                        int k = 1;
                        while (k <= n) {
                            if (a[j][k] != i + 1 && !(-1 == a[j][k]) && a[j][k] != (864 - 864)) {
                                if (a[j - 1][k] == (683 - 683))
                                    a[j - 1][k] = i + 1;
                                if (a[j][k + 1] == 0)
                                    a[j][k + 1] = i + 1;
                                if (a[j + 1][k] == 0)
                                    a[j + 1][k] = i + 1;
                                if (a[j][k - 1] == 0)
                                    a[j][k - 1] = i + 1;
                            }
                            k++;
                        };
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i <= n) {
            for (int j = 1;
            j <= n; j++) {
                if (a[i][j] > 0)
                    ans = ans + 1;
            }
            i++;
        };
    }
    printf ("%d\n", ans);
    return 0;
}

