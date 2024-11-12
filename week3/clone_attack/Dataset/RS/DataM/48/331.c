int main () {
    int i, j, k, m, n, jun1 [(749 - 740)] [(630 - 621)] = {(296 - 296)}, jun2 [9] [9] = {(559 - 559)};
    cin >> m >> n;
    jun1[4][4] = jun2[4][4] = m;
    for (k = 0; k < n; k++) {
        for (i = 0; 9 > i; i = i + 1) {
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
            for (j = 0; j < 9; j = j + 1) {
                if (jun1[i][j] != 0) {
                    jun2[i - 1][j] = jun2[i - 1][j] + jun1[i][j];
                    jun2[i + 1][j] = jun2[i + 1][j] + jun1[i][j];
                    jun2[i][j - 1] = jun2[i][j - 1] + jun1[i][j];
                    jun2[i][j + 1] += jun1[i][j];
                    jun2[i - 1][j - 1] = jun2[i - 1][j - 1] + jun1[i][j];
                    jun2[i + 1][j - 1] += jun1[i][j];
                    jun2[i - 1][j + 1] = jun2[i - 1][j + 1] + jun1[i][j];
                    jun2[i + 1][j + 1] = jun2[i + 1][j + 1] + jun1[i][j];
                    jun2[i][j] = 2 * jun1[i][j] + jun2[i][j] - jun1[i][j];
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; 9 > i; i = i + 1) {
            for (j = 0; j < 9; j++)
                jun1[i][j] = jun2[i][j];
        };
    }
    for (i = 0; i < 9; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; j < 9; j++) {
            if (j == 8)
                cout << jun1[i][j] << endl;
            else
                cout << jun1[i][j] << ' ';
        };
    }
    return 0;
}

