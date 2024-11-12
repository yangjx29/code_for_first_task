int main () {
    double  dis [101] [101];
    double  x [101], y [101];
    int n;
    double  max;
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
    max = (904 - 904);
    cin >> n;
    for (int i = 1;
    i <= n; i = i + 1) {
        cin >> x[i] >> y[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        int i = 1;
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
        while (n - 1 >= i) {
            {
                int j = i + 1;
                while (j <= n) {
                    dis[i][j] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
                    dis[i][j] = sqrt (dis[i][j]);
                    if (dis[i][j] > max)
                        max = dis[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4lf\n", max);
    return 0;
}

