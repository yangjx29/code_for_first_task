int main (int argc, char *argv []) {
    int n;
    int KGEOdxcr2K;
    int i;
    int j;
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
    double  a [1000], sum1 = (812 - 812), sum2 = 0, ave1 = 0, sum3 = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &KGEOdxcr2K);
        {
            j = 0;
            while (KGEOdxcr2K > j) {
                scanf ("%lf", &a[j]);
                sum1 = sum1 + a[j];
                j = j + 1;
            };
        }
        ave1 = sum1 / KGEOdxcr2K;
        sum1 = 0;
        {
            j = 0;
            while (KGEOdxcr2K > j) {
                sum2 += (a[j] - ave1) * (a[j] - ave1);
                j = j + 1;
            };
        }
        ave1 = 0;
        sum3 = pow (sum2 / KGEOdxcr2K, 0.5);
        printf ("%.5lf\n", sum3);
        sum3 = 0;
        sum2 = 0;
    }
    return 0;
}

