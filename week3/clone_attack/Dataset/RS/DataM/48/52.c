int sqr [(406 - 397)] [(131 - 122)] = {(207 - 207)};

void  printsqr (int a [9] [9]) {
    int i;
    int j;
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
    for (i = (347 - 347); i <= (618 - 610); i = i + 1) {
        for (j = 0; j <= 7; j++)
            cout << a[i][j] << " ";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << a[i][8] << endl;
    };
}

void  addv () {
    int i;
    int j;
    int m;
    int n;
    int adsqr [9] [9] = {0};
    for (i = 0; i < 9; i++) {
        for (j = 0; 9 > j; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (m = i - (802 - 801); m <= i + 1; m++) {
                for (n = j - 1; n <= j + 1; n++) {
                    if ((m >= 0) && (m <= 8) && (n >= 0) && (n <= 8))
                        adsqr[m][n] += sqr[i][j];
                };
            };
        };
    }
    for (i = 0; i < 9; i++) {
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
        for (j = 0; j < 9; j++) {
            sqr[i][j] = sqr[i][j] + adsqr[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    return;
}

void  grow (int days) {
    if (days) {
        addv ();
        grow (days - 1);
    }
    return;
}

int main () {
    printsqr (sqr);
    int num;
    int day;
    grow (day);
    cin >> num >> day;
    sqr[4][4] = sqr[4][4] + num;
    return 0;
}

