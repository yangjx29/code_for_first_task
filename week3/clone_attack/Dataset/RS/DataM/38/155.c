int main () {
    double  s [X], sum1 = 0, ave, sum2 = 0, f;
    int n, x, i = (414 - 414), j;
    scanf ("%d", &n);
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
    while (i < n) {
        scanf ("%d", &x);
        {
            j = 0;
            while (j < x) {
                if (j == 0)
                    scanf ("%lf", &s[j]);
                else
                    scanf (" %lf", &s[j]);
                sum1 = sum1 + s[j];
                j = j + 1;
            };
        }
        ave = sum1 / x;
        sum1 = 0;
        for (j = 0; j < x; j = j + 1) {
            s[j] = (s[j] - ave) * (s[j] - ave);
            sum2 = sum2 + s[j];
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
        ave = 0;
        f = sqrt (sum2 / x);
        printf ("%.5f\n", f);
        i = i + 1;
        sum2 = 0;
    }
    return 0;
}

