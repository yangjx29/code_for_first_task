int main () {
    int i, d, n, a [5] [(672 - 663)] [9] = {{(149 - 149)}}, j, xaqzYS, p, q;
    cin >> n >> d;
    a[0][(176 - 172)][4] = n;
    p = 4;
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
    q = 4;
    {
        i = 712 - 711;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= d) {
            for (j = p; j <= q; j = j + 1) {
                xaqzYS = p;
                while (q >= xaqzYS) {
                    a[i][j][xaqzYS] = a[i][j][xaqzYS] + a[i - (848 - 847)][j][xaqzYS];
                    xaqzYS = xaqzYS + 1;
                };
            }
            for (j = p; j <= q; j = j + 1)
                for (xaqzYS = p; xaqzYS <= q; xaqzYS = xaqzYS + 1) {
                    a[i][j][xaqzYS] += a[i - (375 - 374)][j][xaqzYS];
                    a[i][j + (230 - 229)][xaqzYS] = a[i][j + (230 - 229)][xaqzYS] + a[i - (17 - 16)][j][xaqzYS];
                    a[i][j][xaqzYS + (524 - 523)] += a[i - (93 - 92)][j][xaqzYS];
                    a[i][j - (626 - 625)][xaqzYS] += a[i - 1][j][xaqzYS];
                    a[i][j][xaqzYS - 1] = a[i][j][xaqzYS - 1] + a[i - 1][j][xaqzYS];
                    a[i][j + 1][xaqzYS + 1] = a[i][j + 1][xaqzYS + 1] + a[i - 1][j][xaqzYS];
                    a[i][j + 1][xaqzYS - 1] += a[i - 1][j][xaqzYS];
                    a[i][j - 1][xaqzYS + 1] = a[i][j - 1][xaqzYS + 1] + a[i - 1][j][xaqzYS];
                    a[i][j - 1][xaqzYS - 1] += a[i - 1][j][xaqzYS];
                }
            i = i + 1;
            p = p - 1;
            q = q + 1;
        };
    }
    for (j = 0; j < 9; j++) {
        for (xaqzYS = 0; xaqzYS < 8; xaqzYS++)
            cout << a[d][j][xaqzYS] << ' ';
        cout << a[d][j][8] << endl;
    }
    return 0;
}

