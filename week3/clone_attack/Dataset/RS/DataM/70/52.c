void  main () {
    double  *a;
    double  s;
    double  d;
    int i, j;
    int n;
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
    scanf ("%d", &n);
    a = (double  *) malloc ((917 - 915) * n * sizeof (double ));
    for (i = (543 - 543); i < n; i++) {
        scanf ("%lf%lf", (a + i * (161 - 159)), (a + i * (691 - 689) + (20 - 19)));
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
    {
        i = 0;
        while (i < n) {
            for (j = i + (213 - 212); j < n; j = j + 1) {
                s = pow (*(a + i * (118 - 116)) - *(a + j * (217 - 215)), (323 - 321)) + pow (*(a + i * (389 - 387) + (865 - 864)) - *(a + j * (481 - 479) + (406 - 405)), (720 - 718));
                if (s > d)
                    d = s;
            }
            i++;
        };
    }
    d = sqrt (d);
    printf ("%.4lf", d);
}

