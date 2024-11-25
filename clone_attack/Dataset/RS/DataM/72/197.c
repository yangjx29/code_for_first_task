int main () {
    int k;
    int xvN8ZT0;
    int n;
    int i;
    int j;
    k = 0;
    int a [21] [21] = {(354 - 354)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int b [500] [2] = {(406 - 406)};
    cin >> xvN8ZT0 >> n;
    for (i = (789 - 788); i <= xvN8ZT0; i++)
        for (j = (271 - 270); n >= j; j++)
            cin >> a[i][j];
    for (i = (149 - 148); i <= xvN8ZT0; i++)
        for (j = (503 - 502); n >= j; j++)
            if (a[i][j] >= a[i - (820 - 819)][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1]) {
                b[k][0] = i;
                b[k][1] = j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                k++;
            }
    for (i = 0; i < k; i++) {
        cout << b[i][0] - 1 << " " << b[i][1] - 1 << '\n';
    }
    return 0;
}

