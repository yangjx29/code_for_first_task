int main () {
    double  a;
    double  b;
    double  s;
    double  t;
    a = (745 - 744);
    b = 1;
    s = (836 - 836);
    int i;
    int j;
    int m;
    int n;
    double  d;
    double  sum [MAX];
    scanf ("%d", &m);
    {
        i = 898 - 898;
        while (m > i) {
            b = 1;
            s = 0;
            a = 1;
            scanf ("%d", &n);
            {
                j = 1;
                while (j <= n) {
                    d = (a + b) / b;
                    t = b;
                    s = s + d;
                    b = a + b;
                    a = t;
                    j++;
                };
            }
            sum[i] = s;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("%.3lf\n", sum[i]);
            i++;
        };
    }
    return 0;
}

