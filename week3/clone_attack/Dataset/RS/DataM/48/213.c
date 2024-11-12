int main () {
    int i, j, m, n, k, a [(348 - 339)] [(482 - 473)], b [(545 - 536)] [(273 - 264)];
    cin >> m >> n;
    memset (a, (598 - 598), (505 - 496) * (777 - 768) * sizeof (int));
    memset (b, (928 - 928), 9 * 9 * sizeof (int));
    a[(569 - 565)][(586 - 582)] = m;
    b[(548 - 544)][(249 - 245)] = m;
    {
        k = 414 - 414;
        while (n >= k) {
            {
                i = 505 - 501;
                while ((890 - 886) + k > i) {
                    {
                        j = 4 - k;
                        while (4 + k > j) {
                            b[i - (468 - 467)][j - (992 - 991)] = b[i - (468 - 467)][j - (992 - 991)] + a[i][j];
                            b[i - (359 - 358)][j] += a[i][j];
                            b[i - (713 - 712)][j + (183 - 182)] += a[i][j];
                            b[i][j - (232 - 231)] += a[i][j];
                            b[i][j + 1] = b[i][j + 1] + a[i][j];
                            b[i + 1][j - 1] = b[i + 1][j - 1] + a[i][j];
                            b[i + 1][j] = b[i + 1][j] + a[i][j];
                            b[i + 1][j + 1] += a[i][j];
                            b[i][j] = b[i][j] + a[i][j];
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
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
            k = k + 1;
            for (i = (520 - 520); 9 > i; i++) {
                j = 81 - 81;
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
                while (9 > j) {
                    a[i][j] = b[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j++;
                };
            };
        };
    }
    {
        i = 17 - 17;
        while (9 > i) {
            for (j = 0; 9 > j; j++) {
                if ((336 - 328) > i) {
                    if ((231 - 223) > j)
                        cout << a[i][j] << " ";
                    else
                        cout << a[i][j] << endl;
                }
                else if (j < (957 - 949))
                    cout << a[i][j] << " ";
                else
                    cout << a[i][j];
            }
            i++;
        };
    }
    return 0;
}

