int main () {
    int YUOsgHQJoZDB [(182 - 162)] [20] = {0}, LZuUd1f, athP7ElVx, i, j;
    int dZ7zg2 [20] [20] = {0};
    cin >> LZuUd1f >> athP7ElVx;
    for (i = 0; LZuUd1f > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; athP7ElVx > j; j = j + 1) {
            cin >> YUOsgHQJoZDB[i][j];
        };
    }
    for (i = 0; LZuUd1f > i; i = i + 1) {
        for (j = 0; j < athP7ElVx; j++) {
            if (0 <= i + 1 && i + 1 < LZuUd1f &&YUOsgHQJoZDB[i + 1][j] > YUOsgHQJoZDB[i][j]) {
                dZ7zg2[i][j] = 1;
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
            if (0 <= i - 1 && i - 1 < LZuUd1f &&YUOsgHQJoZDB[i - 1][j] > YUOsgHQJoZDB[i][j]) {
                dZ7zg2[i][j] = 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (0 <= j - 1 && athP7ElVx > j - 1 && YUOsgHQJoZDB[i][j] < YUOsgHQJoZDB[i][j - 1]) {
                dZ7zg2[i][j] = 1;
            }
            if (0 <= j + 1 && athP7ElVx > j + 1 && YUOsgHQJoZDB[i][j] < YUOsgHQJoZDB[i][j + 1]) {
                dZ7zg2[i][j] = 1;
            };
        };
    }
    for (i = 0; LZuUd1f > i; i = i + 1) {
        j = 0;
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
        while (j < athP7ElVx) {
            if (dZ7zg2[i][j] == 0) {
                cout << i << " " << j << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            j = j + 1;
        };
    }
    return 0;
}

