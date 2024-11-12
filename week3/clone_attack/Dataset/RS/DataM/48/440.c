int main () {
    int a [(618 - 607)] [(551 - 540)];
    int b [(549 - 538)] [(648 - 637)];
    int m;
    int n;
    int i;
    int j;
    int k;
    scanf ("%d %d", &m, &n);
    {
        i = 478 - 478;
        while (i < (426 - 415)) {
            {
                j = 402 - 402;
                while (j < (378 - 367)) {
                    a[i][j] = 0;
                    b[i][j] = 0;
                    j = j + 1;
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
            i = i + 1;
        };
    }
    a[(782 - 777)][(661 - 656)] = m;
    {
        k = 339 - 338;
        while (k <= n) {
            k = k + 1;
            for (i = (733 - 732); i < (574 - 564); i++) {
                for (j = (284 - 283); j < 10; j = j + 1) {
                    b[i][j] = 2 * a[i][j] + a[i - (369 - 368)][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
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
            for (i = 0; i < 11; i++) {
                j = 0;
                while (11 > j) {
                    a[i][j] = b[i][j];
                    j = j + 1;
                };
            };
        };
    }
    for (i = 1; 10 > i; i++) {
        {
            j = 1;
            while (j < 9) {
                printf ("%d ", a[i][j]);
                j++;
            };
        }
        printf ("%d\n", a[i][9]);
    }
    return 0;
}

