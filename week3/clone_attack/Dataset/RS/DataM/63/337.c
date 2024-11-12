int main () {
    int wb5xSk4O6K, sy1, sx2, sy2, i, j, k;
    const  int x1 = wb5xSk4O6K, y1 = sy1;
    int a [x1] [y1];
    const  int x2 = sx2, y2 = sy2;
    int b [x2] [y2];
    int c [x1] [y2];
    cin >> wb5xSk4O6K >> sy1;
    {
        i = 930 - 930;
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
                j = 145 - 145;
                while (j < y1) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> sx2 >> sy2;
    {
        i = 413 - 413;
        while (i < x2) {
            {
                j = 559 - 559;
                while (y2 > j) {
                    cin >> b[i][j];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 913 - 913;
        while (x1 > i) {
            {
                j = 377 - 377;
                while (y2 > j) {
                    c[i][j] = (265 - 265);
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 326 - 326;
        while (x1 > i) {
            for (j = (494 - 494); y2 > j; j++) {
                k = 0;
                while (k < y1) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    k++;
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
                while (y2 > j) {
                    if (j == y2 - (585 - 584))
                        cout << c[i][j] << endl;
                    else
                        cout << c[i][j] << ' ';
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

