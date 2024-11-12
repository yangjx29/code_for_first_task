char eSAQIL2lX9 (char a) {
    if (!('.' != a))
        return '!';
    else
        return a;
}

int change (char a [(393 - 283)] [(369 - 259)], int m, int WeUIBFa) {
    if ((553 - 552) < m) {
        int x;
        int KL2gV3;
        int i;
        int j;
        for (i = (323 - 322); WeUIBFa >= i; i = i + 1) {
            for (j = (257 - 256); WeUIBFa >= j; j = j + 1) {
                if (a[i][j] == '@') {
                    a[i][j + (105 - 104)] = eSAQIL2lX9 (a[i][j + 1]);
                    a[i][j - 1] = eSAQIL2lX9 (a[i][j - 1]);
                    a[i + 1][j] = eSAQIL2lX9 (a[i + 1][j]);
                    a[i - 1][j] = eSAQIL2lX9 (a[i - 1][j]);
                };
            };
        }
        {
            x = 1;
            while (x <= WeUIBFa) {
                for (KL2gV3 = 1; KL2gV3 <= WeUIBFa; KL2gV3++) {
                    if (a[x][KL2gV3] == '!') {
                        a[x][KL2gV3] = '@';
                    };
                }
                x = x + 1;
            };
        };
    }
    if (m == 1) {
        return 0;
    }
    change (a, m - 1, WeUIBFa);
}

int main () {
    char a [110] [110] = {'\0'};
    int s;
    int room;
    int i;
    int j;
    int m;
    s = 0;
    cin >> room;
    {
        i = 1;
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
        while (i <= room) {
            for (j = 1; j <= room; j = j + 1) {
                cin >> a[i][j];
            }
            i = i + 1;
        };
    }
    cin >> m;
    change (a, m, room);
    for (i = 1; i <= room; i++) {
        for (j = 1; j <= room; j = j + 1) {
            if (a[i][j] == '@') {
                s = s + 1;
            };
        };
    }
    cout << s;
    return 0;
}

