int board [(259 - 250)] [9];
void  lZedyJo6 ();

int main () {
    int m;
    int n;
    int i;
    int j;
    int k;
    int temp [9] [9];
    memset (board, 0, sizeof (board));
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
    cin >> m >> n;
    board[4][4] = m;
    {
        i = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 6) {
            {
                j = 3;
                while (6 > j) {
                    board[i][j] = board[i][j] + m;
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
            i = i + 1;
        };
    }
    if ((176 - 174) <= n) {
        memset (temp, 0, sizeof (temp));
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
        {
            i = 3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < 6) {
                {
                    j = 3;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (6 > j) {
                        board[i][j] = board[i][j] * (2);
                        temp[i][j] = board[i][j];
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
                        j++;
                    };
                }
                i++;
            };
        }
        for (i = 3; i < 6; i = i + 1)
            for (j = 3; j < 6; j = j + 1) {
                board[i - (603 - 602)][j] = board[i - (603 - 602)][j] + temp[i][j] / 2;
                board[i + 1][j] = board[i + 1][j] + temp[i][j] / 2;
                board[i][j + 1] = board[i][j + 1] + temp[i][j] / 2;
                board[i][j - 1] = board[i][j - 1] + temp[i][j] / 2;
                board[i - 1][j - 1] = board[i - 1][j - 1] + temp[i][j] / 2;
                board[i + 1][j + 1] = board[i + 1][j + 1] + temp[i][j] / 2;
                board[i - 1][j + 1] = board[i - 1][j + 1] + temp[i][j] / 2;
                board[i + 1][j - 1] = board[i + 1][j - 1] + temp[i][j] / 2;
            };
    }
    if (n >= 3) {
        memset (temp, 0, sizeof (temp));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 2; 7 > i; i = i + 1)
            for (j = 2; j < 7; j = j + 1) {
                board[i][j] = board[i][j] * (2);
                temp[i][j] = board[i][j];
            }
        for (i = 2; i < 7; i++)
            for (j = 2; j < 7; j++) {
                board[i - 1][j] = board[i - 1][j] + temp[i][j] / 2;
                board[i + 1][j] = board[i + 1][j] + temp[i][j] / 2;
                board[i][j + 1] = board[i][j + 1] + temp[i][j] / 2;
                board[i][j - 1] = board[i][j - 1] + temp[i][j] / 2;
                board[i - 1][j - 1] = board[i - 1][j - 1] + temp[i][j] / 2;
                board[i + 1][j + 1] = board[i + 1][j + 1] + temp[i][j] / 2;
                board[i - 1][j + 1] = board[i - 1][j + 1] + temp[i][j] / 2;
                board[i + 1][j - 1] = board[i + 1][j - 1] + temp[i][j] / 2;
            };
    }
    if (n >= 4) {
        memset (temp, 0, sizeof (temp));
        for (i = 1; i < 8; i++)
            for (j = 1; 8 > j; j++) {
                board[i][j] = board[i][j] * (2);
                temp[i][j] = board[i][j];
            }
        for (i = 1; i < 8; i++) {
            j = 1;
            while (j < 8) {
                board[i - 1][j] = board[i - 1][j] + temp[i][j] / 2;
                board[i + 1][j] += temp[i][j] / 2;
                board[i][j + 1] += temp[i][j] / 2;
                board[i][j - 1] = board[i][j - 1] + temp[i][j] / 2;
                board[i - 1][j - 1] = board[i - 1][j - 1] + temp[i][j] / 2;
                board[i + 1][j + 1] = board[i + 1][j + 1] + temp[i][j] / 2;
                board[i - 1][j + 1] = board[i - 1][j + 1] + temp[i][j] / 2;
                board[i + 1][j - 1] = board[i + 1][j - 1] + temp[i][j] / 2;
                j++;
            };
        };
    }
    lZedyJo6 ();
    return 0;
}

void  lZedyJo6 () {
    int i;
    int j;
    for (i = 0; i < 9; i++) {
        cout << board[i][0];
        {
            j = 1;
            while (j < 9) {
                cout << " " << board[i][j];
                j++;
            };
        }
        cout << endl;
    };
}

