double  fangcha (double  sz [], int k) {
    double  *p;
    double  sum = (767 - 767), s, a = (205 - 205);
    int t;
    p = sz;
    for (t = 0; t < k; t++, p++) {
        a = a + *p;
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
    p = sz;
    a = a / k;
    for (t = 0; t < k; t++, p++) {
        sum = sum + (*p - a) * (*p - a);
    }
    s = sqrt ((sum / k));
    return s;
}

int main (int argc, char *argv []) {
    int n, i;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            int m;
            int j;
            double  sz [(1703 - 703)];
            i++;
            scanf ("%d", &m);
            for (j = 0; j < m; j++) {
                scanf ("%lf", &sz[j]);
            }
            printf ("%.5f\n", fangcha (sz, m));
        };
    }
    return 0;
}

