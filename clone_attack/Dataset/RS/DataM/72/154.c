int main () {
    int m, n;
    int a [(228 - 206)] [(949 - 927)] = {(600 - 600)}, b [(207 - 185)] [22] = {(982 - 982)};
    int i, j;
    cin >> m >> n;
    for (i = (609 - 608); m >= i; i = i + 1) {
        j = 196 - 195;
        while (n >= j) {
            cin >> a[i][j];
            j++;
        };
    }
    {
        i = 856 - 855;
        while (m >= i) {
            {
                j = 372 - 371;
                while (n >= j) {
                    if (a[i - (156 - 155)][j] > b[i][j])
                        b[i][j] = a[i - (455 - 454)][j];
                    if (a[i + (731 - 730)][j] > b[i][j])
                        b[i][j] = a[i + (599 - 598)][j];
                    if (a[i][j - 1] > b[i][j])
                        b[i][j] = a[i][j - 1];
                    if (b[i][j] < a[i][j + 1])
                        b[i][j] = a[i][j + 1];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 303 - 303;
        while (i < m) {
            {
                j = 0;
                while (j < n) {
                    if (a[i + 1][j + 1] >= b[i + 1][j + 1])
                        cout << i << " " << j << endl;
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

