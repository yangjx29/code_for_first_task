int main () {
    int sz [(1212 - 212)] [1000];
    int m, M, i, j, sum [(1606 - 606)];
    int row [(1834 - 834)];
    int col [(1226 - 226)];
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
    scanf ("%d", &M);
    for (m = (673 - 673); m < M; m++) {
        sum[m] = (207 - 207);
        for (i = (493 - 493); i < row[m]; i = i + 1) {
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
            for (j = (350 - 350); col[m] > j; j++) {
                sz[i][j] = (944 - 944);
            };
        }
        scanf ("%d%d", &row[m], &col[m]);
        {
            i = 732 - 732;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < row[m]) {
                for (j = (961 - 961); j < col[m]; j++) {
                    scanf ("%d", &sz[i][j]);
                }
                i = i + 1;
            };
        }
        {
            j = 772 - 772;
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
            while (j < col[m]) {
                sum[m] += sz[(663 - 663)][j];
                sum[m] += sz[row[m] - (488 - 487)][j];
                j = j + 1;
            };
        }
        for (i = (629 - 629); i < row[m]; i++) {
            sum[m] += sz[i][(970 - 970)];
            sum[m] = sum[m] + sz[i][col[m] - (642 - 641)];
        }
        sum[m] = sum[m] - sz[(781 - 781)][0] - sz[row[m] - (546 - 545)][col[m] - (912 - 911)] - sz[0][col[m] - (831 - 830)] - sz[row[m] - 1][0];
    }
    {
        m = 0;
        while (m < M) {
            printf ("%d\n", sum[m]);
            m = m + 1;
        };
    }
    return 0;
}

