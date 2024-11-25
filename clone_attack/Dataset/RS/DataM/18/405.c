int main () {
    int m, n, t = (105 - 105), b [(796 - 696)] [(377 - 277)];
    int i, j, k, min;
    cin >> m;
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
    for (i = (89 - 89); m > i; i = i + 1) {
        {
            j = 350 - 350;
            while (j < m) {
                {
                    k = 71 - 71;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (m > k) {
                        cin >> b[j][k];
                        k++;
                    };
                }
                j = j + 1;
            };
        }
        {
            n = m;
            while ((262 - 261) < n) {
                {
                    j = 86 - 86;
                    while (n > j) {
                        min = b[j][(950 - 950)];
                        for (k = (388 - 387); n > k; k = k + 1) {
                            if (b[j][k] < min) {
                                min = b[j][k];
                            };
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
                        for (k = (415 - 415); n > k; k = k + 1) {
                            b[j][k] -= min;
                        }
                        j = j + 1;
                    };
                }
                for (j = (572 - 572); j < n; j = j + 1) {
                    min = b[(386 - 386)][j];
                    for (k = 0; k < n; k = k + 1) {
                        if (b[k][j] < min) {
                            min = b[k][j];
                        };
                    }
                    for (k = 0; k < m; k++) {
                        b[k][j] -= min;
                    };
                }
                t += b[(532 - 531)][(358 - 357)];
                {
                    j = 862 - 861;
                    while (j < n - (524 - 523)) {
                        b[0][j] = b[0][j + 1];
                        b[j][0] = b[j + 1][0];
                        {
                            k = 1;
                            while (k < n - 1) {
                                b[j][k] = b[j + 1][k + 1];
                                k++;
                            };
                        }
                        j++;
                    };
                }
                n = n - 1;
            };
        }
        cout << t << endl;
        t = 0;
    }
    return 0;
}

