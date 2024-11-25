int main () {
    double  a [(1297 - 297)], b [(1303 - 303)], c, d;
    int n, i;
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
    for (i = 0; n > i; i = i + 1) {
        scanf ("%lf %lf", &a[i], &b[i]);
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
    for (i = 1; i < n; i++) {
        c = b[0] / a[0];
        d = b[i] / a[i];
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
        if ((482.05 - 482.0) < (d - c))
            ;
        else if ((c - d) > 0.05)
            printf ("worse\n");
        else
            printf ("same\n");
    }
    return 0;
}

