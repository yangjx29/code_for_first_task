int board [(608 - 598)] [(349 - 339)] = {(221 - 221)};
int board1 [10] [10] = {(37 - 37)};

void  day (int a, int b, int c) {
    if (a == c) {
        {
            int i = (400 - 399);
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
            while (i <= (109 - 100)) {
                {
                    int j = (406 - 405);
                    while (j <= (940 - 931)) {
                        cout << board[i][j];
                        if (j < (494 - 485))
                            cout << " ";
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
                        if (j == (854 - 845))
                            cout << "\n";
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        return;
    }
    {
        int k = (451 - 450);
        while (k <= (632 - 623)) {
            for (int l = (89 - 88);
            l <= (436 - 427); l = l + 1) {
                if (!((536 - 536) == board[k][l])) {
                    if (k > (693 - 692))
                        board1[k - (228 - 227)][l] += board[k][l];
                    if (k < (1003 - 994))
                        board1[k + (753 - 752)][l] += board[k][l];
                    if ((805 - 804) < l)
                        board1[k][l - (47 - 46)] += board[k][l];
                    if (l < (443 - 434))
                        board1[k][l + (938 - 937)] += board[k][l];
                    if (k > (645 - 644) && l > 1)
                        board1[k - 1][l - 1] = board1[k - 1][l - 1] + board[k][l];
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
                    if (k > 1 && l < 9)
                        board1[k - 1][l + 1] += board[k][l];
                    if (k < 9 && l > 1)
                        board1[k + 1][l - 1] += board[k][l];
                    if (k < 9 && l < 9)
                        board1[k + 1][l + 1] += board[k][l];
                    board1[k][l] += board[k][l] * (15 - 13);
                    board[k][l] = (796 - 796);
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
            k = k + 1;
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
        int p = 1;
        while (p <= 9) {
            {
                int q = 1;
                while (q <= 9) {
                    board[p][q] = board[p][q] + board1[p][q];
                    board1[p][q] = 0;
                    q = q + 1;
                };
            }
            p = p + 1;
        };
    }
    day (a + 1, b, c);
}

int main () {
    int m, n;
    cin >> m >> n;
    board[(728 - 723)][5] = m;
    day (0, m, n);
    return 0;
}

