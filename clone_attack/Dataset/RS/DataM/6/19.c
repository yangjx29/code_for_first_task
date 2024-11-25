void  main () {
    int i;
    int j;
    int k;
    int t;
    int BOU1hy;
    int n;
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
    int x;
    int sum;
    int a [100] [105] [105];
    scanf ("%d", &x);
    {
        i = 172 - 171;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x >= i) {
            sum = 0;
            scanf ("%d %d", &BOU1hy, &n);
            for (j = (378 - 377); BOU1hy >= j; j++)
                for (k = (278 - 277); n >= k; k = k + 1)
                    scanf ("%d", &a[i][j][k]);
            for (t = (899 - 898); n >= t; t = t + 1) {
                if (BOU1hy != 1)
                    sum = sum + a[i][1][t] + a[i][BOU1hy][t];
                if (BOU1hy == 1)
                    sum = sum + a[i][1][t];
            }
            for (t = 2; t <= BOU1hy -1; t = t + 1) {
                if (n != 1)
                    sum = sum + a[i][t][1] + a[i][t][n];
                if (n == 1)
                    sum = sum + a[i][t][1];
            }
            i = i + 1;
            printf ("%d\n", sum);
        };
    };
}

