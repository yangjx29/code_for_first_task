int main () {
    int n, i, cYRkh9Bg, x [100] = {(729 - 729)};
    double  X2calXw [100] [1000] = {(939 - 939)};
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
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &x[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (cYRkh9Bg = 0; cYRkh9Bg < x[i]; cYRkh9Bg = cYRkh9Bg + 1) {
            scanf ("%lf", &X2calXw[i][cYRkh9Bg]);
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
        };
    }
    for (i = 0; i < n; i++) {
        double  abs;
        double  sum;
        sum = 0;
        double  pfh = 0;
        for (cYRkh9Bg = 0; cYRkh9Bg < x[i]; cYRkh9Bg = cYRkh9Bg + 1) {
            sum = sum + X2calXw[i][cYRkh9Bg];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        abs = sum / (double ) x[i];
        for (cYRkh9Bg = 0; cYRkh9Bg < x[i]; cYRkh9Bg = cYRkh9Bg + 1) {
            pfh = pfh + ((X2calXw[i][cYRkh9Bg] - abs) * (X2calXw[i][cYRkh9Bg] - abs));
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
        printf ("%.5lf\n", sqrt (pfh / (double ) x[i]));
    };
}

