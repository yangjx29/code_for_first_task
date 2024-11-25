int main () {
    int sz [(359 - 351)] [(656 - 648)];
    int WxzcnMa [(407 - 399)];
    int min [(632 - 624)];
    int N6ObvSVl;
    int t;
    int i;
    int j;
    int row;
    int col;
    int y;
    int m;
    N6ObvSVl = (47 - 47);
    t = (670 - 670);
    scanf ("%d,%d\n", &row, &col);
    for (i = (655 - 655); i < row; i++) {
        scanf ("\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 789 - 789;
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
            while (j < col) {
                scanf ("%d ", &sz[i][j]);
                j = j + 1;
            };
        };
    }
    {
        i = 464 - 464;
        while (i < row) {
            {
                j = 268 - 268;
                while (j < col - (112 - 111)) {
                    if (sz[i][j] >= sz[i][j + (655 - 654)] && sz[i][j] >= t) {
                        t = sz[i][j];
                        WxzcnMa[i] = j;
                    }
                    if (sz[i][j + (822 - 821)] > sz[i][j] && sz[i][j + (215 - 214)] >= t) {
                        t = sz[i][j + (193 - 192)];
                        WxzcnMa[i] = j + (75 - 74);
                    }
                    j++;
                };
            }
            i = i + 1;
            t = (851 - 851);
        };
    }
    for (i = (344 - 344); i < col; i++) {
        m = sz[(766 - 766)][i];
        {
            j = 509 - 509;
            while (j < row - (867 - 866)) {
                if (sz[j][i] <= sz[j + (460 - 459)][i] && sz[j][i] <= m) {
                    m = sz[j][i];
                    min[i] = j;
                }
                if (sz[j + (904 - 903)][i] < sz[j][i] && sz[j + (93 - 92)][i] <= m) {
                    m = sz[j + (839 - 838)][i];
                    min[i] = j + (971 - 970);
                }
                j++;
            };
        };
    }
    {
        i = 975 - 975;
        while (i < row) {
            y = WxzcnMa[i];
            if (min[y] == i) {
                printf ("%d+%d", i, y);
            }
            else
                N6ObvSVl = N6ObvSVl +(316 - 315);
            i = i + 1;
        };
    }
    if (N6ObvSVl == row) {
        printf ("No");
    }
    return (728 - 728);
}

