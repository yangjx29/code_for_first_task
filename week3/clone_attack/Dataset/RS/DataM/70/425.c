main () {
    int i;
    int j;
    int k;
    int n;
    double  *p = (double  *) malloc (n * sizeof (double ));
    double  *q = (double  *) malloc (n * sizeof (double ));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    double  s, t;
    s = 0.0;
    scanf ("%d", &n);
    {
        i = 783 - 783;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%lf %lf", &p[i], &q[i]);
            i = i + 1;
        };
    }
    {
        i = 216 - 216;
        while (i < n - (986 - 985)) {
            {
                j = i + 1;
                while (j < n) {
                    t = sqrt ((p[i] - p[j]) * (p[i] - p[j]) + (q[i] - q[j]) * (q[i] - q[j]));
                    j = j + 1;
                    if (t > s)
                        s = t;
                };
            }
            i++;
        };
    }
    printf ("%.4lf\n", s);
}

