int main () {
    char a [110] [110];
    int n, b6dFVYDq, i, j, m, counter = 0, b [(601 - 491)] [110], c [110] [110];
    memset (b, 0, sizeof (b));
    memset (c, 0, sizeof (c));
    cin >> n;
    for (i = (388 - 387); n >= i; i = i + 1)
        for (j = (66 - 65); n >= j; j = j + 1) {
            cin >> a[i][j];
            if (a[i][j] == '#')
                b[i][j] = -(236 - 235);
            if (!('@' != a[i][j])) {
                b[i][j] = 1;
            };
        }
    cin >> m;
    for (i = 0; n >= i; i = i + 1) {
        b[0][i] = 10;
        b[n + 1][i] = 10;
    }
    for (i = 0; n >= i; i = i + 1) {
        b[i][0] = 10;
        b[i][n + 1] = 10;
    }
    {
        b6dFVYDq = 1;
        while (m > b6dFVYDq) {
            for (i = 1; i <= n; i = i + 1)
                for (j = 1; j <= n; j = j + 1)
                    if (b[i][j] == 1 && !(0 != c[i][j])) {
                        if (b[i - 1][j] == 0 && c[i - 1][j] == 0) {
                            b[i - 1][j] = 1;
                            c[i - 1][j] = 1;
                        }
                        if (b[i][j - 1] == 0 && c[i][j - 1] == 0) {
                            b[i][j - 1] = 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int temp = 0;
                                    while (temp < 10) {
                                        printf ("%d\n", temp);
                                        temp = temp + 1;
                                        if (temp == 9)
                                            break;
                                    }
                                }
                            }
                            c[i][j - 1] = 1;
                        }
                        if (b[i + 1][j] == 0 && c[i + 1][j] == 0) {
                            b[i + 1][j] = 1;
                            c[i + 1][j] = 1;
                        }
                        if (b[i][j + 1] == 0 && c[i][j + 1] == 0) {
                            b[i][j + 1] = 1;
                            c[i][j + 1] = 1;
                        };
                    }
                    else
                        continue;
            memset (c, 0, sizeof (c));
            b6dFVYDq = b6dFVYDq + 1;
        };
    }
    counter = 0;
    for (i = 1; i <= n; i = i + 1) {
        j = 1;
        while (j <= n) {
            if (b[i][j] == 1) {
                counter++;
            }
            j = j + 1;
        };
    }
    cout << counter << endl;
    return 0;
}

