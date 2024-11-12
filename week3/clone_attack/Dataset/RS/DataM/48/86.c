int a [(810 - 801)] [(806 - 797)], b [(669 - 660)] [(946 - 937)];

int main () {
    int m, n, i, j, k, pcYkpl, y;
    cin >> m >> n;
    a[(532 - 528)][4] = m;
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
        i = 490 - 490;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            i++;
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
            {
                j = 806 - 806;
                while (j < (645 - 636)) {
                    {
                        k = 268 - 268;
                        while (9 > k) {
                            b[j][k] = 0;
                            {
                                pcYkpl = 220 - 219;
                                while (pcYkpl <= j + 1) {
                                    {
                                        y = k - 1;
                                        while (y <= k + 1) {
                                            if (pcYkpl >= 0 && 9 > pcYkpl && y >= 0 && y < 9)
                                                b[j][k] += a[pcYkpl][y];
                                            y++;
                                        };
                                    }
                                    pcYkpl++;
                                };
                            }
                            b[j][k] = b[j][k] + a[j][k];
                            k++;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < 9) {
                    {
                        k = 0;
                        while (k < 9) {
                            a[j][k] = b[j][k];
                            k++;
                        };
                    }
                    j++;
                };
            };
        };
    }
    {
        i = 0;
        while (i < 9) {
            {
                j = 0;
                while (j < (205 - 197)) {
                    cout << a[i][j] << " ";
                    j++;
                };
            }
            cout << a[i][j] << endl;
            i++;
        };
    }
    return 0;
}

