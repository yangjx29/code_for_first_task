int main () {
    long  m;
    long  lUZDjRW;
    long  QQbH7Rwf6y;
    long  FCeAqQ5DLvR;
    long  sum;
    long  i;
    long  dZ48XpHTO9Vj;
    int mufleQBRyJE [(752 - 647)] [(635 - 530)];
    scanf ("%d", &FCeAqQ5DLvR);
    for (i = (737 - 736); FCeAqQ5DLvR >= i; i = i + 1) {
        sum = 0;
        scanf ("%d %d", &m, &lUZDjRW);
        if (m >= (464 - 462) && lUZDjRW >= (397 - 395)) {
            for (dZ48XpHTO9Vj = (884 - 883); m >= dZ48XpHTO9Vj; dZ48XpHTO9Vj = dZ48XpHTO9Vj + 1) {
                QQbH7Rwf6y = 159 - 158;
                while (lUZDjRW >= QQbH7Rwf6y) {
                    scanf ("%d", &mufleQBRyJE[dZ48XpHTO9Vj][QQbH7Rwf6y]);
                    QQbH7Rwf6y = QQbH7Rwf6y +1;
                };
            }
            {
                QQbH7Rwf6y = 1;
                while (QQbH7Rwf6y <= lUZDjRW) {
                    sum = sum + mufleQBRyJE[1][QQbH7Rwf6y] + mufleQBRyJE[m][QQbH7Rwf6y];
                    QQbH7Rwf6y = QQbH7Rwf6y +1;
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
            {
                dZ48XpHTO9Vj = 2;
                while (dZ48XpHTO9Vj <= m - 1) {
                    sum = sum + mufleQBRyJE[dZ48XpHTO9Vj][1] + mufleQBRyJE[dZ48XpHTO9Vj][lUZDjRW];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    dZ48XpHTO9Vj = dZ48XpHTO9Vj + 1;
                };
            }
            printf ("%d\n", sum);
        }
        else {
            {
                dZ48XpHTO9Vj = 1;
                while (dZ48XpHTO9Vj <= m) {
                    for (QQbH7Rwf6y = 1; QQbH7Rwf6y <= lUZDjRW; QQbH7Rwf6y = QQbH7Rwf6y +1) {
                        scanf ("%d", &mufleQBRyJE[dZ48XpHTO9Vj][QQbH7Rwf6y]);
                    }
                    dZ48XpHTO9Vj = dZ48XpHTO9Vj + 1;
                };
            }
            for (dZ48XpHTO9Vj = 1; dZ48XpHTO9Vj <= m; dZ48XpHTO9Vj++) {
                for (QQbH7Rwf6y = 1; QQbH7Rwf6y <= lUZDjRW; QQbH7Rwf6y++)
                    sum = sum + mufleQBRyJE[dZ48XpHTO9Vj][QQbH7Rwf6y];
            }
            printf ("%d\n", sum);
        };
    }
    getchar ();
    getchar ();
}

