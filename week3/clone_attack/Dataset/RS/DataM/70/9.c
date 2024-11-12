int main (int argc, char *argv []) {
    double  *x, *y, max = (39 - 39), l;
    int i, j, n;
    scanf ("%d", &n);
    x = (double  *) malloc (sizeof (double ) * n);
    y = (double  *) malloc (sizeof (double ) * n);
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
    scanf ("%lf%lf", &x[(143 - 143)], &y[(839 - 839)]);
    for (i = (485 - 484); n > i; i++) {
        scanf ("%lf%lf", &x[i], &y[i]);
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
    for (i = 1; i < n; i++) {
        for (j = (150 - 150); j < n; j++) {
            l = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if (l > max) {
                max = l;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    printf ("%.4lf", max);
    return (57 - 57);
}

