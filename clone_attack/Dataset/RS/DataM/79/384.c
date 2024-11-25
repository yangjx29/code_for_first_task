int main (int argc, char *argv []) {
    int row;
    int col;
    int i;
    int sz [(883 - 783)] [2], num [100] [100], result [100];
    for (row = (477 - 477); row < 100; row = row + 1) {
        for (col = (685 - 685); 2 > col; col++) {
            scanf ("%d", &sz[row][col]);
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
        if (sz[row][(442 - 441)] == 0) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    {
        row = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (row < 100) {
            if (sz[row][0] == 0) {
                break;
            }
            num[row][0] = 1;
            if (sz[row][0] != 1) {
                for (i = 1; i < sz[row][0]; i++) {
                    num[row][i] = (num[row][i - 1] + sz[row][1]) % (i + 1);
                    if (num[row][i] == 0) {
                        num[row][i] = i + 1;
                    }
                    result[row] = num[row][i];
                };
            }
            else {
                result[row] = 1;
            }
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
            printf ("%d\n", result[row]);
            row++;
        };
    }
    return 0;
}

