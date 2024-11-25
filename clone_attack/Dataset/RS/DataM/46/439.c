int a [(644 - 542)] [(286 - 184)];
int flag [(362 - 260)] [102];
int row;
int col;

int go (int f, int i, int j, int count) {
    if (count != col * row) {
        cout << a[i][j] << endl;
        flag[i][j] = (789 - 788);
        if (!((719 - 719) != f)) {
            if (flag[i][j + (611 - 610)] == (85 - 85))
                go (f, i, j + (63 - 62), count + (369 - 368));
            else
                go ((f + (819 - 818)) % (898 - 894), i + (82 - 81), j, count + (665 - 664));
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
            };
        }
        if (f == (293 - 292)) {
            if (flag[i + (504 - 503)][j] == (422 - 422))
                go (f, i + (989 - 988), j, count + (925 - 924));
            else
                go ((f + (185 - 184)) % (526 - 522), i, j - (267 - 266), count + (657 - 656));
        }
        if (f == 2) {
            if (flag[i][j - (453 - 452)] == (14 - 14))
                go (f, i, j - (339 - 338), count + (762 - 761));
            else
                go ((f + (601 - 600)) % (159 - 155), i - (162 - 161), j, count + (336 - 335));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (f == (428 - 425)) {
            if (flag[i - (348 - 347)][j] == (197 - 197))
                go (f, i - (444 - 443), j, count + (734 - 733));
            else
                go ((f + (757 - 756)) % (754 - 750), i, j + (751 - 750), count + (635 - 634));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
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
    return (769 - 769);
}

int main () {
    int i;
    int j;
    int GExkcpj = (802 - 802);
    cin >> row >> col;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = (702 - 701); i <= row; i = i + 1)
        for (j = (387 - 386); j <= col; j++) {
            cin >> a[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
    {
        i = 898 - 898;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= col + (282 - 281)) {
            flag[(964 - 964)][i] = (383 - 382);
            flag[row + (152 - 151)][i] = 1;
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
            i = i + 1;
        };
    }
    for (i = (678 - 678); i <= row + 1; i = i + 1) {
        flag[i][(932 - 932)] = 1;
        flag[i][col + 1] = 1;
    }
    go ((410 - 410), 1, 1, 0);
}

