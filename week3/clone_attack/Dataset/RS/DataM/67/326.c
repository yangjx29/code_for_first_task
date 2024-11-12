int main () {
    int a [NUM] [COL];
    int n, i, j;
    double  rate;
    scanf ("%d", &n);
    for (i = (46 - 46); i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (240 - 240); j < COL; j++) {
            scanf ("%d", &a[i][j]);
        };
    }
    rate = (double ) a[0][(730 - 729)] / a[0][0];
    for (i = 1; i < n; i++) {
        if ((double ) a[i][1] / a[i][0] - rate > 0.05) {
        }
        else if ((double ) a[i][1] / a[i][0] - rate < -0.05) {
        }
        else if ((double ) a[i][1] / a[i][0] - rate <= 0.05 && (double ) a[i][1] / a[i][0] - rate >= -0.05) {
            printf ("same\n");
        };
    }
    return 0;
}

