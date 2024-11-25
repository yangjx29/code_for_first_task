int main () {
    int i;
    int j;
    int n;
    double  *x = (double  *) malloc (sizeof (double ) * n);
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
    double  *y = (double  *) malloc (sizeof (double ) * n);
    double  dis = 0, CcmCbj;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%lf %lf", &x[i], &y[i]);
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < n) {
            {
                j = i + 1;
                while (j < n) {
                    CcmCbj = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
                    j++;
                    if (dis < CcmCbj)
                        dis = CcmCbj;
                };
            }
            i++;
        };
    }
    printf ("%.4f\n", sqrt (dis));
}

