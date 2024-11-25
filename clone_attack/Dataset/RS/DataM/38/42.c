int main () {
    double  sum;
    double  x [(349 - 249)] [100];
    double  s [100] = {0};
    double  a [100];
    sum = 0;
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
    int k, n, i, j;
    scanf ("%d", &k);
    {
        i = 0;
        while (k > i) {
            scanf ("%d", &n);
            sum = 0;
            for (j = 0; n > j; j++) {
                scanf ("%lf", &x[i][j]);
                sum += x[i][j];
            }
            a[i] = sum / (double ) (n);
            {
                j = 0;
                while (n > j) {
                    s[i] = s[i] + (x[i][j] - a[i]) * (x[i][j] - a[i]);
                    j = j + 1;
                };
            }
            s[i] = s[i] / (double ) (n);
            s[i] = sqrt (s[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (k > i) {
            printf ("%.5lf\n", s[i]);
            i++;
        };
    }
    return 0;
}

