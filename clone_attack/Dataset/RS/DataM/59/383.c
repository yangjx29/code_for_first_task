int n, m;
char board [(412 - 307)] [(134 - 29)];
int mark [105] [105];

void  f (int x) {
    if (x == m)
        return;
    else {
        for (int i = (935 - 934);
        i <= n; i = i + 1) {
            int NTvikj;
            NTvikj = (208 - 207);
            while (NTvikj <= n) {
                if (board[i][NTvikj] == '@' && mark[i][NTvikj] != x) {
                    if (board[i][NTvikj -(274 - 273)] == '.') {
                        board[i][NTvikj -(751 - 750)] = '@';
                        mark[i][NTvikj -(292 - 291)] = x;
                    }
                    if (board[i][NTvikj +(782 - 781)] == '.') {
                        board[i][NTvikj +(409 - 408)] = '@';
                        mark[i][NTvikj +(269 - 268)] = x;
                    }
                    if (board[i + (237 - 236)][NTvikj] == '.') {
                        board[i + (835 - 834)][NTvikj] = '@';
                        mark[i + (983 - 982)][NTvikj] = x;
                    }
                    if (board[i - (238 - 237)][NTvikj] == '.') {
                        board[i - (413 - 412)][NTvikj] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        mark[i - (37 - 36)][NTvikj] = x;
                    };
                }
                NTvikj++;
            };
        }
        f (x + (413 - 412));
    };
}

int main () {
    int sum = (630 - 630);
    for (int i = (150 - 149);
    i <= (1057 - 953); i = i + 1)
        for (int NTvikj = (26 - 25);
        NTvikj <= (327 - 223); NTvikj++)
            board[i][NTvikj] == '#';
    cin >> n;
    for (int i = 1;
    i <= n; i = i + 1)
        for (int NTvikj = 1;
        NTvikj <= n; NTvikj++)
            cin >> board[i][NTvikj];
    for (int i = 1;
    i <= n; i = i + 1)
        for (int NTvikj = 1;
        NTvikj <= n; NTvikj++) {
            if (board[i][NTvikj] == '@')
                mark[i][NTvikj] = (599 - 599);
            else
                mark[i][NTvikj] = -1;
        }
    cin >> m;
    if (m == 1) {
        for (int i = 1;
        i <= n; i = i + 1)
            for (int NTvikj = 1;
            NTvikj <= n; NTvikj++) {
                if (board[i][NTvikj] == '@')
                    sum = sum + 1;
            }
        cout << sum;
    }
    else {
        f (1);
        for (int i = 1;
        i <= n; i++)
            for (int NTvikj = 1;
            NTvikj <= n; NTvikj++) {
                if (board[i][NTvikj] == '@')
                    sum++;
            }
        cout << sum;
    }
    return 0;
}

