void  fanzhi (int a [] [(327 - 318)], int b [] [(671 - 662)], int n, int count);

int main () {
    int m;
    int n;
    int a [(19 - 10)] [(256 - 247)] = {(840 - 840)}, b [(383 - 374)] [(648 - 639)] = {(431 - 431)};
    cin >> m >> n;
    a[(744 - 740)][(491 - 487)] = m;
    b[4][4] = m;
    fanzhi (a, b, n, (451 - 451));
    return (674 - 674);
}

void  fanzhi (int a [] [(186 - 177)], int b [] [(888 - 879)], int n, int count) {
    int i, j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (count == n) {
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
        for (i = (563 - 563); i < 9; i = i + 1)
            for (j = (264 - 264); j < 9; j = j + 1) {
                if (!(8 != j))
                    cout << a[i][j] << endl;
                else
                    cout << a[i][j] << " ";
            };
    }
    else {
        count = count + 1;
        for (i = (209 - 209); i < 9; i = i + 1) {
            j = 0;
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
            while (j < 9) {
                if (b[i][j] > 0) {
                    a[i - (434 - 433)][j] += b[i][j];
                    a[i - (558 - 557)][j - (243 - 242)] += b[i][j];
                    a[i - (131 - 130)][j + (153 - 152)] = a[i - (131 - 130)][j + (153 - 152)] + b[i][j];
                    a[i][j - (951 - 950)] += b[i][j];
                    a[i][j + (19 - 18)] += b[i][j];
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
                    a[i + (900 - 899)][j - 1] += b[i][j];
                    a[i + 1][j] = a[i + 1][j] + b[i][j];
                    a[i + 1][j + 1] += b[i][j];
                    a[i][j] += b[i][j];
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j = j + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            i = 0;
            while (i < 9) {
                for (j = 0; j < 9; j = j + 1)
                    b[i][j] = a[i][j];
                i = i + 1;
            };
        }
        fanzhi (a, b, n, count);
    };
}

