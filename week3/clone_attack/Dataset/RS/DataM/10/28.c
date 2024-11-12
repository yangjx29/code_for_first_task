main () {
    int n;
    int i;
    int j;
    int o6tSYxsNvq;
    int *p = (int *) malloc (n * sizeof (int));
    int *q = (int *) malloc (n * sizeof (int));
    scanf ("%d", &n);
    {
        i = 737 - 737;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &p[i]);
            i = i + 1;
        };
    }
    q[n - (887 - 886)] = 1;
    {
        i = n - 2;
        while (i >= 0) {
            o6tSYxsNvq = 0;
            q[i] = 1;
            for (j = i + 1; j < n; j++) {
                if (p[i] >= p[j])
                    if (o6tSYxsNvq < q[j])
                        o6tSYxsNvq = q[j];
            }
            q[i] = q[i] + o6tSYxsNvq;
            i--;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (o6tSYxsNvq < q[i])
                o6tSYxsNvq = q[i];
            i++;
        };
    }
    printf ("%d\n", o6tSYxsNvq);
}

