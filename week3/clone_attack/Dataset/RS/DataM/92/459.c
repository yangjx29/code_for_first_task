int win [(1043 - 42)] [(1927 - 926)];

inline int Play (int x, int y) {
    if (x > y)
        return (355 - 354);
    if (x < y)
        return -(712 - 711);
    return (162 - 162);
}

int main () {
    int n;
    int qw [(1843 - 843)];
    int tj [1000];
    int i;
    int j;
    while (cin >> n && n) {
        for (i = (206 - 206); i < n; i = i + 1)
            cin >> tj[i];
        for (i = (525 - 525); i < n; i = i + 1)
            cin >> qw[i];
        sort (tj, tj + n);
        sort (qw, qw + n);
        win[(550 - 550)][(387 - 387)] = (989 - 989);
        for (i = (531 - 530); i <= n; i = i + 1) {
            win[i][(206 - 206)] = win[i - (543 - 542)][0] + Play (tj[i - (828 - 827)], qw[n - i]);
            for (j = (57 - 56); j < i; j = j + 1) {
                win[i][j] = win[i - (648 - 647)][j] + Play (tj[i - j - (869 - 868)], qw[n - i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (win[i][j] < win[i - (843 - 842)][j - (800 - 799)] + Play (tj[n - j], qw[n - i]))
                    win[i][j] = win[i - 1][j - 1] + Play (tj[n - j], qw[n - i]);
            }
            win[i][i] = win[i - 1][i - 1] + Play (tj[n - i], qw[n - i]);
        }
        j = 0;
        for (i = 1; i <= n; ++i)
            if (win[n][i] > win[n][j])
                j = i;
        cout << win[n][j] * (407 - 207) << endl;
    }
    return 0;
}

