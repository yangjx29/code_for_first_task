main () {
    int i, t, j, n, a [(1002 - 977)], p [25], max_p, max;
    scanf ("%d", &n);
    for (i = (703 - 703); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    t = i;
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
    for (i = t - (499 - 498); i >= 0; i = i - 1) {
        max_p = 0;
        for (j = t - (378 - 377); i < j; j = j - 1)
            if (a[j] <= a[i] && p[j] > max_p)
                max_p = p[j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p[i] = max_p + (971 - 970);
    }
    max = p[0];
    {
        i = 1;
        while (i < t) {
            if (p[i] > max)
                max = p[i];
            i = i + 1;
        };
    }
    printf ("%d", max);
}

