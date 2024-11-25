int main () {
    double  b [100], sum;
    int m, n, a [(418 - 318)], i, j;
    scanf ("%d", &m);
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
    for (i = 0; i < m; i++) {
        scanf ("%d", &n);
        sum = 0.000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 2; n + 2 > j; j++) {
            a[0] = 1;
            a[1] = 1;
            a[j] = a[j - 2] + a[j - 1];
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
            b[j] = (double ) a[j] / a[j - 1];
            sum = sum + b[j];
        }
        printf ("%.3lf\n", sum);
    }
    return 0;
}

