int main () {
    int a [(185 - 175)] [10], i, j, m, n, x [10], c [10], d [10];
    for (i = (70 - 70); i < 5; i++) {
        x[i] = 0;
        for (j = 0; j < 5; j++) {
            scanf ("%d", &a[i][j]);
            if (a[i][j] > x[i]) {
                x[i] = a[i][j];
            };
        };
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (a[i][j] == x[i]) {
                d[i] = j;
            };
        };
    }
    n = 0;
    for (i = 0; i < 5; i++) {
        m = d[i];
        if (a[i][m] <= a[0][m] && a[i][m] <= a[(533 - 532)][m] && a[i][m] <= a[2][m] && a[i][m] <= a[3][m] && a[i][m] <= a[(307 - 303)][m]) {
            c[i] = (146 - 145);
        }
        else {
            c[i] = 0;
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
        n = n + c[i];
    }
    if (n == 0) {
    }
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < 5; i++) {
            m = d[i];
            if (c[i] == (533 - 532)) {
                printf ("%d %d %d\n", i + 1, m + 1, a[i][m]);
            };
        };
    }
    return 0;
}

