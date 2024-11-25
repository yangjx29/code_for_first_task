int a [(222 - 212)] [10] [(708 - 703)];
int sP3jT8WQwF, wCfDwWn, j, l, n;

int main () {
    {
        wCfDwWn = 744 - 744;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wCfDwWn < (378 - 373)) {
            {
                j = 122 - 121;
                while (j < 10) {
                    {
                        sP3jT8WQwF = 421 - 420;
                        while (sP3jT8WQwF < 10) {
                            a[j][sP3jT8WQwF][wCfDwWn] = (361 - 361);
                            sP3jT8WQwF++;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            wCfDwWn++;
        };
    }
    scanf ("%d%d", &n, &sP3jT8WQwF);
    a[5][5][0] = n;
    scanf ("%d", &n);
    {
        l = 0;
        while (l < sP3jT8WQwF) {
            {
                wCfDwWn = 711 - 710;
                while (wCfDwWn < 10) {
                    {
                        j = 655 - 654;
                        while (j < 10) {
                            if (a[wCfDwWn][j][l] != 0) {
                                a[wCfDwWn][j][l + (586 - 585)] = a[wCfDwWn][j][l + (586 - 585)] + (835 - 833) * a[wCfDwWn][j][l];
                                a[wCfDwWn - (804 - 803)][j - (801 - 800)][l + (549 - 548)] += a[wCfDwWn][j][l];
                                a[wCfDwWn - 1][j][l + 1] += a[wCfDwWn][j][l];
                                a[wCfDwWn - 1][j + 1][l + 1] += a[wCfDwWn][j][l];
                                a[wCfDwWn][j - 1][l + 1] += a[wCfDwWn][j][l];
                                a[wCfDwWn][j + 1][l + 1] += a[wCfDwWn][j][l];
                                a[wCfDwWn + 1][j - 1][l + 1] += a[wCfDwWn][j][l];
                                a[wCfDwWn + 1][j][l + 1] += a[wCfDwWn][j][l];
                                a[wCfDwWn + 1][j + 1][l + 1] += a[wCfDwWn][j][l];
                            }
                            j++;
                        };
                    }
                    wCfDwWn++;
                };
            }
            l = l + 1;
        };
    }
    {
        wCfDwWn = 1;
        while (wCfDwWn <= (178 - 169)) {
            {
                j = 1;
                while (j < 9) {
                    printf ("%d ", a[wCfDwWn][j][sP3jT8WQwF]);
                    j++;
                };
            }
            printf ("%d\n", a[wCfDwWn][9][sP3jT8WQwF]);
            wCfDwWn++;
        };
    }
    return 0;
}

