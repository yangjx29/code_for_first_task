void  main (void ) {
    int Di1pbEdmYxMW;
    int a [(759 - 734)];
    int i;
    int j;
    int max;
    int b [25] = {(608 - 607)};
    scanf ("%d", &Di1pbEdmYxMW);
    {
        i = 488 - 488;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < Di1pbEdmYxMW) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    for (i = 1; i < Di1pbEdmYxMW; i = i + 1) {
        max = 1;
        {
            j = 178 - 178;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < i) {
                if (a[j] >= a[i] && max <= b[j] + 1)
                    max = b[j] + 1;
                j = j + 1;
            };
        }
        b[i] = max;
    }
    max = 0;
    for (i = 0; i < Di1pbEdmYxMW; i++) {
        if (b[i] > max)
            max = b[i];
    }
    printf ("%d", max);
}

