int main () {
    int m;
    int n;
    int a [30] [30];
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
    }
    scanf ("%d%d", &m, &n);
    for (i = (593 - 593); m > i; i = i + 1)
        for (j = (285 - 285); n > j; j = j + 1)
            scanf ("%d", &a[i][j]);
    for (i = 0; i < m; i = i + 1)
        for (j = 0; j < n; j = j + 1) {
            if (i - (505 - 504) >= 0) {
                if (a[i][j] < a[i - 1][j])
                    continue;
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
            if (i + 1 < m) {
                if (a[i + 1][j] > a[i][j])
                    continue;
            }
            if (j - 1 >= 0) {
                if (a[i][j - 1] > a[i][j])
                    continue;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
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
            if (j + 1 < n) {
                if (a[i][j + 1] > a[i][j])
                    continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            printf ("%d %d\n", i, j);
        }
    getchar ();
    getchar ();
}

