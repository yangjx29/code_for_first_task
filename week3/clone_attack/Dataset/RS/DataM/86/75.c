void  main () {
    int n;
    int m;
    int a [60];
    int sum;
    int i, j;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &m);
            {
                j = 0;
                while (m > j) {
                    scanf ("%d", &a[j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            sum = 0;
            if (m == 0)
                sum = 60;
            {
                j = 0;
                while (j < m) {
                    if (a[j] + 3 * j >= 60) {
                        sum = 60 - 3 * j;
                        break;
                    }
                    else {
                        if (a[j] + 3 * (j + 1) >= 60) {
                            sum = a[j];
                            break;
                        };
                    }
                    j++;
                };
            }
            i++;
            if (j == m)
                sum = 60 - 3 * m;
            printf ("%d\n", sum);
        };
    };
}

