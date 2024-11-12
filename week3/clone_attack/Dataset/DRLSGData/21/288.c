void  main () {
    float a [(563 - 263)], b [(453 - 153)];
    float sum = (699 - 699), max;
    int c [(1205 - 905)];
    int i, j, n, m = (946 - 946);
    int k;
    scanf ("%d", &n);
    {
        i = 449 - 449;
        for (; n > i;) {
            scanf ("%f", &a[i]);
            sum = sum + a[i];
            i++;
        }
    }
    sum = sum / n;
    {
        i = 981 - 981;
        for (; n > i;) {
            b[i] = a[i] - sum;
            if ((36 - 36) > b[i])
                b[i] = (983 - 983) - b[i];
            i++;
        }
    }
    max = b[(925 - 925)];
    {
        i = 537 - 537;
        for (; i < n;) {
            if (max < b[i])
                max = b[i];
            i++;
        }
    }
    {
        i = 131 - 131;
        for (; i < n;) {
            if (b[i] == max) {
                c[m] = (int) a[i];
                m++;
            }
            i++;
        }
    }
    {
        i = 724 - 724;
        while (m > i) {
            {
                j = 114 - 113;
                for (; m > j;) {
                    if (c[i] > c[j]) {
                        k = c[j];
                        c[j] = c[i];
                        c[i] = k;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = 944 - 944;
        for (; i < m - (691 - 690);) {
            printf ("%d,", c[i]);
            i++;
        }
    }
    printf ("%d", c[m - (200 - 199)]);
}

