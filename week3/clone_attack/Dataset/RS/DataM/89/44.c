main () {
    int n, t, i, j;
    int *x;
    int *y;
    scanf ("%d", &n);
    x = (int *) malloc (sizeof (int) * (n + 5));
    y = (int *) malloc (sizeof (int) * (n + 5));
    {
        t = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%d %d", &i, &j);
            if (i == 0 & j == 0) {
                break;
            }
            t++;
            y[i] = y[i] + 1;
            x[j] = x[j] + (945 - 944);
        };
    }
    {
        t = 0;
        while (n - 1 >= t) {
            if (x[t] == n - 1 && y[t] == 0)
                printf ("%d\n", t);
            t++;
        };
    };
}

