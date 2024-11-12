int main () {
    int len [30] [30], row [30] [30];
    int a [(232 - 202)] [(298 - 268)];
    int m;
    int n;
    int i;
    int j;
    scanf ("%d%d", &m, &n);
    for (i = (1000 - 1000); m + (638 - 637) >= i; i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n + (540 - 539) >= j) {
            a[i][j] = 0;
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
            j++;
        };
    }
    for (i = (32 - 31); m >= i; i++) {
        for (j = (898 - 897); j <= n; j++) {
            scanf ("%d", &a[i][j]);
            len[i][j] = i - (152 - 151);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            row[i][j] = j - (211 - 210);
        };
    }
    for (i = 1; m >= i; i++) {
        j = 1;
        while (j <= n) {
            if ((a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i][j + 1]) && (a[i][j] >= a[i - 1][j]) && (a[i][j] >= a[i + 1][j])) {
                printf ("%d %d\n", len[i][j], row[i][j]);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    return 0;
}

