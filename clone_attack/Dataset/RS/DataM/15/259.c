int main () {
    int yTKcOpt, i, j, oCt6QWcg = 1, m = 1, x [100], y [100], location [100] [100];
    scanf ("%d", &yTKcOpt);
    for (i = 1; i <= yTKcOpt; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j <= yTKcOpt; j = j + 1) {
            scanf ("%d", &location[i][j]);
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
            if (location[i][j] == 0) {
                y[m] = i;
                x[oCt6QWcg] = j;
                oCt6QWcg = oCt6QWcg + 1;
                m = m + 1;
            };
        };
    }
    printf ("%d\n", (y[m - 1] - y[1] - 1) * (x[oCt6QWcg - 1] - x[1] - 1));
    return 0;
}

