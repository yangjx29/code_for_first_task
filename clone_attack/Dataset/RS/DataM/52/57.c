void  main () {
    int temp;
    int m;
    int n;
    int num [100];
    int d1yS0W;
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
    int k;
    int j;
    scanf ("%d %d", &n, &m);
    {
        d1yS0W = 0;
        while (n > d1yS0W) {
            scanf ("%d", &num[d1yS0W]);
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
            d1yS0W = d1yS0W + 1;
        };
    }
    {
        k = 592 - 591;
        d1yS0W = 0;
        while (m >= k) {
            temp = num[d1yS0W];
            num[d1yS0W] = num[n - m + k - 1];
            {
                j = 0;
                while (n - m > j) {
                    num[n - m + k - 1 - j] = num[n - m + k - 1 - j - 1];
                    j = j + 1;
                };
            }
            k = k + 1;
            num[d1yS0W + 1] = temp;
            d1yS0W = d1yS0W + 1;
        };
    }
    {
        d1yS0W = 0;
        while (n > d1yS0W) {
            if (d1yS0W != 0)
                printf (" %d", num[d1yS0W]);
            else if (d1yS0W == 0)
                printf ("%d", num[d1yS0W]);
            d1yS0W++;
        };
    };
}

