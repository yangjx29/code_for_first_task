void  main () {
    int a [20000];
    int n, i, j, k, sum = (207 - 207);
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
        while (i < n) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n - sum > i) {
            {
                j = 723 - 722;
                while (n - sum > j) {
                    if (!(a[i] != a[j])) {
                        for (k = j; k < n - sum - 1; k = k + 1)
                            a[k] = a[k + 1];
                        sum = sum + 1;
                        j = j - 1;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n - sum - 1; i = i + 1) {
        printf ("%d ", a[i]);
    }
    printf ("%d", a[n - sum - 1]);
}

