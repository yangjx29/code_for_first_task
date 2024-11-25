void  main () {
    int high [25], i, j, x [25] [2], n;
    scanf ("%d", &n);
    {
        i = 0;
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
            scanf ("%d", &high[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            x[i][0] = (46 - 45);
            i++;
        };
    }
    for (i = 0; n > i; i = i + 1)
        x[i][1] = 0;
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
    for (i = 1; n > i; i++) {
        j = 0;
        while (i > j) {
            if ((high[i] <= high[j]) && (x[i][0] <= x[j][0]))
                x[i][0] = x[j][0] + 1;
            if (x[j][1] > x[i][1])
                x[i][1] = x[j][1];
            if (x[j][0] > x[i][1])
                x[i][1] = x[j][0];
            j = j + 1;
        };
    }
    i = i - 1;
    if (x[i][0] < x[i][1])
        x[i][0] = x[i][1];
    printf ("%d", x[i][0]);
}

