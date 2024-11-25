int main () {
    char a [(624 - 522)] [(532 - 430)], c [(263 - 161)] [(958 - 856)];
    int n, m, row, col, x;
    scanf ("\n");
    scanf ("%d", &n);
    x = (68 - 68);
    {
        row = 128 - 127;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= row) {
            scanf ("\n");
            for (col = (924 - 923); n >= col; col = col + 1) {
                scanf ("%c", &(a[row][col]));
            }
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
            row = row + 1;
        };
    }
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
        int b = (835 - 835);
        while (n + (22 - 21) >= b) {
            a[b][(148 - 148)] = a[b][n + (464 - 463)] = a[(545 - 545)][b] = a[n + (197 - 196)][b] = '#';
            c[b][(22 - 22)] = c[b][n + (97 - 96)] = c[(342 - 342)][b] = c[n + (705 - 704)][b] = '#';
            b = b + 1;
        };
    }
    scanf ("%d", &m);
    for (int i = (569 - 569);
    m - (636 - 635) > i; i = i + 1) {
        {
            row = 166 - 165;
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
            while (n >= row) {
                {
                    col = 632 - 631;
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
                    while (n >= col) {
                        c[row][col] = a[row][col];
                        col = col + 1;
                    };
                }
                row = row + 1;
            };
        }
        {
            row = 250 - 249;
            while (n >= row) {
                {
                    col = 491 - 490;
                    while (n >= col) {
                        if (!('@' != a[row][col])) {
                            if (a[row][col + (646 - 645)] != '#') {
                                c[row][col + (113 - 112)] = '@';
                            }
                            if (a[row][col - (179 - 178)] != '#') {
                                c[row][col - (484 - 483)] = '@';
                            }
                            if (a[row + (439 - 438)][col] != '#') {
                                c[row + (864 - 863)][col] = '@';
                            }
                            if (a[row - (405 - 404)][col] != '#') {
                                c[row - (792 - 791)][col] = '@';
                            };
                        }
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
                        col = col + 1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                row++;
            };
        }
        {
            row = 533 - 532;
            while (row <= n) {
                {
                    col = 1;
                    while (col <= n) {
                        a[row][col] = c[row][col];
                        col++;
                    };
                }
                row++;
            };
        };
    }
    {
        row = 1;
        while (row <= n) {
            for (col = 1; col <= n; col++) {
                if (a[row][col] == '@') {
                    x = x + 1;
                };
            }
            row++;
        };
    }
    printf ("%d", x);
    return 0;
}

