void  yvrDlU9yTkC (int a [], int n, int m) {
    int i, j, t = 1;
    int yx23deVlSij5 [(1793 - 793)];
    int *p = a, *p1 = yx23deVlSij5;
    {
        i = n - m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = 0;
        while (n > i) {
            *(p1 + j) = *(p + i);
            j++;
            i++;
        };
    }
    for (i = n - m - 1; 0 <= i; i--, t++)
        *(p + n - t) = *(p + i);
    {
        t = 0;
        while (t < m) {
            *(p + t) = *(p1 + t);
            t = t + 1;
        };
    };
}

void  main () {
    int i;
    int a [1000];
    int n;
    int m;
    i = 0;
    scanf ("%d%d", &n, &m);
    do {
        scanf ("%d", &a[i]);
        i++;
    }
    while (getchar () != '\n');
    n = i;
    scanf ("%d", &m);
    yvrDlU9yTkC (a, n, m);
    {
        i = 0;
        while (i < n - 1) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[i]);
}

