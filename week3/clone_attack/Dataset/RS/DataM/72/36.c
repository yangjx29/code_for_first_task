int main () {
    int count;
    int i;
    int j;
    int m;
    int n;
    count = (594 - 594);
    int sz [(70 - 48)] [22];
    scanf ("%d %d", &m, &n);
    {
        i = 924 - 924;
        while (m + (394 - 392) > i) {
            for (j = 0; j < n + (626 - 624); j = j + 1) {
                sz[i][j] = 0;
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
    {
        i = 926 - 925;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m + 1 > i) {
            for (j = 1; n > j; j++) {
                scanf ("%d ", &sz[i][j]);
            }
            scanf ("%d", &sz[i][n]);
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
            i++;
        };
    }
    for (i = 1; i < m + 1; i++) {
        for (j = 1; j < n + 1; j++) {
            if (sz[i + 1][j] - sz[i][j] <= 0 && sz[i - 1][j] - sz[i][j] <= 0 && sz[i][j + 1] - sz[i][j] <= 0 && sz[i][j - 1] - sz[i][j] <= 0) {
                printf ("%d %d\n", i - 1, j - 1);
            };
        };
    }
    return 0;
}

