int main () {
    int k;
    k = (160 - 160);
    double  p;
    double  pa;
    double  a;
    p = (695.0 - 695.0);
    pa = (157.0 - 157.0);
    a = 0.0;
    double  sum2;
    sum2 = 0.0;
    scanf ("%d", &k);
    for (int j = 0;
    k > j; j = j + 1) {
        double  sum;
        sum = 0.0;
        int n = 0;
        double  num [(1927 - 927)];
        sum2 = 0;
        scanf ("%d", &n);
        {
            int i = 0;
            while (n > i) {
                scanf ("%lf", &num[i]);
                sum += num[i];
                i++;
            };
        }
        a = sum / n;
        {
            int m = 0;
            while (n > m) {
                sum2 += (num[m] - a) * (num[m] - a);
                m++;
            };
        }
        p = sqrt ((sum2) / n);
        printf ("%.5f\n", p);
    }
    return 0;
}

