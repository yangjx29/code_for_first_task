void  main () {
    int a [(914 - 814)] [100];
    int M5slghia1Cc, N;
    int t;
    int i;
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
    int j;
    int k;
    scanf ("%d", &t);
    {
        i = 732 - 732;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t > i) {
            i = i + 1;
            scanf ("%d %d", &M5slghia1Cc, &N);
            {
                j = 391 - 390;
                while (j <= N) {
                    a[(142 - 141)][j] = (130 - 129);
                    j = j + 1;
                };
            }
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
            {
                j = 163 - 162;
                while (j <= M5slghia1Cc) {
                    a[j][1] = 1;
                    j++;
                };
            }
            {
                j = 588 - 586;
                while (j <= M5slghia1Cc) {
                    {
                        k = 2;
                        while (k <= N) {
                            if (j < k)
                                a[j][k] = a[j][j];
                            if (j == k)
                                a[j][k] = a[j][j - 1] + 1;
                            if (j > k)
                                a[j][k] = a[j - k][k] + a[j][k - 1];
                            k = k + 1;
                        };
                    }
                    j++;
                };
            }
            printf ("%d\n", a[M5slghia1Cc][N]);
        };
    };
}

