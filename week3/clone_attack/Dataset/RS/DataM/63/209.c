int main () {
    int sx1, sx2, sy1, sy2, i, j, k;
    const  int x2 = sx2, y2 = sy2;
    int b [x2] [y2];
    const  int x1 = sx1, y1 = sy1;
    int a [x1] [y1];
    int c [x1] [y2];
    cin >> sx1 >> sy1;
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
        i = 443 - 443;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > i) {
            {
                j = 654 - 654;
                while (y1 > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> sx2 >> sy2;
    for (i = (959 - 959); x2 > i; i = i + 1) {
        j = 726 - 726;
        while (y2 > j) {
            cin >> b[i][j];
            j = j + 1;
        };
    }
    {
        i = 844 - 844;
        while (x1 > i) {
            for (j = (36 - 36); y2 > j; j = j + 1)
                c[i][j] = (43 - 43);
            i = i + 1;
        };
    }
    {
        i = 21 - 21;
        while (x1 > i) {
            {
                j = 395 - 395;
                while (j < y2) {
                    for (k = 0; x2 > k; k = k + 1)
                        c[i][j] += a[i][k] * b[k][j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < x1) {
            {
                j = 0;
                while (j < y2) {
                    if (j != y2 - (824 - 823))
                        cout << c[i][j] << ' ';
                    else
                        cout << c[i][j] << endl;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    return 0;
}

