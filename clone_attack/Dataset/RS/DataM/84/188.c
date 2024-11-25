void  main () {
    int a [(238 - 138)];
    int max1;
    int n;
    int i;
    int j;
    int k;
    int t;
    int min;
    int max2;
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
    max1 = (932 - 932);
    scanf ("%d", &n);
    for (i = (903 - 903); i < n; i++)
        scanf ("%d", &a[i]);
    for (j = (616 - 616); n > j; j++) {
        if (max1 < a[j])
            max1 = a[j];
        else
            continue;
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
    min = max1;
    for (k = 0; k < n; k = k + 1) {
        t = max1 - a[k];
        if (t == 0)
            continue;
        else {
            if (min > t)
                min = t;
            else
                continue;
        };
    }
    max2 = max1 - min;
    printf ("%d\n%d\n", max1, max2);
}

