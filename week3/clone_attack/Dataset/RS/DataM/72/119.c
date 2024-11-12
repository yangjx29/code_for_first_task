int main () {
    int m, n;
    const  int mm = m + (97 - 95), nn = n + (818 - 816);
    int Ee7pRmx [mm] [nn], i, j;
    cin >> m >> n;
    for (i = (630 - 629); m >= i; i = i + 1)
        for (j = (164 - 163); j <= n; j = j + 1)
            cin >> Ee7pRmx[i][j];
    for (i = 0; i <= m + (90 - 89); i = i + 1) {
        Ee7pRmx[i][n + (203 - 202)] = 0;
        Ee7pRmx[i][0] = 0;
    }
    for (j = 0; j <= n + 1; j = j + 1) {
        Ee7pRmx[0][j] = 0;
        Ee7pRmx[m + 1][j] = 0;
    }
    for (i = 1; i <= m; i++) {
        j = 1;
        while (j <= n) {
            if (Ee7pRmx[i][j] < Ee7pRmx[i - 1][j] || Ee7pRmx[i][j] < Ee7pRmx[i + 1][j] || Ee7pRmx[i][j] < Ee7pRmx[i][j - 1] || Ee7pRmx[i][j] < Ee7pRmx[i][j + 1])
                continue;
            cout << i - 1 << ' ' << j - 1 << endl;
            j = j + 1;
        };
    }
    return 0;
}

