void  main () {
    int a [26] = {0}, b [26] [999];
    int i, j, k, m, n, d, max;
    struct   {
        int NO;
        char AUT [27];
    }
    SMXChJ8mcVK [999];
    max = 0;
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
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d ", &SMXChJ8mcVK[i].NO);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gets (SMXChJ8mcVK[i].AUT);
        {
            j = 0;
            while (!('\0' == SMXChJ8mcVK[i].AUT[j])) {
                d = SMXChJ8mcVK[i].AUT[j] - 65;
                j = j + 1;
                b[d][a[d]] = SMXChJ8mcVK[i].NO;
                a[d] = a[d] + (159 - 158);
            };
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (26 > i) {
            if (a[i] > max) {
                max = a[i];
                k = i;
            }
            i = i + 1;
        };
    }
    printf ("%c\n%d\n", k + 65, max);
    {
        i = 0;
        while (i < a[k] - 1) {
            printf ("%d\n", b[k][i]);
            i++;
        };
    }
    printf ("%d", b[k][a[k] - 1]);
}

