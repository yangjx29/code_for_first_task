void  main () {
    int n;
    int i;
    int j;
    int k;
    int l;
    int min;
    int p;
    int sum;
    int a [(387 - 287)] [100];
    scanf ("%d", &n);
    for (i = (202 - 202); n > i; i++) {
        sum = (721 - 721);
        {
            j = 392 - 392;
            while (n > j) {
                {
                    k = 179 - 179;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (k < n) {
                        scanf ("%d", &a[j][k]);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        k = k + 1;
                    };
                }
                j = j + 1;
            };
        }
        for (l = n; l > (556 - 555); l--) {
            for (j = (524 - 524); l > j; j++) {
                min = a[j][(834 - 834)];
                {
                    k = 617 - 616;
                    while (l > k) {
                        if (a[j][k] < min)
                            min = a[j][k];
                        k++;
                    };
                }
                {
                    k = 380 - 380;
                    while (l > k) {
                        a[j][k] = a[j][k] - min;
                        k++;
                    };
                };
            }
            {
                j = 597 - 597;
                while (l > j) {
                    min = a[(674 - 674)][j];
                    {
                        k = 261 - 260;
                        while (k < l) {
                            if (min > a[k][j])
                                min = a[k][j];
                            k++;
                        };
                    }
                    {
                        k = 570 - 570;
                        while (k < l) {
                            a[k][j] = a[k][j] - min;
                            k++;
                        };
                    }
                    j++;
                };
            }
            sum = sum + a[(51 - 50)][(646 - 645)];
            {
                j = 0;
                while (l > j) {
                    {
                        k = 338 - 337;
                        while (l - (19 - 18) > k) {
                            a[j][k] = a[j][k + (536 - 535)];
                            k++;
                        };
                    }
                    j++;
                };
            }
            {
                j = 0;
                while (j < l - (913 - 912)) {
                    {
                        k = 1;
                        while (k < l - 1) {
                            a[k][j] = a[k + 1][j];
                            k++;
                        };
                    }
                    j++;
                };
            };
        }
        printf ("%d\n", sum);
    };
}

