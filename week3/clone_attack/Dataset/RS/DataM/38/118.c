int main () {
    int k;
    scanf ("%d", &k);
    while (k = k - 1) {
        double  result;
        result = 0;
        double  *p;
        double  u0viV7b = 0;
        int n;
        double  a [200];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        int i;
        double  ave;
        scanf ("%d", &n);
        {
            i = 0;
            while (n > i) {
                scanf ("%lf", &a[i]);
                i++;
            };
        }
        {
            p = a;
            while (a + n > p) {
                u0viV7b += *p;
                p++;
            };
        }
        ave = u0viV7b / n;
        {
            p = a;
            while (a + n > p) {
                result = result + (*p - ave) * (*p - ave);
                p++;
            };
        }
        result = sqrt (result / n);
        printf ("%.5lf\n", result);
    }
    return 0;
}

