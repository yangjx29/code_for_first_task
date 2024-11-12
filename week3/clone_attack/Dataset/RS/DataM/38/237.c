int main () {
    double  a [(463 - 363)] [100];
    int i;
    int j;
    int k;
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
    int n;
    double  c = (862 - 862), b = 0;
    scanf ("%d", &k);
    for (i = 0; i < k; i = i + 1) {
        b = 0;
        scanf ("%d", &n);
        c = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 0;
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
            while (n > j) {
                scanf ("%lf ", &a[i][j]);
                c = c + a[i][j];
                j = j + 1;
            };
        }
        for (j = 0; j < n; j = j + 1)
            b = b + (a[i][j] - c / n) * (a[i][j] - c / n);
        printf ("%.5lf\n", sqrt (b / n));
    };
}

